/*
 * glob.h - global variable for the project
 */
#define STsize 1000
#define HTsize 100
#define FALSE 0
#define TRUE 1
enum Types { INT, VOID, FLOAT, NONE};
typedef enum Types Types;

typedef struct HTentry* HTpointer;

typedef struct HTentry {
	int index;
	int isConst;
	int isFunction;
	int isParam;
	int isArray;
	int linenum;
	int error;
	Types spec;
	HTpointer next;
} HTentry;


HTpointer HT[HTsize];
char ST[STsize];
HTpointer current_id;

int nextid; 
int nextfree;
int hashcode; 
int sameid;
int num_err;//number of errors
int cLine;
//int i, j, cErrors; //?

Types type;

int found;

enum errorTypes { noerror, illid_digit, illid_long, illid_illch, illid_illegal, overst, missing_semi, missing_sbracket, missing_mbracket, missing_lbracket, missing_comma, missing_funcheader, declaring_err, missing_condition, wrong_assign
};
typedef enum errorTypes ERRORtypes;
ERRORtypes err;

#define isLetter(x) ( ((x) >= 'a' && (x) <='z') || ((x) >= 'A' && (x) <= 'Z' || (x) == '_') )
#define isDigit(x) ( (x) >= '0' && (x) <= '9' )

#define MAX_LEN		12
