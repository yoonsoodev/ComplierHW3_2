/*
 * glob.h - global variable for the project
 */

#pragma once

#define STsize 1000
#define HTsize 100
#define FALSE 0
#define TRUE 1

typedef struct HTentry *HTpointer;
typedef struct HTentry {
	int index;
	
	int HT_dataTypeFlag; // 0: int / 1 : float / 2 : void (If identifier is function name, 'data_type' means 'return type'.)
	int HT_typeFlag; // 0 : function name / 1 : scalar variable / 2 : array variable / 3 : function parameter
	int HT_isConst; // 0: not Const / 1: Const
	int linenum;
	HTpointer next;
} HTentry;

HTpointer HT[HTsize];
char ST[STsize];

int dataTypeFlag; // 0: int / 1 : float / 2 : void (If identifier is function name, 'data_type' means 'return type'.)
int typeFlag; // 0 : function name / 1 : scalar variable / 2 : array variable / 3 : function parameter
int isConst; // 0: not Const / 1: Const

int nextid; 
int nextfree;
int hashcode; 
int sameid;
int num_err;//number of errors
int cLine;

int found;

enum errorTypes { noerror, illid_digit, illid_long, illid_illch, illid_illegal, overst, missing_semi, missing_sbracket, missing_mbracket, missing_lbracket, missing_comma, missing_funcheader, declaring_err };
typedef enum errorTypes ERRORtypes;
ERRORtypes err;

#define isLetter(x) ( ((x) >= 'a' && (x) <='z') || ((x) >= 'A' && (x) <= 'Z' || (x) == '_') )
#define isDigit(x) ( (x) >= '0' && (x) <= '9' )

#define MAX_LEN		12
