/*
 * glob.h - global variable for the project
 */
#define STsize 1000
#define HTsize 100
#define FALSE 0
#define TRUE 1

typedef struct HTentry* HTpointer;
typedef struct HTentry {
	int index;
	int type; // 해당 변수가 무슨 타입인 지 알려줌
	int func_idx;
	int isConst;
	HTpointer next;
} HTentry;

HTpointer current_id; // 현재 처리되고 있는 identifier를 나타냄

HTpointer HT[HTsize];
char ST[STsize];

int nextid;
int nextfree;
int hashcode;
int sameid;
int num_err;//number of errors
int cLine;
//int i, j, cErrors; //?

int found;
int isFunction; // 함수 인 지 아닌 지 판단 -> parser.y 에서 변경
int isArray; // array 변수인 지 아닌 지 판단 -> parser.y 에서 변경

enum errorTypes { noerror, illid_digit, illid_long, illid_illch, illid_illegal, overst, missing_semi, missing_sbracket, missing_mbracket, missing_lbracket, missing_comma, missing_funcheader, declaring_err };
typedef enum errorTypes ERRORtypes;
ERRORtypes err;

enum id { scalar, array, function, parameter };
typedef enum id ID;

enum Types { VOID, INT, CHAR, FLOAT, LONG, DOUBLE };
typedef enum Types Types;

#define isLetter(x) ( ((x) >= 'a' && (x) <='z') || ((x) >= 'A' && (x) <= 'Z' || (x) == '_') )
#define isDigit(x) ( (x) >= '0' && (x) <= '9' )

#define MAX_LEN		12
