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
	ID id;
	Types idtype;
	int linenum;
	Types returntype;
	HTpointer next;
} HTentry;


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
