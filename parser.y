%{
/* parser.y?ì„œ symboltableê°?ë³€ê²½í•˜??ë²?-> init= 1 ì§€????-> Symboltable() ?¸ì¶œ -> current_id ì§€?•ë¨ -> current_id ê°?ë³€ê²½í•¨ */
#include <stdio.h>
#include <ctype.h>
#include <malloc.h>
#include "tn.h"
#include "glob.h"

extern char* yytext; // 'yytext' ¼±¾ð

extern HTpointer current_id;
extern int init; //Àü¿ªº¯¼ö init ÃÊ±âÈ­
extern char* identName; //identifier¸¦ °¡¸£Å°´Â ¹®ÀÚ¿­ Æ÷ÀÎÅÍ

void PrintError(ERRORtypes err);

char* combine(char* data1, char* data2);
char* combine(char* data1, char* data2, char* data3);

typedef struct Statement;
typedef struct Expression;
typedef struct IfStatement;
typedef struct WhileStatement;
struct Statement* createIfStatement(struct Expression* condition, struct Statement* ifBody, struct Statement* elseBody);
struct Statement* createWhileStatement(struct Expression* condition, struct Statement* body);
struct Expression* createBinaryExpression(struct Expression* left, char* operator,struct Expression* right);
struct Expression* createArrayAccessExpressionAlternative(struct Expression* arrayExpression, struct Expression* indexExpression);
struct Expression* createFunctionCallExpression(struct Expression* functionExpression, struct Expression* arguments);
struct Expression* createUnaryExpression(struct Expression* expression, char* operator);


/*yacc source for Mini C*/
void semantic(int);
%}

%token TIDENT TFLOAT TNUMBER
%token TCONST TELSE TIF TINT TRETURN TVOID TWHILE
%token TPLUS TMINUS TSTAR TSLASH TMOD 
%token TASSIGN TADDASSIGN TSUBASSIGN TMULASSIGN TDIVASSIGN TMODASSIGN
%token TNOT TOR TAND TEQUAL TNOTEQU TGREATE TLESSE TLESS TGREAT TINC TDEC
%token TLPAREN TRPAREN TCOMMA TLBRACE TRBRACE TLBRACKET TRBRACKET TSEMI
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
type_qualifier		: TCONST						;
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

declarator	: TIDENT						{semantic(5);}            
			| TIDENT TLBRACKET opt_number TRBRACKET			{semantic(6);}
			| TIDENT TLBRACKET opt_number error			{yyerrok;PrintError(missing_lbracket);}
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

if_st 			: TIF TLPAREN expression TRPAREN statement %prec LOWER_THAN_ELSE	{ $$ = createIfStatement($3, $5, NULL); }
			| TIF TLPAREN expression TRPAREN statement TELSE statement		{ $$ = createIfStatement($3, $5, $7); }
			| TIF TLPAREN expression error						{yyerrok; PrintError(missing_sbracket);}
			;
while_st 		: TWHILE TLPAREN expression TRPAREN statement				{ $$ = createWhileStatement($3, $5); }
			| TWHILE TLPAREN expression error					{yyerrok; PrintError(missing_sbracket);}
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
			| relational_exp TGREAT additive_exp					{ $$ = createBinaryExpression($1, $2, $3); }
			| relational_exp TLESS additive_exp					{ $$ = createBinaryExpression($1, $2, $3); }
			| relational_exp TGREATE additive_exp					{ $$ = createBinaryExpression($1, $2, $3); }
			| relational_exp TLESSE additive_exp					{ $$ = createBinaryExpression($1, $2, $3); }
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
	   		| TMINUS unary_exp					{$$ = -$2;}
	   		| TNOT unary_exp					{$$ = !$2;}
	   		| TINC unary_exp					{++$2; $$ = $2;}
	   		| TDEC unary_exp					{--$2; $$ = $2;}
			;
postfix_exp 		: primary_exp						{$$ = $1;}
	      		| postfix_exp TLBRACKET expression TRBRACKET				{$$ = createArrayAccessExpressionAlternative($1, $3);}
	      		| postfix_exp TLBRACKET expression error		{yyerrok; PrintError(missing_lbracket);}
	      		| postfix_exp TLPAREN opt_actual_param TRPAREN				{$$ = createFunctionCallExpression($1, $3);}
	      		| postfix_exp TLPAREN opt_actual_param error		{yyerrok; PrintError(missing_sbracket);}
	      		| postfix_exp TINC							{$$ = createUnaryExpression($1, INCREMENT);}
	      		| postfix_exp TDEC							{$$ = createUnaryExpression($1, INCREMENT);};
opt_actual_param 	: actual_param						{$$ = $1;}
		  	|						
			;
actual_param 		: actual_param_list					{$$ = $1;};
actual_param_list 	: assignment_exp					{$$ = $1;}
		   	| actual_param_list TCOMMA assignment_exp 		{$$ = combine($1, $3);}
			;
primary_exp 		: TIDENT						{identName = $1; semantic(5);}
	     		| TNUMBER						{$$ = $1;}
	    		| TLPAREN expression TRPAREN				{$$ = $2;}
			| TLPAREN expression error				{yyerrok; PrintError(missing_sbracket);};
%%

char* combine(char* data1, char* data2) {
	// data1°ú data2¸¦ ÀûÀýÇÏ°Ô °áÇÕÇÑ °á°ú¸¦ ¹ÝÈ¯
	// ¹®ÀÚ¿­À» °áÇÕÇÏ´Â °æ¿ì, ¾Ë¸ÂÀº ¸Þ¸ð¸®¸¦ ÇÒ´çÇÏ¿© °áÇÕ °á°ú¸¦ ÀúÀå
	char* result = malloc(strlen(data1) + strlen(data2) + 1); // °á°ú¸¦ ÀúÀåÇÒ ÃæºÐÇÑ Å©±âÀÇ ¸Þ¸ð¸® ÇÒ´ç
	strcpy(result, data1); // data1À» result¿¡ º¹»ç
	strcat(result, data2); // data2¸¦ result¿¡ ÀÌ¾îºÙÀÓ
	return result;
}

char* combine(char* data1, char* data2, char* data3) {
	// data1°ú data2¿Í data3À» ÀûÀýÇÏ°Ô °áÇÕÇÑ °á°ú¸¦ ¹ÝÈ¯
	// ¹®ÀÚ¿­À» °áÇÕÇÏ´Â °æ¿ì, ¾Ë¸ÂÀº ¸Þ¸ð¸®¸¦ ÇÒ´çÇÏ¿© °áÇÕ °á°ú¸¦ ÀúÀå
	char* result = malloc(strlen(data1) + strlen(data2) + strlen(data3) + 1); // °á°ú¸¦ ÀúÀåÇÒ ÃæºÐÇÑ Å©±âÀÇ ¸Þ¸ð¸® ÇÒ´ç
	strcpy(result, data1); // data1À» result¿¡ º¹»ç
	strcat(result, data2); // data2¸¦ result¿¡ ÀÌ¾îºÙÀÓ
	strcat(result, data3); // data3¸¦ result¿¡ ÀÌ¾îºÙÀÓ
	return result;
}


typedef struct Statement {
    int type;  // Type of the statement (e.g., IF_STATEMENT, WHILE_STATEMENT)
    union {
        struct IfStatement* ifStatement;
        struct WhileStatement* whileStatement;
        // Add more statement types as needed
    } statement;
} Statement;

typedef struct Expression {
    int type;  // Type of the expression (e.g., ASSIGNMENT_EXPRESSION, BINARY_EXPRESSION)
    union {
        struct AssignmentExpression* assignmentExpression;
        struct BinaryExpression* binaryExpression;
        // Add more expression types as needed
    } expression;
} Expression;


// IfStatement ±¸Á¶Ã¼ Á¤ÀÇ
typedef struct IfStatement {
    struct Expression* condition;
    struct Statement* ifBody;
    struct Statement* elseBody;
} IfStatement;

// WhileStatement ±¸Á¶Ã¼ Á¤ÀÇ
typedef struct WhileStatement {
    struct Expression* condition;
    struct Statement* body;
} WhileStatement;

// IfStatement ³ëµå¸¦ »ý¼ºÇÏ°í ÇÊµå¿¡ °ªÀ» ÇÒ´çÇÏ´Â ÇÔ¼ö
struct Statement* createIfStatement(struct Expression* condition, struct Statement* ifBody, struct Statement* elseBody) {
    struct IfStatement* ifStatement = malloc(sizeof(struct IfStatement));
    ifStatement->condition = condition;
    ifStatement->ifBody = ifBody;
    ifStatement->elseBody = elseBody;
    return (struct Statement*)ifStatement;
}

// WhileStatement ³ëµå¸¦ »ý¼ºÇÏ°í ÇÊµå¿¡ °ªÀ» ÇÒ´çÇÏ´Â ÇÔ¼ö
struct Statement* createWhileStatement(struct Expression* condition, struct Statement* body) {
    struct WhileStatement* whileStatement = malloc(sizeof(struct WhileStatement));
    whileStatement->condition = condition;
    whileStatement->body = body;
    return (struct Statement*)whileStatement;
}

// ÀÌÁø Ç¥Çö½Ä(Binary Expression)À» »ý¼ºÇÏ°í ÇÊµå¿¡ °ªÀ» ÇÒ´çÇÏ´Â ÇÔ¼ö
Expression* createBinaryExpression(Expression* left, char* operator, Expression* right) {
    Expression* binaryExpression = malloc(sizeof(Expression));
    // ÇÊ¿äÇÑ ÇÊµåµé¿¡ °ªÀ» ÇÒ´çÇÕ´Ï´Ù.
    // ¿©±â¿¡¼­´Â ¿¹½Ã·Î "left", "operator", "right"¶ó´Â ÇÊµå¸¦ Ãß°¡ÇÏ¿´½À´Ï´Ù.
    binaryExpression->left = left;
    binaryExpression->operator = operator;
    binaryExpression->right = right;
    return binaryExpression;
}

// ¹è¿­ Á¢±Ù Ç¥Çö½Ä(Array Access Expression Alternative)À» »ý¼ºÇÏ°í ÇÊµå¿¡ °ªÀ» ÇÒ´çÇÏ´Â ÇÔ¼ö
Expression* createArrayAccessExpressionAlternative(Expression* arrayExpression, Expression* indexExpression) {
    Expression* arrayAccessExpression = malloc(sizeof(Expression));
    // ÇÊ¿äÇÑ ÇÊµåµé¿¡ °ªÀ» ÇÒ´çÇÕ´Ï´Ù.
    // ¿©±â¿¡¼­´Â ¿¹½Ã·Î "arrayExpression"°ú "indexExpression"ÀÌ¶ó´Â ÇÊµå¸¦ Ãß°¡ÇÏ¿´½À´Ï´Ù.
    arrayAccessExpression->arrayExpression = arrayExpression;
    arrayAccessExpression->indexExpression = indexExpression;
    return arrayAccessExpression;
}

// ÇÔ¼ö È£Ãâ Ç¥Çö½Ä(Function Call Expression)À» »ý¼ºÇÏ°í ÇÊµå¿¡ °ªÀ» ÇÒ´çÇÏ´Â ÇÔ¼ö
Expression* createFunctionCallExpression(Expression* functionExpression, Expression* arguments) {
    Expression* functionCallExpression = malloc(sizeof(Expression));
    // ÇÊ¿äÇÑ ÇÊµåµé¿¡ °ªÀ» ÇÒ´çÇÕ´Ï´Ù.
    // ¿©±â¿¡¼­´Â ¿¹½Ã·Î "functionExpression"°ú "arguments"¶ó´Â ÇÊµå¸¦ Ãß°¡ÇÏ¿´½À´Ï´Ù.
    functionCallExpression->functionExpression = functionExpression;
    functionCallExpression->arguments = arguments;
    return functionCallExpression;
}

// ´ÜÇ× Ç¥Çö½Ä(Unary Expression)À» »ý¼ºÇÏ°í ÇÊµå¿¡ °ªÀ» ÇÒ´çÇÏ´Â ÇÔ¼ö
Expression* createUnaryExpression(Expression* expression, char* operator) {
    Expression* unaryExpression = malloc(sizeof(Expression));
    // ÇÊ¿äÇÑ ÇÊµåµé¿¡ °ªÀ» ÇÒ´çÇÕ´Ï´Ù.
    // ¿©±â¿¡¼­´Â ¿¹½Ã·Î "expression"°ú "operator"¶ó´Â ÇÊµå¸¦ Ãß°¡ÇÏ¿´½À´Ï´Ù.
    unaryExpression->expression = expression;
    unaryExpression->operator = operator;
    return unaryExpression;
}

void semantic(int n){
	// ÇöÀç Ã³¸® ÁßÀÎ ÅäÅ«ÀÇ ¹®ÀÚ¿­ °ªÀ» identName¿¡ º¹»ç
	init = 1;	
	SymbolTable();
	switch(n){
		case 1 : 
			identifier_type = 1; 
			break;
		case 2 : 
			identifier_type = 2; 
			break;
		case 3 : 
			identifier_type = 3; 
			break;
		case 4 : 
			identifier = 1; 
			break;
		case 5 : 
			identifier = 2; 
			break;
		case 6 : 
			identifier = 3; //array ë³€??			break;
		case 7 :  // ë§¤ê°œë³€??			identifier = 4; 
			break;
	}
}
