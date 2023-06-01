
/*  A Bison parser, made from parser.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	TIDENT	258
#define	TFLOAT	259
#define	TNUMBER	260
#define	TCONST	261
#define	TELSE	262
#define	TIF	263
#define	TINT	264
#define	TRETURN	265
#define	TVOID	266
#define	TWHILE	267
#define	TPLUS	268
#define	TMINUS	269
#define	TSTAR	270
#define	TSLASH	271
#define	TMOD	272
#define	TASSIGN	273
#define	TADDASSIGN	274
#define	TSUBASSIGN	275
#define	TMULASSIGN	276
#define	TDIVASSIGN	277
#define	TMODASSIGN	278
#define	TNOT	279
#define	TOR	280
#define	TAND	281
#define	TEQUAL	282
#define	TNOTEQU	283
#define	TGREATE	284
#define	TLESSE	285
#define	TLESS	286
#define	TGREAT	287
#define	TINC	288
#define	TDEC	289
#define	TLPAREN	290
#define	TRPAREN	291
#define	TCOMMA	292
#define	TLBRACE	293
#define	TRBRACE	294
#define	TLBRACKET	295
#define	TRBRACKET	296
#define	TSEMI	297
#define	TIF_ERROR	298
#define	TIF_CONDITION_ERROR	299
#define	TELSE_ERROR	300
#define	TELSE_CONDITION_ERROR	301
#define	UIF	302
#define	LOWER_THAN_ELSE	303

#line 1 "parser.y"

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

#ifndef YYLTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YYLTYPE yyltype
#endif

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		176
#define	YYFLAG		-32768
#define	YYNTBASE	49

#define YYTRANSLATE(x) ((unsigned)(x) <= 303 ? yytranslate[x] : 95)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     4,     7,     9,    11,    14,    17,    20,    23,
    26,    29,    33,    35,    37,    40,    42,    44,    46,    48,
    50,    52,    54,    58,    62,    64,    65,    67,    71,    74,
    77,    81,    85,    88,    90,    91,    93,    96,   100,   104,
   106,   110,   113,   115,   119,   123,   125,   130,   135,   137,
   138,   140,   141,   143,   146,   149,   151,   153,   155,   157,
   159,   162,   164,   170,   178,   183,   189,   194,   198,   200,
   202,   206,   210,   214,   218,   222,   226,   228,   232,   234,
   238,   240,   244,   248,   250,   254,   258,   262,   266,   268,
   272,   276,   278,   282,   286,   290,   292,   295,   298,   301,
   304,   306,   311,   316,   321,   326,   329,   332,   334,   335,
   337,   339,   343,   345,   347,   351
};

static const short yyrhs[] = {    50,
     0,    51,     0,    50,    51,     0,    52,     0,    68,     0,
     3,    42,     0,     3,     1,     0,    53,    64,     0,    53,
    42,     0,    53,     1,     0,     1,    64,     0,    54,    59,
    60,     0,    55,     0,    56,     0,    55,    56,     0,    57,
     0,    58,     0,     6,     0,     9,     0,     4,     0,    11,
     0,     3,     0,    35,    61,    36,     0,    35,    61,     1,
     0,    62,     0,     0,    63,     0,    62,    37,    63,     0,
    62,    63,     0,    54,    71,     0,    38,    65,    39,     0,
    38,    65,     1,     0,    66,    73,     0,    67,     0,     0,
    68,     0,    67,    68,     0,    54,    69,    42,     0,    54,
    69,     1,     0,    70,     0,    69,    37,    70,     0,    69,
    70,     0,    71,     0,    71,    18,     5,     0,    71,    27,
     5,     0,     3,     0,     3,    40,    72,    41,     0,     3,
    40,    72,     1,     0,     5,     0,     0,    74,     0,     0,
    75,     0,    74,    75,     0,    74,    68,     0,    64,     0,
    76,     0,    78,     0,    79,     0,    80,     0,    77,    42,
     0,    81,     0,     8,    35,    81,    36,    75,     0,     8,
    35,    81,    36,    75,     7,    75,     0,     8,    35,    81,
     1,     0,    12,    35,    81,    36,    75,     0,    12,    35,
    81,     1,     0,    10,    77,    42,     0,    82,     0,    83,
     0,    89,    18,    82,     0,    89,    19,    82,     0,    89,
    20,    82,     0,    89,    21,    82,     0,    89,    22,    82,
     0,    89,    23,    82,     0,    84,     0,    83,    25,    84,
     0,    85,     0,    84,    26,    85,     0,    86,     0,    85,
    27,    86,     0,    85,    28,    86,     0,    87,     0,    86,
    32,    87,     0,    86,    31,    87,     0,    86,    29,    87,
     0,    86,    30,    87,     0,    88,     0,    87,    13,    88,
     0,    87,    14,    88,     0,    89,     0,    88,    15,    89,
     0,    88,    16,    89,     0,    88,    17,    89,     0,    90,
     0,    14,    89,     0,    24,    89,     0,    33,    89,     0,
    34,    89,     0,    94,     0,    90,    40,    81,    41,     0,
    90,    40,    81,     1,     0,    90,    35,    91,    36,     0,
    90,    35,    91,     1,     0,    90,    33,     0,    90,    34,
     0,    92,     0,     0,    93,     0,    82,     0,    93,    37,
    82,     0,     3,     0,     5,     0,    35,    81,    36,     0,
    35,    81,     1,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    49,    50,    51,    53,    54,    55,    56,    57,    58,    59,
    60,    62,    63,    64,    65,    67,    68,    70,    71,    72,
    73,    75,    76,    77,    79,    80,    82,    83,    84,    86,
    87,    88,    90,    91,    92,    94,    95,    97,    98,   100,
   101,   102,   104,   105,   106,   109,   110,   111,   113,   114,
   116,   117,   119,   120,   121,   123,   124,   125,   126,   127,
   130,   131,   133,   134,   135,   137,   138,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   151,   152,   154,   155,
   157,   158,   159,   161,   162,   163,   164,   165,   167,   168,
   169,   171,   172,   173,   174,   176,   177,   178,   179,   180,
   182,   183,   184,   185,   186,   187,   188,   189,   190,   192,
   193,   194,   196,   197,   198,   199
};

static const char * const yytname[] = {   "$","error","$undefined.","TIDENT",
"TFLOAT","TNUMBER","TCONST","TELSE","TIF","TINT","TRETURN","TVOID","TWHILE",
"TPLUS","TMINUS","TSTAR","TSLASH","TMOD","TASSIGN","TADDASSIGN","TSUBASSIGN",
"TMULASSIGN","TDIVASSIGN","TMODASSIGN","TNOT","TOR","TAND","TEQUAL","TNOTEQU",
"TGREATE","TLESSE","TLESS","TGREAT","TINC","TDEC","TLPAREN","TRPAREN","TCOMMA",
"TLBRACE","TRBRACE","TLBRACKET","TRBRACKET","TSEMI","TIF_ERROR","TIF_CONDITION_ERROR",
"TELSE_ERROR","TELSE_CONDITION_ERROR","UIF","LOWER_THAN_ELSE","mini_c","translation_unit",
"external_dcl","function_def","function_header","dcl_spec","dcl_specifiers",
"dcl_specifier","type_qualifier","type_specifier","function_name","formal_param",
"opt_formal_param","formal_param_list","param_dcl","compound_st","compound",
"opt_dcl_list","declaration_list","declaration","init_dcl_list","init_declarator",
"declarator","opt_number","opt_stat_list","statement_list","statement","expression_st",
"opt_expression","if_st","while_st","return_st","expression","assignment_exp",
"logical_or_exp","logical_and_exp","equality_exp","relational_exp","additive_exp",
"multiplicative_exp","unary_exp","postfix_exp","opt_actual_param","actual_param",
"actual_param_list","primary_exp",""
};
#endif

static const short yyr1[] = {     0,
    49,    50,    50,    51,    51,    51,    51,    52,    52,    52,
    52,    53,    54,    55,    55,    56,    56,    57,    58,    58,
    58,    59,    60,    60,    61,    61,    62,    62,    62,    63,
    64,    64,    65,    66,    66,    67,    67,    68,    68,    69,
    69,    69,    70,    70,    70,    71,    71,    71,    72,    72,
    73,    73,    74,    74,    74,    75,    75,    75,    75,    75,
    76,    77,    78,    78,    78,    79,    79,    80,    81,    82,
    82,    82,    82,    82,    82,    82,    83,    83,    84,    84,
    85,    85,    85,    86,    86,    86,    86,    86,    87,    87,
    87,    88,    88,    88,    88,    89,    89,    89,    89,    89,
    90,    90,    90,    90,    90,    90,    90,    91,    91,    92,
    93,    93,    94,    94,    94,    94
};

static const short yyr2[] = {     0,
     1,     1,     2,     1,     1,     2,     2,     2,     2,     2,
     2,     3,     1,     1,     2,     1,     1,     1,     1,     1,
     1,     1,     3,     3,     1,     0,     1,     3,     2,     2,
     3,     3,     2,     1,     0,     1,     2,     3,     3,     1,
     3,     2,     1,     3,     3,     1,     4,     4,     1,     0,
     1,     0,     1,     2,     2,     1,     1,     1,     1,     1,
     2,     1,     5,     7,     4,     5,     4,     3,     1,     1,
     3,     3,     3,     3,     3,     3,     1,     3,     1,     3,
     1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
     3,     1,     3,     3,     3,     1,     2,     2,     2,     2,
     1,     4,     4,     4,     4,     2,     2,     1,     0,     1,
     1,     3,     1,     1,     3,     3
};

static const short yydefact[] = {     0,
     0,     0,    20,    18,    19,    21,     0,     2,     4,     0,
     0,    13,    14,    16,    17,     5,    35,    11,     7,     6,
     3,    10,     9,     8,    46,     0,     0,    40,    43,    15,
     0,     0,    52,    34,    36,    50,    26,    12,    39,    46,
     0,    38,    42,     0,     0,    32,    31,   113,   114,     0,
     0,     0,     0,     0,     0,     0,     0,    56,    33,    51,
    53,    57,     0,    58,    59,    60,    62,    69,    70,    77,
    79,    81,    84,    89,    92,    96,   101,    37,    49,     0,
     0,     0,    25,    27,    41,    44,    45,     0,     0,     0,
    97,    98,    99,   100,     0,    55,    54,    61,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   106,   107,   109,
     0,    48,    47,    30,    24,    23,     0,    29,     0,    68,
     0,   116,   115,    78,    92,    80,    82,    83,    87,    88,
    86,    85,    90,    91,    93,    94,    95,    71,    72,    73,
    74,    75,    76,   111,     0,   108,   110,     0,    28,    65,
     0,    67,     0,   105,   104,     0,   103,   102,    63,    66,
   112,     0,    64,     0,     0,     0
};

static const short yydefgoto[] = {   174,
     7,     8,     9,    10,    31,    12,    13,    14,    15,    26,
    38,    82,    83,    84,    58,    32,    33,    34,    16,    27,
    28,    29,    80,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
    76,   155,   156,   157,    77
};

static const short yypact[] = {   151,
     6,    26,-32768,-32768,-32768,-32768,   132,-32768,-32768,    29,
    66,   133,-32768,-32768,-32768,-32768,   133,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   -17,     7,    28,-32768,    18,-32768,
    94,    38,    91,   133,-32768,    90,   133,-32768,-32768,    80,
    94,-32768,-32768,   107,   117,-32768,-32768,-32768,-32768,    96,
   116,    99,   116,   116,   116,   116,   116,-32768,-32768,    76,
-32768,-32768,   103,-32768,-32768,-32768,-32768,-32768,   121,   122,
    19,   140,    78,     9,   145,    83,-32768,-32768,-32768,    31,
    94,    39,    11,-32768,-32768,-32768,-32768,   116,   105,   116,
-32768,-32768,-32768,-32768,    40,-32768,-32768,-32768,   116,   116,
   116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
   116,   116,   116,   116,   116,   116,   116,-32768,-32768,   116,
   116,-32768,-32768,-32768,-32768,-32768,   133,-32768,    42,-32768,
    72,-32768,-32768,   122,-32768,    19,   140,   140,    78,    78,
    78,    78,     9,     9,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,    92,-32768,   119,    33,-32768,-32768,
    91,-32768,    91,-32768,-32768,   116,-32768,-32768,-32768,-32768,
-32768,    91,-32768,   153,   161,-32768
};

static const short yypgoto[] = {-32768,
-32768,   170,-32768,-32768,     0,-32768,   166,-32768,-32768,-32768,
-32768,-32768,-32768,   -64,    88,-32768,-32768,-32768,     4,-32768,
   -13,    98,-32768,-32768,-32768,   -59,-32768,   129,-32768,-32768,
-32768,   -55,  -104,-32768,    82,    84,     5,    70,    51,   -50,
-32768,-32768,-32768,-32768,-32768
};


#define	YYLAST		184


static const short yytable[] = {    11,
    97,    95,    91,    92,    93,    94,    11,   148,   149,   150,
   151,   152,   153,    43,     3,   154,     4,   -22,   128,     5,
    35,     6,    36,   109,   110,   111,    19,    85,    39,    22,
    40,   122,   129,   167,   131,    44,    81,    78,    46,   125,
   132,    37,   160,    17,    45,   101,   102,   127,   135,   135,
   135,   135,   135,   135,   135,   135,   135,   135,   145,   146,
   147,   171,   159,    96,    41,   158,    17,    20,    25,    42,
    23,   123,   162,   168,   126,   133,    47,   161,    48,     3,
    49,     4,    81,    50,     5,    51,     6,    52,    18,    53,
   107,   108,   164,    48,    79,    49,    40,    24,    50,    54,
    51,   169,    52,   170,    53,   137,   138,   163,    55,    56,
    57,    86,   173,    17,    54,   118,   119,   120,    48,    36,
    49,    87,   121,    55,    56,    57,    81,   165,    17,    53,
    88,    -1,     1,    90,     2,     3,     3,     4,     4,    54,
     5,     5,     6,     6,    98,    99,   130,   100,    55,    56,
    57,     1,   175,     2,     3,   166,     4,   143,   144,     5,
   176,     6,   112,   113,   114,   115,   116,   117,   103,   104,
   105,   106,   139,   140,   141,   142,    21,    30,   124,    89,
   134,     0,     0,   136
};

static const short yycheck[] = {     0,
    60,    57,    53,    54,    55,    56,     7,   112,   113,   114,
   115,   116,   117,    27,     4,   120,     6,    35,    83,     9,
    17,    11,    40,    15,    16,    17,     1,    41,     1,     1,
     3,     1,    88,     1,    90,    18,    37,    34,     1,     1,
     1,    35,     1,    38,    27,    27,    28,    37,    99,   100,
   101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
   111,   166,   127,    60,    37,   121,    38,    42,     3,    42,
    42,    41,     1,    41,    36,    36,    39,    36,     3,     4,
     5,     6,    83,     8,     9,    10,    11,    12,     1,    14,
    13,    14,     1,     3,     5,     5,     3,    10,     8,    24,
    10,   161,    12,   163,    14,   101,   102,    36,    33,    34,
    35,     5,   172,    38,    24,    33,    34,    35,     3,    40,
     5,     5,    40,    33,    34,    35,   127,    36,    38,    14,
    35,     0,     1,    35,     3,     4,     4,     6,     6,    24,
     9,     9,    11,    11,    42,    25,    42,    26,    33,    34,
    35,     1,     0,     3,     4,    37,     6,   107,   108,     9,
     0,    11,    18,    19,    20,    21,    22,    23,    29,    30,
    31,    32,   103,   104,   105,   106,     7,    12,    81,    51,
    99,    -1,    -1,   100
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(FROM,TO,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (from, to, count)
     char *from;
     char *to;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *from, char *to, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 192 "bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#else
#define YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#endif

int
yyparse(YYPARSE_PARAM)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 49 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 2:
#line 50 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 3:
#line 51 "parser.y"
{yyval = combine(yyvsp[-1], yyvsp[0]);;
    break;}
case 4:
#line 53 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 5:
#line 54 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 6:
#line 55 "parser.y"
{yyval = yyvsp[-1];;
    break;}
case 7:
#line 56 "parser.y"
{yyerrok; PrintError(missing_semi);;
    break;}
case 8:
#line 57 "parser.y"
{yyval = combine(yyvsp[-1], yyvsp[0]);;
    break;}
case 9:
#line 58 "parser.y"
{yyval = yyvsp[-1];;
    break;}
case 10:
#line 59 "parser.y"
{yyerrok; PrintError(missing_semi);;
    break;}
case 11:
#line 60 "parser.y"
{yyerrok; PrintError(missing_funcheader);;
    break;}
case 12:
#line 62 "parser.y"
{yyval = combine(yyvsp[-2], yyvsp[-1], yyvsp[0]);;
    break;}
case 13:
#line 63 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 14:
#line 64 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 15:
#line 65 "parser.y"
{yyval = combine(yyvsp[-1], yyvsp[0]);;
    break;}
case 16:
#line 67 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 17:
#line 68 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 19:
#line 71 "parser.y"
{semantic(1);;
    break;}
case 20:
#line 72 "parser.y"
{semantic(2);;
    break;}
case 21:
#line 73 "parser.y"
{semantic(3);;
    break;}
case 22:
#line 75 "parser.y"
{identName = yyvsp[0]; semantic(4);;
    break;}
case 23:
#line 76 "parser.y"
{yyval = yyvsp[-1];;
    break;}
case 24:
#line 77 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
case 25:
#line 79 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 27:
#line 82 "parser.y"
{semantic(7);;
    break;}
case 28:
#line 83 "parser.y"
{semantic(7);;
    break;}
case 29:
#line 84 "parser.y"
{yyerrok; PrintError(missing_comma);;
    break;}
case 30:
#line 86 "parser.y"
{yyval = yyvsp[-1];;
    break;}
case 31:
#line 87 "parser.y"
{yyval = yyvsp[-1];;
    break;}
case 32:
#line 88 "parser.y"
{yyerrok; PrintError(missing_mbracket);;
    break;}
case 33:
#line 90 "parser.y"
{yyval = combine(yyvsp[-1], yyvsp[0]);;
    break;}
case 34:
#line 91 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 36:
#line 94 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 37:
#line 95 "parser.y"
{yyval = combine(yyvsp[-1], yyvsp[0]);;
    break;}
case 38:
#line 97 "parser.y"
{yyval = combine(yyvsp[-2], yyvsp[-1]);;
    break;}
case 39:
#line 98 "parser.y"
{yyerrok; PrintError(missing_semi);;
    break;}
case 40:
#line 100 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 41:
#line 101 "parser.y"
{yyval = combine(yyvsp[-2], yyvsp[0]);;
    break;}
case 42:
#line 102 "parser.y"
{yyerrok; PrintError(missing_comma);;
    break;}
case 43:
#line 104 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 44:
#line 105 "parser.y"
{yyval = yyvsp[-2];;
    break;}
case 45:
#line 106 "parser.y"
{yyerrok; PrintError(declaring_err);;
    break;}
case 46:
#line 109 "parser.y"
{semantic(5);;
    break;}
case 47:
#line 110 "parser.y"
{semantic(6);;
    break;}
case 48:
#line 111 "parser.y"
{yyerrok;PrintError(missing_lbracket);;
    break;}
case 49:
#line 113 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 51:
#line 116 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 53:
#line 119 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 54:
#line 120 "parser.y"
{yyval = combine(yyvsp[-1], yyvsp[0]);;
    break;}
case 55:
#line 121 "parser.y"
{yyval = combine(yyvsp[-1], yyvsp[0]);;
    break;}
case 56:
#line 123 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 57:
#line 124 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 58:
#line 125 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 59:
#line 126 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 60:
#line 127 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 61:
#line 130 "parser.y"
{yyval = yyvsp[-1];;
    break;}
case 62:
#line 131 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 63:
#line 133 "parser.y"
{ yyval = createIfStatement(yyvsp[-2], yyvsp[0], NULL); ;
    break;}
case 64:
#line 134 "parser.y"
{ yyval = createIfStatement(yyvsp[-4], yyvsp[-2], yyvsp[0]); ;
    break;}
case 65:
#line 135 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
case 66:
#line 137 "parser.y"
{ yyval = createWhileStatement(yyvsp[-2], yyvsp[0]); ;
    break;}
case 67:
#line 138 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
case 68:
#line 139 "parser.y"
{yyval = yyvsp[-1];;
    break;}
case 69:
#line 140 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 70:
#line 141 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 71:
#line 142 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 72:
#line 143 "parser.y"
{yyval = yyvsp[-2] + yyvsp[0];;
    break;}
case 73:
#line 144 "parser.y"
{yyval = yyvsp[-2] - yyvsp[0];;
    break;}
case 74:
#line 145 "parser.y"
{yyval = yyvsp[-2] * yyvsp[0];;
    break;}
case 75:
#line 146 "parser.y"
{yyval = yyvsp[-2] / yyvsp[0];;
    break;}
case 76:
#line 147 "parser.y"
{yyval = yyvsp[-2] % yyvsp[0];;
    break;}
case 77:
#line 151 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 78:
#line 152 "parser.y"
{yyval = combine(yyvsp[-2], yyvsp[0]);;
    break;}
case 79:
#line 154 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 80:
#line 155 "parser.y"
{yyval = combine(yyvsp[-2], yyvsp[0]);;
    break;}
case 81:
#line 157 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 82:
#line 158 "parser.y"
{yyval = combine(yyvsp[-2], yyvsp[0]);;
    break;}
case 83:
#line 159 "parser.y"
{yyval = combine(yyvsp[-2], yyvsp[0]);;
    break;}
case 84:
#line 161 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 85:
#line 162 "parser.y"
{ yyval = createBinaryExpression(yyvsp[-2], yyvsp[-1], yyvsp[0]); ;
    break;}
case 86:
#line 163 "parser.y"
{ yyval = createBinaryExpression(yyvsp[-2], yyvsp[-1], yyvsp[0]); ;
    break;}
case 87:
#line 164 "parser.y"
{ yyval = createBinaryExpression(yyvsp[-2], yyvsp[-1], yyvsp[0]); ;
    break;}
case 88:
#line 165 "parser.y"
{ yyval = createBinaryExpression(yyvsp[-2], yyvsp[-1], yyvsp[0]); ;
    break;}
case 89:
#line 167 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 90:
#line 168 "parser.y"
{yyval = yyvsp[-2] + yyvsp[0];;
    break;}
case 91:
#line 169 "parser.y"
{yyval = yyvsp[-2] - yyvsp[0];;
    break;}
case 92:
#line 171 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 93:
#line 172 "parser.y"
{yyval = yyvsp[-2] * yyvsp[0];;
    break;}
case 94:
#line 173 "parser.y"
{yyval = yyvsp[-2] / yyvsp[0];;
    break;}
case 95:
#line 174 "parser.y"
{yyval = yyvsp[-2] % yyvsp[0];;
    break;}
case 96:
#line 176 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 97:
#line 177 "parser.y"
{yyval = -yyvsp[0];;
    break;}
case 98:
#line 178 "parser.y"
{yyval = !yyvsp[0];;
    break;}
case 99:
#line 179 "parser.y"
{++yyvsp[0]; yyval = yyvsp[0];;
    break;}
case 100:
#line 180 "parser.y"
{--yyvsp[0]; yyval = yyvsp[0];;
    break;}
case 101:
#line 182 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 102:
#line 183 "parser.y"
{yyval = createArrayAccessExpressionAlternative(yyvsp[-3], yyvsp[-1]);;
    break;}
case 103:
#line 184 "parser.y"
{yyerrok; PrintError(missing_lbracket);;
    break;}
case 104:
#line 185 "parser.y"
{yyval = createFunctionCallExpression(yyvsp[-3], yyvsp[-1]);;
    break;}
case 105:
#line 186 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
case 106:
#line 187 "parser.y"
{yyval = createUnaryExpression(yyvsp[-1], INCREMENT);;
    break;}
case 107:
#line 188 "parser.y"
{yyval = createUnaryExpression(yyvsp[-1], INCREMENT);;
    break;}
case 108:
#line 189 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 110:
#line 192 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 111:
#line 193 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 112:
#line 194 "parser.y"
{yyval = combine(yyvsp[-2], yyvsp[0]);;
    break;}
case 113:
#line 196 "parser.y"
{identName = yyvsp[0]; semantic(5);;
    break;}
case 114:
#line 197 "parser.y"
{yyval = yyvsp[0];;
    break;}
case 115:
#line 198 "parser.y"
{yyval = yyvsp[-1];;
    break;}
case 116:
#line 199 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 487 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 200 "parser.y"


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
