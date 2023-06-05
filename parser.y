%{
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <malloc.h>
#include "glob.h"

/*yacc source for Mini C*/
int con = 0;
int func =0;
int param = 0;
int array = 0;
int type = NONE;

extern int yylex();
extern yyerror(char* s);
void changeHSTable();
%}

%token TEOF
%token TIDENT TNUMBER TREALNUMBER TCONST TELSE TIF TEIF TINT TRETURN TVOID TWHILE TFLOAT
%token TASSIGN TADDASSIGN TSUBASSIGN TMULASSIGN TDIVASSIGN TMODASSIGN 
%token TNOT TOR TAND TEQUAL TNOTEQU TGREAT TGREATE TLESS TLESSE TINC TDEC 
%token TERROR TPLUS TMINUS TSTAR TSLASH TMOD
%token TLPAREN TRPAREN TCOMMA TLBRACE TRBRACE TLBRACKET TRBRACKET TSEMI
%token TCOMMENT THEX TOCT

%nonassoc LOWER_THAN_ELSE
%nonassoc TELSE
%nonassoc LOWER_THAN_OPT_STAT_LIST	
%nonassoc OPT_STAT_LIST

%%
mini_c 				: translation_unit				
					;

translation_unit 	: external_dcl					
					| translation_unit external_dcl	
					;

external_dcl 		: function_def					
		  			| declaration
					| TIDENT TSEMI											
					| TIDENT error											{yyerrok; PrintError(missing_semi);}
					;

function_def 		: function_header compound_st
					| function_header error									{yyerrok; PrintError(missing_semi);}
					| error compound_st										{yyerrok; PrintError(missing_funcheader);}
					;

function_header 	: dcl_spec function_name formal_param	
					;

dcl_spec 			: dcl_specifiers				
					;

dcl_specifiers 		: dcl_specifier					
		 			| dcl_specifiers dcl_specifier	
					;

dcl_specifier 		: type_qualifier			
					| type_specifier			
					;

type_qualifier 		: TCONST												{con = 1;}			
					;

type_specifier 		: TINT													{type = INT;}
		 			| TVOID													{type = VOID;}
					| TFLOAT												{type = FLOAT;}
					;

function_name 		: TIDENT												
					{func = 1; 
					changeHSTable(); 
					func=0; con=0; param=0; array=0; type=NONE;}
					;

formal_param 		: TLPAREN opt_formal_param TRPAREN						
					{
					con = 0;
					func =0;
					param = 0;
					array = 0;
					type = NONE;}
					| TLPAREN opt_formal_param error						{yyerrok; PrintError(missing_sbracket);}
					;

opt_formal_param 	: formal_param_list				
					|														{param=0;}
					;

formal_param_list 	: param_dcl				
		    		| formal_param_list TCOMMA param_dcl 		
					| formal_param_list param_dcl							{yyerrok; PrintError(missing_comma);}
					;

param_dcl 			: dcl_spec declarator {param=1; changeHSTable();};

compound_st 		: TLBRACE opt_dcl_list opt_stat_list TRBRACE 
					| TLBRACE compound error    							{yyerrok; PrintError(missing_mbracket);}
					;

compound			: opt_dcl_list opt_stat_list ;
opt_dcl_list 		: declaration_list				
					|						
					;

declaration_list 	: declaration					
					| declaration_list declaration 			
					;

declaration 		: dcl_spec init_dcl_list TSEMI	
					{
						con = 0;
						func =0;
						param = 0;
						array = 0;
						type = NONE;
					}
					| dcl_spec init_dcl_list error							
					{yyerrok;
					con = 0;
					func =0;
					param = 0;
					array = 0;
					type = NONE;
					PrintError(missing_semi);}
					;

init_dcl_list 		: init_declarator				
					| init_dcl_list TCOMMA init_declarator
					| init_dcl_list init_declarator							{yyerrok; PrintError(missing_comma);}
					;

init_declarator 	: declarator						
		 			| declarator TASSIGN TNUMBER
					| declarator TEQUAL TNUMBER								{yyerrok; PrintError(declaring_err);}
					| declarator TASSIGN TREALNUMBER
					| declarator TEQUAL TREALNUMBER								{yyerrok; PrintError(declaring_err);}
					;

declarator 			: TIDENT												{changeHSTable(); }
	     			| TIDENT TLBRACKET opt_number TRBRACKET					{array=1; changeHSTable(); }
					| TIDENT TLBRACKET opt_number error						{yyerrok; PrintError(missing_lbracket);}
					;

opt_number 			: TNUMBER					
	     			|						
					;

opt_stat_list 		: statement_list OPT_STAT_LIST
		 			|
					;

statement_list 		: statement %prec LOWER_THAN_OPT_STAT_LIST					
			        | statement_list error 
					| statement_list statement 			
					;

statement 			: compound_st				
	   				| expression_st				
	   				| if_st						
	   				| while_st					
	   				| return_st					
					;

expression_st 		: opt_expression TSEMI;


opt_expression 		: expression					
		 			|						
					;

if_st 				: TIF TLPAREN expression TRPAREN statement %prec LOWER_THAN_ELSE 		
					| TIF TLPAREN expression TRPAREN statement TELSE statement
					| TIF TLPAREN expression error							{yyerrok; PrintError(missing_sbracket);}
					| TIF TLPAREN TRPAREN error								{yyerrok; PrintError(missing_condition);}
					| TIF error                                             {yyerrok; PrintError(missing_sbracket);}
					;

while_st 			: TWHILE TLPAREN expression TRPAREN TLBRACE statement TRBRACE
					| TWHILE TLPAREN expression TRPAREN TLBRACE statement error 			{yyerrok; PrintError(missing_mbracket);}
					| TWHILE TLPAREN expression error						{yyerrok; PrintError(missing_sbracket);}
					| TWHILE TLPAREN TRPAREN error							{yyerrok; PrintError(missing_condition);}
					| TWHILE error                                        {yyerrok; PrintError(missing_sbracket);}
					;

return_st 			: TRETURN opt_expression TSEMI;

expression 			: assignment_exp;

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

logical_and_exp		: equality_exp					
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

unary_exp 			: postfix_exp					
	   				| TMINUS unary_exp				
	   				| TNOT unary_exp				
	   				| TINC unary_exp				
	   				| TDEC unary_exp				
					;

postfix_exp 		: primary_exp
	      			| postfix_exp TLBRACKET expression TRBRACKET
					| postfix_exp TLBRACKET expression error				{yyerrok; PrintError(missing_lbracket);}
	      			| postfix_exp TLPAREN opt_actual_param TRPAREN
					| postfix_exp TLPAREN opt_actual_param error			{yyerrok; PrintError(missing_sbracket);}
					| postfix_exp TINC
	      			| postfix_exp TDEC
					;

opt_actual_param 	: actual_param			
		  			|						
					;

actual_param 		: actual_param_list;

actual_param_list 	: assignment_exp				
		   			| actual_param_list TCOMMA assignment_exp 	{param=1;}
					;

primary_exp 		: TIDENT		
	     			| TNUMBER	
					| TREALNUMBER
	     			| TLPAREN expression TRPAREN
					| TLPAREN expression error								{yyerrok; PrintError(missing_sbracket);}
					;
%%

void changeHSTable(){
	current_id->isConst= con;
	current_id->isFunction= func;
	current_id->isParam= param;
	current_id->isArray= array;
	current_id->spec= type;
}