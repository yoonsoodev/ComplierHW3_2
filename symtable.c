/*
 * Symbol.c - Symbol table management
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "glob.h"

void PrintError(ERRORtypes err);
extern char* yytext;
extern int yyleng;

char print_ST[STsize];	//ST for printing the results
int p_nextfree = 0;		//nextfree of print_ST
int str_length;			//count length of string to print the results nicely

/*
 * computeHS() - Compute the hash code of identifier by summing the ordinal values of
 *             its charactors an then taking the sum modulo the size of HT
 */
void ComputeHS(int nid, int nfree)
{
	int code, i;
	code = 0;
	for (i = nid; i < nfree - 1; i++) {
		int current = (int)ST[i];
		//If current is lowercase, convert it to uppercase
		current = (current >= 'A' && current <= 'Z' ? current - 'A' + 'a' : current);
		code += current;
	}
	hashcode = (code % HTsize) + 1;
	hashcode = (hashcode == HTsize ? 0 : hashcode);
}

/*
 * LookupHS() - For each identifier, Look it up in the hashtable for previous occurrence
 *              of the identifier. If fine a match, set the found flag as true. Otherwise flase.
 *              If fine a match, save the starting index of ST in same id
 */
void LookupHS(int nid, int hscode)
{
	HTpointer here;
	int i, j;

	found = FALSE;
	if (HT[hscode] != NULL) {
		here = HT[hscode];
		while (here != NULL && found == FALSE) {
			found = TRUE;
			i = here->index;
			j = nid;
			sameid = i;

			while (ST[i] != '\0' && ST[j] != '\0' && found == TRUE) {
				int left = ST[i] >= 'A' && ST[i] <= 'Z' ? ST[i] - 'A' + 'a' : ST[i];
				int right = ST[j] >= 'A' && ST[j] <= 'Z' ? ST[j] - 'A' + 'a' : ST[j];
				if (left != right)
					found = FALSE;
				else {
					i++;
					j++;
				}
			}
			here = here->next;
		}
	}
}

/*
 * ADDHT() - Add a new identifier to the hash table.
 *           If list head ht[hashcode] is null, simply add a list element with
 *           starting index of the identifier in ST.
 *           If list head is not a null, it adds a new identifier to the head of the chain
 */
void ADDHT(int hscode)
{
	// initialize 하는 부분임
	// 일단 symboltable에 저장해놓고 parser에 돌림 -> 값 변경됨 
	HTpointer ptr;
	ptr = (HTpointer)malloc(sizeof(ptr));
	// 맨 처음 들어온 identifier
	if (HT[hscode] == NULL)
	{
		ptr->type = 0;
		ptr->next = NULL;
		HT[hscode] = ptr;
		ptr->index = nextid;
		ptr->func_idx = -1;
		ptr->isConst = 0;
		current_id = ptr;
	}
	// 이미 identifier가 추가되어 있는 경우
	else {
		ptr->type = 0;
		ptr->index = nextid;
		ptr->next = HT[hscode]; // 이미 추가된 identifier와 이어줌
		HT[hscode] = ptr;
		current_id = ptr;
		ptr->isConst = 0;
		ptr->func_idx = -1;
	}
}

void ADDAttribute(ID id, Types idtype, Types returntype) {
	ptr->id = 0;
	ptr->idtype = 0;
	ptr->returntype = 0;
}
/*
 * SymbolTable() - If read the identifier, symbol table management 
 * Scanner에서 TIDENT 인식 -> Parser.y에서 값 변경해서 넘겨줌 -> Symboltable에서 해당 값들 저장
 */
int SymbolTable()
{
	err = noerror;

	//READ identifier
	for (int i = 0; i < yyleng; i++) {
		ST[nextfree++] = yytext[i];
	}
	ST[nextfree++] = '\0'; // identifier의 가장 마지막에는 \0이 들어옴 -> Identifier 출력 시 start index부터 \0까지 출력하도록 하면 됨

	if((nextfree == STsize) || ((nextfree+yyleng) > STsize)) {
		err = overst;
		PrintError(err);
	}

	ComputeHS(nextid, nextfree);
	LookupHS(nextid, hashcode);

	if (!found) {
		ADDHT(hashcode);
		nextid = nextfree;
	}
	else {
		nextfree = nextid; // 이미 있는 경우에는 symboltable에 저장 안함
		// 변수 재정의 되었다고 출력하는 에러 생성 시 여기서 만지면 될듯
	}
	return 1;
}

/*
 Identifier 속성
• 문자와 숫자로 구성하는 문자열, 단, 문자 는 a ..z, A, ..Z, _ 만 가능함
• 숫자로 시작할 수 없음
• 대 소문자 구분 없음
• 12자 이내
*/