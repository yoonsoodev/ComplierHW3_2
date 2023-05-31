%{
/* parser.y에서 symboltable값 변경하는 법 -> init= 1 지정 후 -> Symboltable() 호출 -> current_id 지정됨 -> current_id 값 변경함 */
#include <stdio.h>
#include <ctype.h>
#include <malloc.h>
#include "tn.h"
#include "glob.h"

extern char* yytext; // 'yytext' 선언

extern HTpointer current_id;
extern int init; //전역변수 init 초기화
extern char* identName; //identifier를 가르키는 문자열 포인터

void PrintError(ERRORtypes err);

char* combine(char* data1, char* data2);
char* combine(char* data1, char* data2, char* data3);

/*yacc source for Mini C*/
void semantic(int);
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
mini_c			: translation_unit					{$$ = $1;};
translation_unit	: external_dcl						{$$ = $1;}
			| translation_unit external_dcl				{$$ = combine($1, $2);}
			;
external_dcl		: function_def						{$$ = $1;}
			| declaration						{$$ = $1;}
			| TIDENT TSEMI						{$$ = $1;}
			| TIDENT error						{yyerrok; PrintError(missing_semi);};
function_def		: function_header compound_st				{$$ = combine($1, $2);}
			| function_header TSEMI					{$$ = $1;}
			| function_header error					{yyerrok; PrintError(missing_semi);}
			| error compound_st					{yyerrok; PrintError(missing_funcheader);}
			;
function_header		: dcl_spec function_name formal_param			{$$ = combine($1, $2, $3);};
dcl_spec		: dcl_specifiers					{$$ = $1;};
dcl_specifiers		: dcl_specifier						{$$ = $1;}
			| dcl_specifiers dcl_specifier				{$$ = combine($1, $2);}
			;
dcl_specifier		: type_qualifier					{$$ = $1;}
			| type_specifier					{$$ = $1;}
			;
type_qualifier		: TCONST						{semantic(8);};
type_specifier		: TINT							{semantic(1);}
			| TFLOAT						{semantic(2);}
			| TVOID							{semantic(3);}
			;
function_name		: TIDENT						{identName = $1; semantic(4);};               
formal_param		: TLPAREN opt_formal_param TRPAREN			{$$ = $2;}
			| TLPAREN opt_formal_param error			{yyerrok; PrintError(missing_sbracket);}
			;
opt_formal_param	: formal_param_list      				{$$ = $1;}
			|
			;
formal_param_list	: param_dcl						{semantic(7);}         
			| formal_param_list TCOMMA param_dcl			{semantic(7);} 
			| formal_param_list param_dcl				{yyerrok; PrintError(missing_comma);}
			;
param_dcl		: dcl_spec declarator					{$$ = $1;};
compound_st		: TLBRACE compound TRBRACE				{$$ = $2;}
			| TLBRACE compound error    				{yyerrok; PrintError(missing_mbracket);}   
			;
compound		: opt_dcl_list opt_stat_list				{$$ = combine($1, $2);};
opt_dcl_list		: declaration_list					{$$ = $1;}
			|
			; 
declaration_list	: declaration						{$$ = $1;}
			| declaration_list declaration				{$$ = combine($1, $2);}
			;
declaration		: dcl_spec init_dcl_list TSEMI				{$$ = combine($1, $2);}
			| dcl_spec init_dcl_list error				{yyerrok; PrintError(missing_semi);}
			;
init_dcl_list		: init_declarator            				{$$ = $1;}
			| init_dcl_list TCOMMA init_declarator    		{$$ = combine($1, $3);}
			| init_dcl_list init_declarator				{yyerrok; PrintError(missing_comma);}
			;
init_declarator		: declarator						{$$ = $1;}
			| declarator TASSIGN TNUMBER				{$$ = $1;}
			| declarator TEQUAL TNUMBER				{yyerrok; PrintError(declaring_err);}
			;
declarator		: TIDENT						{identName = $1; semantic(5);}            
			| TIDENT TLBRACKET opt_number TRBRACKET			{identName = $1; semantic(6);}
			| TIDENT TLBRACKET opt_number error			{yyerrok; PrintError(missing_lbracket);}
			;
opt_number		: TNUMBER               				{$$ = $1;}
			|
			;
opt_stat_list		: statement_list					{$$ = $1;}            
			|
			;                  
statement_list		: statement						{$$ = $1;}  
			| statement_list statement				{$$ = combine($1, $2);}
			| statement_list declaration				{$$ = combine($1, $2);}
			;
statement		: compound_st						{$$ = $1;}            
			| expression_st            				{$$ = $1;}
			| if_st         					{$$ = $1;}
			| while_st             					{$$ = $1;}  
			| return_st            					{$$ = $1;}
			;


expression_st 		: opt_expression TSEMI					{$$ = $1;};
opt_expression 		: expression						{$$ = $1;};
if_st 			: TIF TLPAREN expression TRPAREN statement %prec LOWER_THAN_ELSE
			| TIF TLPAREN expression TRPAREN statement TELSE statement
			| TIF TLPAREN expression error				{yyerrok; PrintError(missing_sbracket);}
			;
while_st 		: TWHILE TLPAREN expression TRPAREN statement		
			| TWHILE TLPAREN expression error			{yyerrok; PrintError(missing_sbracket);}
return_st 		: TRETURN opt_expression TSEMI				{$$ = $2;};
expression 		: assignment_exp					{$$ = $1;};
assignment_exp 		: logical_or_exp					{$$ = $1;}
			| unary_exp TASSIGN assignment_exp			{$$ = $3;}
			| unary_exp TADDASSIGN assignment_exp			{$$ = $1 + $3;}
			| unary_exp TSUBASSIGN assignment_exp			{$$ = $1 - $3;}
			| unary_exp TMULASSIGN assignment_exp			{$$ = $1 * $3;}
			| unary_exp TDIVASSIGN assignment_exp			{$$ = $1 / $3;}
			| unary_exp TMODASSIGN assignment_exp			{$$ = $1 % $3;}
			;


logical_or_exp 		: logical_and_exp					{$$ = $1;}
			| logical_or_exp TOR logical_and_exp 			{$$ = combine($1, $3);}
			;
logical_and_exp 	: equality_exp						{$$ = $1;}					
		 	| logical_and_exp TAND equality_exp			{$$ = combine($1, $3);}
			;
equality_exp 		: relational_exp					{$$ = $1;}
			| equality_exp TEQUAL relational_exp			{$$ = combine($1, $3);}
			| equality_exp TNOTEQU relational_exp			{$$ = combine($1, $3);}
			;
relational_exp 		: additive_exp						{$$ = $1;}
			| relational_exp TGREAT additive_exp
			| relational_exp TLESS additive_exp
			| relational_exp TGREATE additive_exp
			| relational_exp TLESSE additive_exp
			;
additive_exp 		: multiplicative_exp					{$$ = $1;}
			| additive_exp TPLUS multiplicative_exp			{$$ = $1 + $3;}
			| additive_exp TMINUS multiplicative_exp		{$$ = $1 - $3;}
			;
multiplicative_exp 	: unary_exp						{$$ = $1;}
		    	| multiplicative_exp TSTAR unary_exp			{$$ = $1 * $3;}
		    	| multiplicative_exp TSLASH unary_exp			{$$ = $1 / $3;}
		    	| multiplicative_exp TMOD unary_exp			{$$ = $1 % $3;}
			;
unary_exp 		: postfix_exp						{$$ = $1;}
	   		| TMINUS unary_exp					
	   		| TNOT unary_exp
	   		| TINC unary_exp
	   		| TDEC unary_exp
			;
postfix_exp 		: primary_exp						{$$ = $1;}
	      		| postfix_exp TLBRACKET expression TRBRACKET
	      		| postfix_exp TLBRACKET expression error		{yyerrok; PrintError(missing_lbracket);}
	      		| postfix_exp TLPAREN opt_actual_param TRPAREN
	      		| postfix_exp TLPAREN opt_actual_param error		{yyerrok; PrintError(missing_sbracket);}
	      		| postfix_exp TINC
	      		| postfix_exp TDEC					;
opt_actual_param 	: actual_param
		  	|						
			;
actual_param 		: actual_param_list					{$$ = $1;};
actual_param_list 	: assignment_exp					{$$ = $1;}
		   	| actual_param_list TCOMMA assignment_exp 	
			;
primary_exp 		: TIDENT						{identName = $1; semantic(5);}
	     		| TNUMBER						{$$ = $1;}
	    		| TLPAREN expression TRPAREN				{$$ = $2;}
			| TLPAREN expression error				{yyerrok; PrintError(missing_sbracket);};
%%

char* combine(char* data1, char* data2) {
	// data1과 data2를 적절하게 결합한 결과를 반환
	// 문자열을 결합하는 경우, 알맞은 메모리를 할당하여 결합 결과를 저장
	char* result = malloc(strlen(data1) + strlen(data2) + 1); // 결과를 저장할 충분한 크기의 메모리 할당
	strcpy(result, data1); // data1을 result에 복사
	strcat(result, data2); // data2를 result에 이어붙임
	return result;
}

char* combine(char* data1, char* data2, char* data3) {
	// data1과 data2와 data3을 적절하게 결합한 결과를 반환
	// 문자열을 결합하는 경우, 알맞은 메모리를 할당하여 결합 결과를 저장
	char* result = malloc(strlen(data1) + strlen(data2) + strlen(data3) + 1); // 결과를 저장할 충분한 크기의 메모리 할당
	strcpy(result, data1); // data1을 result에 복사
	strcat(result, data2); // data2를 result에 이어붙임
	strcat(result, data3); // data3를 result에 이어붙임
	return result;
}


void semantic(int n){
	// 현재 처리 중인 토큰의 문자열 값을 identName에 복사
	init = 1;	
	SymbolTable();
	
	switch(n){
		case 1 : 
			current_id ->func_idx = 0;
			break;
		case 2 : 
			current_id ->func_idx = 1;
			break;
		case 3 : 
			current_id ->func_idx = 2;
			break;
		case 4 : //함수(이름)인 경우
			break;
		case 5 : //scalar 변수
			current_id->var_idx = 2; 
			break;
		case 6 : //array 변수
			current_id->var_idx = 0; 
			break;
		case 7 :  // 매개변수
			current_id->var_idx = 1; 
			break;
		case 8 :  // Const 변수
			current_id->isConst = 1; 
			break;
	}
}
