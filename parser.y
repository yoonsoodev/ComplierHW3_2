%{
#include <stdio.h>
#include <ctype.h>
#include <malloc.h>

/*yacc source for Mini C*/
%}

%token TIDENT TNUMBER TCONST TELSE TIF TEIF TINT TRETURN TVOID TWHILE
%token TASSIGN TADDASSIGN TSUBASSIGN TMULASSIGN TDIVASSIGN TMODASSIGN 
%token TNOT TOR TAND TEQUAL TNOTEQU TGREAT TGREATE TLESS TLESSE TINC TDEC 
%token TERROR TPLUS TMINUS TSTAR TSLASH TMOD
%token TLPAREN TRPAREN TCOMMA TLBRACE TRBRACE TLBRACKET TRBRACKET TSEMI
%token TCOMMENT THEX TOCT TCARR TEOF

%nonassoc LOWER_THAN_ELSE
%nonassoc TELSE 

%%
mini_c 				: translation_unit				
					;

translation_unit 	: external_dcl					
					| translation_unit external_dcl		
					;

external_dcl 		: function_def					
		  			| declaration					
					;

function_def 		: function_header compound_st		
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

type_qualifier 		: TCONST					
					;

type_specifier 		: TINT						
		 			| TVOID
					;

function_name 		: TIDENT
					;

formal_param 		: TLPAREN opt_formal_param TRPAREN
					;

opt_formal_param 	: formal_param_list				
		   			|						
					;

formal_param_list 	: param_dcl					
		    		| formal_param_list TCOMMA param_dcl 		
					;

param_dcl 			: dcl_spec declarator				
					;

compound_st 		: '{' opt_dcl_list opt_stat_list '}' 		
					;

opt_dcl_list 		: declaration_list				
					|						
					;

declaration_list 	: declaration					
					| declaration_list declaration 			
					;

declaration 		: dcl_spec init_dcl_list TSEMI			
					;

init_dcl_list 		: init_declarator				
					| init_dcl_list TCOMMA init_declarator 		
					;

init_declarator 	: declarator						
		 			| declarator TASSIGN TNUMBER			
					;

declarator 			: TIDENT						
	     			| TIDENT TLBRACKET opt_number TRBRACKET			
					;

opt_number 			: TNUMBER					
	     			|						
					;

opt_stat_list 		: statement_list				
		 			|						
					;

statement_list 		: statement					
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
					;

while_st 		: TWHILE TLPAREN expression TRPAREN statement;

return_st 		: TRETURN opt_expression TSEMI;

expression 		: assignment_exp;

assignment_exp 	: logical_or_exp				
				| unary_exp TASSIGN assignment_exp 		
				| unary_exp TADDASSIGN assignment_exp 	
				| unary_exp TSUBASSIGN assignment_exp 	
				| unary_exp TMULASSIGN assignment_exp 	
				| unary_exp TDIVASSIGN assignment_exp 	
				| unary_exp TMODASSIGN assignment_exp 	
				;

logical_or_exp 	: logical_and_exp				
				| logical_or_exp TOR logical_and_exp 	
				;

logical_and_exp : equality_exp					
		 		| logical_and_exp TAND equality_exp 	
				;

equality_exp 		: relational_exp				
				| equality_exp TEQUAL relational_exp 	
				| equality_exp TNOTEQU relational_exp 	
				;

relational_exp 	: additive_exp 				
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
	      			| postfix_exp TLPAREN opt_actual_param TRPAREN 	
	      			| postfix_exp TINC				
	      			| postfix_exp TDEC				
					;

opt_actual_param 	: actual_param				
		  			|						
					;

actual_param 		: actual_param_list;

actual_param_list 	: assignment_exp				
		   			| actual_param_list TCOMMA assignment_exp 	
					;

primary_exp 		: TIDENT						
	     			| TNUMBER					
	     			| TLPAREN expression TRPAREN				
					;
%%
