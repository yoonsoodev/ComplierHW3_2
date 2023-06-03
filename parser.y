%{
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "tn.h"
#include "glob.h"
#include "lex.yy.c"

void PrintError(ERRORtypes err);
void initGlobalVariable();

/*yacc source for Mini C*/
void semantic(int);
void yyerror(const char* s);
%}

%token TIDENT TFLOAT TNUMBER
%token TCONST TELSE TIF TINT TRETURN TVOID TWHILE
%token TPLUS TMINUS TSTAR TSLASH TMOD 
%token TASSIGN TADDASSIGN TSUBASSIGN TMULASSIGN TDIVASSIGN TMODASSIGN
%token TNOT TOR TAND TEQUAL TNOTEQU TGREATE TLESSE TLESS TGREAT TINC TDEC
%token TLPAREN TRPAREN TCOMMA TLBRACE TRBRACE TLBRACKET TRBRACKET TSEMI
%token TERROR TCARR TCOMMENT
%nonassoc TIF_ERROR TIF_CONDITION_ERROR
%nonassoc TELSE_ERROR TELSE_CONDITION_ERROR
%nonassoc UIF
%nonassoc TELSE
%nonassoc LOWER_THAN_ELSE

%%
mini_c			: translation_unit;
translation_unit	: external_dcl
			| translation_unit external_dcl
			;
external_dcl		: function_def
			| declaration
			| TIDENT TSEMI
			| TIDENT error						{yyerrok; PrintError(missing_semi);}         
function_def		: function_header compound_st
			| function_header TSEMI
			| function_header error					{yyerrok; PrintError(missing_semi);}
			| error compound_st					{yyerrok; PrintError(missing_funcheader);}
			;
function_header		: dcl_spec function_name formal_param;
dcl_spec		: dcl_specifiers					;
dcl_specifiers		: dcl_specifier
			| dcl_specifiers dcl_specifier
			;
dcl_specifier		: type_qualifier
			| type_specifier
			;
type_qualifier		: TCONST						{semantic(1);};
type_specifier		: TINT							{semantic(2);}
			| TFLOAT						{semantic(3);}
			| TVOID							{semantic(4);}
			;
function_name		: TIDENT						{semantic(5);};               
formal_param		: TLPAREN opt_formal_param TRPAREN
			| TLPAREN opt_formal_param error			{yyerrok; PrintError(missing_sbracket);}
			;
opt_formal_param	: formal_param_list      
			|
			;
formal_param_list	: param_dcl						{semantic(8);}         
			| formal_param_list TCOMMA param_dcl			{semantic(8);} 
			| formal_param_list param_dcl				{yyerrok; PrintError(missing_comma);}
			;
param_dcl		: dcl_spec declarator					;
compound_st		: TLBRACE compound TRBRACE
			| TLBRACE compound error    				{yyerrok; PrintError(missing_mbracket);}   
			;
compound		: opt_dcl_list opt_stat_list				;
opt_dcl_list		: declaration_list
			|
			; 
declaration_list	: declaration
			| declaration_list declaration
			;
declaration		: dcl_spec init_dcl_list TSEMI
			| dcl_spec init_dcl_list error				{yyerrok; PrintError(missing_semi);}
			;
init_dcl_list		: init_declarator            
			| init_dcl_list TCOMMA init_declarator    
			| init_dcl_list init_declarator				{yyerrok; PrintError(missing_comma);}
			;
init_declarator		: declarator
			| declarator TASSIGN TNUMBER
			| declarator TEQUAL TNUMBER				{yyerrok; PrintError(declaring_err);}
			;
declarator		: TIDENT						{semantic(6);}            
			| TIDENT TLBRACKET opt_number TRBRACKET			{semantic(7);}
			| TIDENT TLBRACKET opt_number error			{yyerrok; PrintError(missing_lbracket);}
			;
opt_number		: TNUMBER               
			|
			;
opt_stat_list		: statement_list            
			|
			;                  
statement_list		: statement  
			| statement_list statement
			| statement_list declaration
			;
statement		: compound_st            
			| expression_st            
			| if_st         
			| while_st               
			| return_st            
			;


expression_st 		: opt_expression TSEMI					;
opt_expression 		: expression						;
if_st 			: TIF TLPAREN expression TRPAREN statement %prec LOWER_THAN_ELSE
			| TIF TLPAREN expression TRPAREN statement TELSE statement
			| TIF TLPAREN expression error				{yyerrok; PrintError(missing_sbracket);}
			;
while_st 		: TWHILE TLPAREN expression TRPAREN statement
			| TWHILE TLPAREN expression error			{yyerrok; PrintError(missing_sbracket);}
return_st 		: TRETURN opt_expression TSEMI				;
expression 		: assignment_exp					;
assignment_exp 		: logical_or_exp				
			| unary_exp TASSIGN assignment_exp
			| unary_exp TADDASSIGN assignment_exp
			| unary_exp TSUBASSIGN assignment_exp
			| unary_exp TMULASSIGN assignment_exp
			| unary_exp TDIVASSIGN assignment_exp
			| unary_exp TMODASSIGN assignment_exp
			;


logical_or_exp 		: logical_and_exp				
			| logical_or_exp TOR logical_and_exp 	
			;
logical_and_exp 	: equality_exp					
		 	| logical_and_exp TAND equality_exp
			;
equality_exp 		: relational_exp
			| equality_exp TEQUAL relational_exp
			| equality_exp TNOTEQU relational_exp
			;
relational_exp 		: additive_exp
			| relational_exp TGREAT additive_exp
			| relational_exp TLESS additive_exp
			| relational_exp TGREATE additive_exp
			| relational_exp TLESSE additive_exp
			;
additive_exp 		: multiplicative_exp
			| additive_exp TPLUS multiplicative_exp
			| additive_exp TMINUS multiplicative_exp
			;
multiplicative_exp 	: unary_exp
		    	| multiplicative_exp TSTAR unary_exp
		    	| multiplicative_exp TSLASH unary_exp
		    	| multiplicative_exp TMOD unary_exp
			;
unary_exp 		: postfix_exp
	   		| TMINUS unary_exp
	   		| TNOT unary_exp
	   		| TINC unary_exp
	   		| TDEC unary_exp
			;
postfix_exp 		: primary_exp
	      		| postfix_exp TLBRACKET expression TRBRACKET
	      		| postfix_exp TLBRACKET expression error		{yyerrok; PrintError(missing_lbracket);}
	      		| postfix_exp TLPAREN opt_actual_param TRPAREN
	      		| postfix_exp TLPAREN opt_actual_param error		{yyerrok; PrintError(missing_sbracket);}
	      		| postfix_exp TINC
	      		| postfix_exp TDEC					;
opt_actual_param 	: actual_param
		  	|						
			;
actual_param 		: actual_param_list					;
actual_param_list 	: assignment_exp				
		   	| actual_param_list TCOMMA assignment_exp 	
			;
primary_exp 		: TIDENT						{semantic(6);}
	     		| TNUMBER					
	    		| TLPAREN expression TRPAREN
			| TLPAREN expression error				{yyerrok; PrintError(missing_sbracket);};
%%

void semantic(int n){
	initGlobalVariable();
	switch(n){
		case 1 : //const
			isConst = 1;
		case 2 : //int data type
			dataTypeFlag = 0;
			break;
		case 3 : //float data type
			dataTypeFlag = 1;
			break;
		case 4 : //void return type(if function name type)
			dataTypeFlag = 2;
			break;
		case 5 : //function name type
			typeFlag = 0;
			break;
		case 6 : //scalar variable type
			typeFlag = 1;
			break;
		case 7 : //array variable type
			typeFlag = 2;
			break;
		case 8 : //function parameter type
			typeFlag = 3;
			break;
	}
}
