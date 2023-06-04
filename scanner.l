%{
/*
 * scanner.l - lexical analyzer for the MiniC
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tn.h"
#include "glob.h"
void yyerror(ERRORtypes err_type);
int SymbolTable();
%}

%%
"const"				return(TCONST);
[cC][oO][nN][sS][tT]		{ err_type = illid_illegal; yyerror(err_type); return(TERROR); }
"else" 				return(TELSE);
[eE][lL][sS][eE]		{ err_type = illid_illegal; yyerror(err_type); return(TERROR); }
"if" 				return(TIF);
[iI][fF]			{ err_type = illid_illegal; yyerror(err_type); return(TERROR); }
"int"				return(TINT);
[iI][nN][tT]			{ err_type = illid_illegal; yyerror(err_type); return(TERROR); }
"return"			return(TRETURN);
[rR][eE][tT][uU][rR][nN]	{ err_type = illid_illegal; yyerror(err_type); return(TERROR); }
"void" 				return(TVOID);
[vV][oO][iI][dD]		{ err_type = illid_illegal; yyerror(err_type); return(TERROR); }
"while" 			return(TWHILE);
[wW][hH][iI][lL][eE]		{ err_type = illid_illegal; yyerror(err_type); return(TERROR); }

"+" 				return(TPLUS);
"-" 				return(TMINUS);
"*" 				return(TSTAR);
"/" 				return(TSLASH);
"%" 				return(TMOD);

"=" 				return(TASSIGN);
"+=" 				return(TADDASSIGN);
"-=" 				return(TSUBASSIGN);
"*=" 				return(TMULASSIGN);
"/=" 				return(TDIVASSIGN);
"%=" 				return(TMODASSIGN);

"!" 				return(TNOT);
"&&" 				return(TAND);
"||" 				return(TOR);

"==" 				return(TEQUAL);
"!="	 			return(TNOTEQU);
"<" 				return(TLESS);
">" 				return(TGREAT);
"<=" 				return(TLESSE);
">=" 				return(TGREATE);

"++" 				return(TINC);
"--" 				return(TDEC);

"(" 				return(TLPAREN);
")" 				return(TRPAREN);
"," 				return(TCOMMA);
"{"				return(TLBRACE);
"}"				return(TRBRACE);
"["				return(TLBRACKET);
"]"				return(TRBRACKET);
";" 				return(TSEMI);

[1-9][0-9]*|0([0-7]+|(x|X)[0-9A-Fa-f]*)?	return(TNUMBER);

[A-Za-z_][A-Za-z0-9_]* 		{ 
					if(yyleng > MAX_LEN)
						{ err_type = illid_long; yyerror(err_type); return(TERROR);}
					else
						{ SymbolTable(); return(TIDENT);}
				}



"//".*				return(TCOMMENT);
"/*"([^*]|\*+[^*/])*\**"*/"		{
					for(int i=0;i<yyleng;i++)
						if(yytext[i]=='\n') cLine++;
					return(TCOMMENT);

				}

[ \t]			 	;
"\n" 				{ cLine++; return(TCARR);}

[0-9]+[A-Za-z0-9_]+ 		{ err_type = illid_digit; yyerror(err_type); return(TERROR); }

. 				{ err_type = illid_illch; yyerror(err_type); return(TERROR); }
%%

int yywrap()
{
	return 1;
}