/*
 * main.c - token, 에러 개수 출력
 */
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "tn.h" 
#include "glob.h" 

extern yylex();
extern char *yytext;
void printHSTable();

void main()
{
    cLine = 1;
	printf("=========================[[Parsing Start]]========================\n");
	yyparse();
	printf("==========================[[Parsing Ends]]========================\n");
	printf("\n\nNumber of errors: %d\n\n", num_err);
	printf("==========================[[Hash Table]]==========================\n");

	printHSTable();
}


void printHSTable(){
	HTpointer here;
	int i, j;

	for (i = 0; i < HTsize; i++) {
		if (HT[i] != NULL) {
			here = HT[i];
			printf("HashCode %d:	 ", i);
			while (here != NULL) {
				j = here->index;
				while (ST[j] != '\0') {
					printf("%c", ST[j++]);
				}
				if (here->isFunction) { // 함수인 경우
					switch (here->spec)
					{
						case  INT:
							printf(" / Return Type: Integer ");
							break;
						case  VOID:
							printf(" / Return Type: Void ");
							break;
						case  FLOAT:
							printf(" / Return Type: Float ");
							break;
					}
					printf("Function Name ");
				}
				else { // 변수인 경우
					if (here->isConst) {
						printf(" / Const ");
					}
					switch (here->spec)
					{
					case  INT:
						printf(" / Integer ");
						break;
					case  FLOAT:
						printf(" / Float ");
						break;
					}

					if (here->isParam) {
						printf("Parameter ");
					}

					if (here->isArray) { // Array
						printf("Array ");
					}
					printf("Variable ");
				}
				printf("/ Linenum: %d \n", here->linenum);
				here = here->next;
			}
		}
	}
	
}