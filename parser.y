%{
#include <stdio.h>
#include <ctype.h>
#include <malloc.h>
#include "tn.h"
#include "glob.h"

/*yacc source for Mini C*/
void semantic(int);
%}

%token TIDENT TFLOAT TNUMBER
%token TCONST TELSE TIF TINT TRETURN TVOID TWHILE
%token TASSIGN TADDASSIGN TSUBASSIGN TMULASSIGN TDIVASSIGN TMODASSIGN
%token TOR TAND TEQUAL TNOTEQU TGREATE TLESSE TLESS TGREAT
%token TINC TDEC
%token TPLUS TMINUS TSTAR TSLASH TMOD TIS TNOT TCOMMA TSEMI
%token TLPAREN TRPAREN TLBRACE TRBRACE TLBRACKET TRBRACKET
%nonassoc TIF_ERROR TIF_CONDITION_ERROR
%nonassoc TELSE_ERROR TELSE_CONDITION_ERROR
%nonassoc UIF
%nonassoc TELSE

%%
<<<<<<< HEAD
mini_c 			: translation_unit				{semantic(1);};
translation_unit 	: external_dcl					{semantic(2);}
			| translation_unit external_dcl		{semantic(3);};
external_dcl 		: function_def					{semantic(4);}
		  	| declaration					{semantic(5);};
function_def 		: function_header compound_st		{semantic(6);};
function_header 	: dcl_spec function_name formal_param	{semantic(7);};
dcl_spec 		: dcl_specifiers				{semantic(8);};
dcl_specifiers 		: dcl_specifier					{semantic(9);}
		 	| dcl_specifiers dcl_specifier			{semantic(10);};
dcl_specifier 		: type_qualifier					{semantic(11);}
			| type_specifier				{semantic(12);};
type_qualifier 		: tconst					{semantic(13);};
type_specifier 		: tint						{semantic(14);}  /*함수 타입 지정*/
		 	| tvoid						{semantic(15);};
function_name 	: tident						{semantic(16);};
formal_param 		: '(' opt_formal_param ')' 			{semantic(17);};
opt_formal_param 	: formal_param_list				{semantic(18);}
		   	|						{semantic(19);};
formal_param_list 	: param_dcl					{semantic(20);}
		    	| formal_param_list ',' param_dcl 		{semantic(21);};
param_dcl 		: dcl_spec declarator				{semantic(22);};
compound_st 		: '{' opt_dcl_list opt_stat_list '}' 		{semantic(23);};
opt_dcl_list 		: declaration_list				{semantic(24);}
			|						{semantic(25);};
declaration_list 	: declaration					{semantic(26);}
			| declaration_list declaration 			{semantic(27);};
declaration 		: dcl_spec init_dcl_list ';'			{semantic(28);};
init_dcl_list 		: init_declarator				{semantic(29);}
			| init_dcl_list ',' init_declarator 		{semantic(30);};
init_declarator 	: declarator						{semantic(31);}
		 	| declarator '=' tnumber			{semantic(32);};
declarator 		: tident						{semantic(33);}
	     		| tident '[' opt_number ']'			{semantic(34);};
opt_number 		: tnumber					{semantic(35);}
	     		|						{semantic(36);};
opt_stat_list 		: statement_list				{semantic(37);}
		 	|						{semantic(38);};
statement_list 		: statement					{semantic(39);}
                             | statement_list error 
		 	| statement_list statement 			{semantic(40);};
statement 		: compound_st				{semantic(41);}
	   		| expression_st				{semantic(42);}
	   		| if_st						{semantic(43);}
	   		| while_st					{semantic(44);}
	   		| return_st					{semantic(45);}
=======
mini_c			: translation_unit					;
translation_unit	: external_dcl
			| translation_unit external_dcl
>>>>>>> yeeun
			;
external_dcl		: function_def
			| declaration
			| TIDENT TSEMI
			| TIDENT error						{yyerrok identifier_type=0 PrintError("Missing semicolon", linenum);}         
function_def		: function_header compound_st
			| function_TSEMICOLON
			| function_header error					{yyerrok: identifier_type=0; PrintError("Missing semicolon", linenum);}
			| error compound_st					{yyerrok; PrintError("No function header", linenum);}
			;
function_header		: dcl_spec function_name formal_param			;
dcl_spec		: dcl_specifiers					;
dcl_specifiers		: dcl_specifier
			| dcl_specifiers dcl_specifier
			;
dcl_specifier		: type_qualifier
			| type_specifier
			;
type_qualifier		: TCONST						;
type_specifier		: TINT							{semantic(1);}
			| TFLOAT						{semantic(2);}
			| TVOID							{semantic(3);}
			;
function_name		: TIDENT						{semantic(4);}               
formal_param		: TLPAREN opt_formal_param TRPAREN
			| TLPAREN opt_formal_param error			{yyerrok: PrintError("Not closed small bracket", linenum);}
			;
opt_formal_param	: formal_param_list      
			|
			;
formal_param_list	: param_dcl						{semantic(7);}         
			| formal_param_list TCOMMA param_dcl			{semantic(7);} 
			| formal_param_list param_dcl				{yyerrok; identifier_type=-0; PrintError("Missing comma", linenum);}
			;
param_dcl		: dcl_spec declarator					;
compound_st		: TLBRACE compound TRBRACE
			| TLBRACE compound error    				{yyerrok; PrintError("Not closed medium bracket", linenum);}   
			;
compound		: opt_dcl_list opt_stat_list				;
opt_dcl_list		: declaration_list
			|
			; 
declaration_list	: declaration
			| declaration_list declaration
			;
declaration		: dcl_spec init_dcl_list TSEMI
			| dcl_spec init_dcl_list error				{yyerrok; identifier_type=0; PrintError("Missing semicolon",linenum);}
			;
init_dcl_list		: init_declarator            
			| init_dcl_list TCOMMA init_declarator    
			| init_dcl_list init_declarator				{yyerrok; identifier_type=0; PrintError("Missing comma",linenum);}
			;
init_declarator		: declarator
			| declarator TIS TNUMBER
			| declarator TEQUAL TNUMBER				{yyerrok; identifier_type=0; PrintError("Declaring error",linenum);}
			;
declarator		: TIDENT						{semantic(5);}            
			| tident TLBRACKET opt_number TRBRACKET			{semantic(6);}
			| TIDENT TLBRACKET opt_number error			{yyerrok; identifier_type=0; PrintError("Not closed large bracket",linenum);}
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
			| TIF TLPAREN expression error				{yyerrok; PrintError("Not closed small bracket", linenum);}
			;
while_st 		: TWHILE TLPAREN expression TRPAREN statement
			| TWHILE TLPAREN expression error			{yyerrok; PrintError("Not closed small bracket", linenum);}
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
	   		| TSUB unary_exp
	   		| TNOT unary_exp
	   		| TINC unary_exp
	   		| TDEC unary_exp
			;
postfix_exp 		: primary_exp
	      		| postfix_exp TLBRACKET expression TRBRACKET
	      		| postfix_exp TLBRACKET expression error		{yyerrok; PrintError("Not closed large bracket", linenum);}
	      		| postfix_exp TLPAREN opt_actual_param TRPAREN
	      		| postfix_exp TLPAREN opt_actual_param error		{yyerrok; PrintError("Not closed small bracket", linenum);}
	      		| postfix_exp TINC
	      		| postfix_exp TDEC					;
opt_actual_param 	: actual_param
		  	|						
			;
actual_param 		: actual_param_list					;
actual_param_list 	: assignment_exp				
		   	| actual_param_list TCOMMA assignment_exp 	
			;
primary_exp 		: TIDNET						{semantic(5);}
	     		| TNUMBER					
	     		| TLPAREN expression TRPAREN
			| TLPAREN expression error				{yyerrok; PrintError("Not closed small bracket", linenum);};
%%

void semantic(int n){
	switch(n){
		case 1 : identifier_type = 1; break;
		case 2 : identifier_type = 2; break;
		case 3 : identifier_type = 3; break;
		case 4 : identifier = 1; break;
		case 5 : identifier = 2; break;
		case 6 : identifier = 3; break;
		case 7 : identifier = 4 break;
	}
}
