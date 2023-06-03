/*
 * error.c - print error
*/

#include <stdio.h>
#include <stdlib.h>
#include "glob.h"

extern char *yytext;

void PrintError(ERRORtypes err)
{
	switch(err)
	{
	case noerror: 
		break;
	case illid_digit:
		num_err++;
		printf("%6d          ERROR!!			  %-10s		start with digit\n", cLine, yytext);
		break;
	case illid_long:
		num_err++;
		printf("%6d          ERROR!!			  %-13s	 too long identifier\n", cLine, yytext);
		break;
	case illid_illch:
		num_err++;
		printf("%6d          ERROR!!			  %-5c		illegal symbol\n", cLine, yytext[0]);
		break;
	case illid_illegal:
		num_err++;
		printf("%6d          ERROR!!			  %-5s		illegal identifier\n", cLine, yytext);
		break;
	case overst:
		num_err++;
		printf("\nError : OVERFLOW in ST\n");
		printf("==================================================\n");
		exit(0);
		break;
	case missing_semi:
		num_err++;
		printf("%6d          ERROR!!			  missing semicolon\n", cLine);
		break;
	case missing_sbracket:
		num_err++;
		printf("%6d          ERROR!!			  not closed small bracket\n", cLine);
		break;
	case missing_mbracket:
		num_err++;
		printf("%6d          ERROR!!			  not closed medium bracket\n", cLine);
		break;
	case missing_lbracket:
		num_err++;
		printf("%6d          ERROR!!			  not closed large bracket\n", cLine);
		break;
	case missing_comma:
		num_err++;
		printf("%6d          ERROR!!			  missing comma\n", cLine);
		break;
	case missing_funcheader:
		num_err++;
		printf("%6d          ERROR!!			  no function header\n", cLine);
		break;
	}
}
