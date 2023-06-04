/*
 * main.c - lexing and parsing and printing result
 */
#include <stdio.h>
#include <stdlib.h>
#include "tn.h" 
#include "glob.h" 

extern int yylex();
extern int yyparse();
extern char *yytext;

void printSymtable() { 	// HashTable print
	HTpointer here;
	printf("===========================[[HASH TABLE]]==================================\n");
	for (int i = 0; i < HTsize; i++) {
		if (HT[i] != NULL)
		{
			here = HT[i];
			while (here != NULL) {
				printf("HashCode %d	:			", i);

				// print identifier
				for (int j = here->index; ST[j] != '\0'; j++) {
						printf("%c", ST[j]);
				}

				if(here->HT_typeFlag = 0){ //function name
					switch(here->HT_dataTypeFlag){
						case 0://int
							printf("(function name, return type : int, line %d)", here->linenum);
							break;
						case 1://float
							printf("(function name, return type : float, line %d)", here->linenum);
							break;
						case 2://void
							printf("(function name, return type : void, line %d)", here->linenum);
							break;
					}
				}

				else if(here->HT_typeFlag = 1){ //scalar variable
					switch(here->HT_dataTypeFlag){
						case 0://int
							printf("(integer scalar variable, line %d)", here->linenum);
							break;
						case 1://float
							printf("(float scalar variable, line %d)", here->linenum);
							break;
					}
				}

				else if(here->HT_typeFlag = 2){ //array variable
					switch(here->HT_dataTypeFlag){
						case 0://int
							printf("(integer array variable, line %d)", here->linenum);
							break;
						case 1://float
							printf("(float array variable, line %d)", here->linenum);
							break;
					}
				}

				else if(here->HT_typeFlag = 3){ //function parameter
					switch(here->HT_dataTypeFlag){
						case 0://int
							printf("(integer function parameter, line %d)", here->linenum);
							break;
						case 1://float
							printf("(float function parameter, line %d)", here->linenum);
							break;
					}
				}
				here = here->next;
			}
		}

	}

}

int main()
{
	cLine = 1;
	//parsing
	printf("=========================[[PARSING RESULTS]]===============================\n");
	printf("***************************Parsing Begins**********************************\n");
	//yylex();
	yyparse();
	printf("****************************Parsing Ends***********************************\n");
	printf("\n\nNumber of errors: %d\n\n", num_err);
	printf("===========================================================================\n");


	if (num_err == 0)
		printf("\n\n*************** No errors detected\n");
	else
		printf("\n\n*************** Number of errors: %d\n\n", num_err);

	printf("=======================================================\n");

	return 0;
}
