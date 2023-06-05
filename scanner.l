%{
/*
 * scanner.l - lexical analyzer for the MiniC
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include "tn.h"
#include "glob.h"
void PrintError(ERRORtypes err);
int SymbolTable();
%}

%%
"const"				return(TCONST);
[cC][oO][nN][sS][tT]		{ err = illid_illegal; PrintError(err); return(TERROR); }
"else" 				return(TELSE);
[eE][lL][sS][eE]			{ err = illid_illegal; PrintError(err); return(TERROR); }
"if" 				return(TIF);
[iI][fF]				{ err = illid_illegal; PrintError(err); return(TERROR); }
"int"				return(TINT);
[iI][nN][tT]			{ err = illid_illegal; PrintError(err); return(TERROR); }
"float"					return(TFLOAT);
[fF][lL][oO][aA][tT]			{ err = illid_illegal; PrintError(err); return(TERROR); }
"return"				return(TRETURN);
[rR][eE][tT][uU][rR][nN]		{ err = illid_illegal; PrintError(err); return(TERROR); }
"void" 				return(TVOID);
[vV][oO][iI][dD]			{ err = illid_illegal; PrintError(err); return(TERROR); }
"while" 				return(TWHILE);
[wW][hH][iI][lL][eE]		{ err = illid_illegal; PrintError(err); return(TERROR); }

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
[0-9]+"."[0-9]+?([Ee][-+]?[0-9]+)?			return(TREALNUMBER);
[A-Za-z_][A-Za-z0-9_]* 		{ 
					if(yyleng > MAX_LEN)
						{ err = illid_long; PrintError(err); return(TERROR);}
					else
						{ SymbolTable(); return(TIDENT);}
				}



"//".*				return(TCOMMENT);
"/*"([^*]|\*+[^*/])*\**"*/"		{
					for(int i=0;i<yyleng;i++)
						if(yytext[i]=='\n') cLine++;
					;

				}

[ \t]			 	;
"\n" 				{ cLine++;}

[0-9]+[A-Za-z0-9_]+ 		{ err = illid_digit; PrintError(err); return(TERROR); }

. 				{ err = illid_illch; PrintError(err); return(TERROR); }
%%

int yywrap()
{
	return 1;
}