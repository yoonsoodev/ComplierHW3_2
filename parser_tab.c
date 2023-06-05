
/*  A Bison parser, made from parser.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	TEOF	258
#define	TIDENT	259
#define	TNUMBER	260
#define	TREALNUMBER	261
#define	TCONST	262
#define	TELSE	263
#define	TIF	264
#define	TEIF	265
#define	TINT	266
#define	TRETURN	267
#define	TVOID	268
#define	TWHILE	269
#define	TFLOAT	270
#define	TASSIGN	271
#define	TADDASSIGN	272
#define	TSUBASSIGN	273
#define	TMULASSIGN	274
#define	TDIVASSIGN	275
#define	TMODASSIGN	276
#define	TNOT	277
#define	TOR	278
#define	TAND	279
#define	TEQUAL	280
#define	TNOTEQU	281
#define	TGREAT	282
#define	TGREATE	283
#define	TLESS	284
#define	TLESSE	285
#define	TINC	286
#define	TDEC	287
#define	TERROR	288
#define	TPLUS	289
#define	TMINUS	290
#define	TSTAR	291
#define	TSLASH	292
#define	TMOD	293
#define	TLPAREN	294
#define	TRPAREN	295
#define	TCOMMA	296
#define	TLBRACE	297
#define	TRBRACE	298
#define	TLBRACKET	299
#define	TRBRACKET	300
#define	TSEMI	301
#define	TCOMMENT	302
#define	THEX	303
#define	TOCT	304
#define	LOWER_THAN_ELSE	305
#define	LOWER_THAN_OPT_STAT_LIST	306
#define	OPT_STAT_LIST	307

#line 1 "parser.y"

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



#define	YYFINAL		188
#define	YYFLAG		-32768
#define	YYNTBASE	53

#define YYTRANSLATE(x) ((unsigned)(x) <= 307 ? yytranslate[x] : 99)

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
    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     4,     7,     9,    11,    14,    17,    20,    23,
    26,    30,    32,    34,    37,    39,    41,    43,    45,    47,
    49,    51,    55,    59,    61,    62,    64,    68,    71,    74,
    79,    83,    86,    88,    89,    91,    94,    98,   102,   104,
   108,   111,   113,   117,   121,   125,   129,   131,   136,   141,
   143,   144,   147,   148,   150,   153,   156,   158,   160,   162,
   164,   166,   169,   171,   172,   178,   186,   191,   196,   199,
   207,   215,   220,   225,   228,   232,   234,   236,   240,   244,
   248,   252,   256,   260,   262,   266,   268,   272,   274,   278,
   282,   284,   288,   292,   296,   300,   302,   306,   310,   312,
   316,   320,   324,   326,   329,   332,   335,   338,   340,   345,
   350,   355,   360,   363,   366,   368,   369,   371,   373,   377,
   379,   381,   383,   387
};

static const short yyrhs[] = {    54,
     0,    55,     0,    54,    55,     0,    56,     0,    72,     0,
     4,    46,     0,     4,     1,     0,    57,    68,     0,    57,
     1,     0,     1,    68,     0,    58,    63,    64,     0,    59,
     0,    60,     0,    59,    60,     0,    61,     0,    62,     0,
     7,     0,    11,     0,    13,     0,    15,     0,     4,     0,
    39,    65,    40,     0,    39,    65,     1,     0,    66,     0,
     0,    67,     0,    66,    41,    67,     0,    66,    67,     0,
    58,    75,     0,    42,    70,    77,    43,     0,    42,    69,
     1,     0,    70,    77,     0,    71,     0,     0,    72,     0,
    71,    72,     0,    58,    73,    46,     0,    58,    73,     1,
     0,    74,     0,    73,    41,    74,     0,    73,    74,     0,
    75,     0,    75,    16,     5,     0,    75,    25,     5,     0,
    75,    16,     6,     0,    75,    25,     6,     0,     4,     0,
     4,    44,    76,    45,     0,     4,    44,    76,     1,     0,
     5,     0,     0,    78,    52,     0,     0,    79,     0,    78,
     1,     0,    78,    79,     0,    68,     0,    80,     0,    82,
     0,    83,     0,    84,     0,    81,    46,     0,    85,     0,
     0,     9,    39,    85,    40,    79,     0,     9,    39,    85,
    40,    79,     8,    79,     0,     9,    39,    85,     1,     0,
     9,    39,    40,     1,     0,     9,     1,     0,    14,    39,
    85,    40,    42,    79,    43,     0,    14,    39,    85,    40,
    42,    79,     1,     0,    14,    39,    85,     1,     0,    14,
    39,    40,     1,     0,    14,     1,     0,    12,    81,    46,
     0,    86,     0,    87,     0,    93,    16,    86,     0,    93,
    17,    86,     0,    93,    18,    86,     0,    93,    19,    86,
     0,    93,    20,    86,     0,    93,    21,    86,     0,    88,
     0,    87,    23,    88,     0,    89,     0,    88,    24,    89,
     0,    90,     0,    89,    25,    90,     0,    89,    26,    90,
     0,    91,     0,    90,    27,    91,     0,    90,    29,    91,
     0,    90,    28,    91,     0,    90,    30,    91,     0,    92,
     0,    91,    34,    92,     0,    91,    35,    92,     0,    93,
     0,    92,    36,    93,     0,    92,    37,    93,     0,    92,
    38,    93,     0,    94,     0,    35,    93,     0,    22,    93,
     0,    31,    93,     0,    32,    93,     0,    98,     0,    94,
    44,    85,    45,     0,    94,    44,    85,     1,     0,    94,
    39,    95,    40,     0,    94,    39,    95,     1,     0,    94,
    31,     0,    94,    32,     0,    96,     0,     0,    97,     0,
    86,     0,    97,    41,    86,     0,     4,     0,     5,     0,
     6,     0,    39,    85,    40,     0,    39,    85,     1,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    34,    37,    38,    41,    42,    43,    44,    47,    48,    49,
    52,    55,    58,    59,    62,    63,    66,    69,    70,    71,
    74,    80,    81,    84,    85,    88,    89,    90,    93,    95,
    96,    99,   100,   101,   104,   105,   108,   116,   126,   127,
   128,   131,   132,   133,   134,   135,   138,   139,   140,   143,
   144,   147,   148,   151,   152,   153,   156,   157,   158,   159,
   160,   163,   166,   167,   170,   171,   172,   173,   174,   177,
   178,   179,   180,   181,   184,   186,   188,   189,   190,   191,
   192,   193,   194,   197,   198,   201,   202,   205,   206,   207,
   210,   211,   212,   213,   214,   217,   218,   219,   222,   223,
   224,   225,   228,   229,   230,   231,   232,   235,   236,   237,
   238,   239,   240,   241,   244,   245,   248,   250,   251,   254,
   255,   256,   257,   258
};

static const char * const yytname[] = {   "$","error","$undefined.","TEOF","TIDENT",
"TNUMBER","TREALNUMBER","TCONST","TELSE","TIF","TEIF","TINT","TRETURN","TVOID",
"TWHILE","TFLOAT","TASSIGN","TADDASSIGN","TSUBASSIGN","TMULASSIGN","TDIVASSIGN",
"TMODASSIGN","TNOT","TOR","TAND","TEQUAL","TNOTEQU","TGREAT","TGREATE","TLESS",
"TLESSE","TINC","TDEC","TERROR","TPLUS","TMINUS","TSTAR","TSLASH","TMOD","TLPAREN",
"TRPAREN","TCOMMA","TLBRACE","TRBRACE","TLBRACKET","TRBRACKET","TSEMI","TCOMMENT",
"THEX","TOCT","LOWER_THAN_ELSE","LOWER_THAN_OPT_STAT_LIST","OPT_STAT_LIST","mini_c",
"translation_unit","external_dcl","function_def","function_header","dcl_spec",
"dcl_specifiers","dcl_specifier","type_qualifier","type_specifier","function_name",
"formal_param","opt_formal_param","formal_param_list","param_dcl","compound_st",
"compound","opt_dcl_list","declaration_list","declaration","init_dcl_list","init_declarator",
"declarator","opt_number","opt_stat_list","statement_list","statement","expression_st",
"opt_expression","if_st","while_st","return_st","expression","assignment_exp",
"logical_or_exp","logical_and_exp","equality_exp","relational_exp","additive_exp",
"multiplicative_exp","unary_exp","postfix_exp","opt_actual_param","actual_param",
"actual_param_list","primary_exp",""
};
#endif

static const short yyr1[] = {     0,
    53,    54,    54,    55,    55,    55,    55,    56,    56,    56,
    57,    58,    59,    59,    60,    60,    61,    62,    62,    62,
    63,    64,    64,    65,    65,    66,    66,    66,    67,    68,
    68,    69,    70,    70,    71,    71,    72,    72,    73,    73,
    73,    74,    74,    74,    74,    74,    75,    75,    75,    76,
    76,    77,    77,    78,    78,    78,    79,    79,    79,    79,
    79,    80,    81,    81,    82,    82,    82,    82,    82,    83,
    83,    83,    83,    83,    84,    85,    86,    86,    86,    86,
    86,    86,    86,    87,    87,    88,    88,    89,    89,    89,
    90,    90,    90,    90,    90,    91,    91,    91,    92,    92,
    92,    92,    93,    93,    93,    93,    93,    94,    94,    94,
    94,    94,    94,    94,    95,    95,    96,    97,    97,    98,
    98,    98,    98,    98
};

static const short yyr2[] = {     0,
     1,     1,     2,     1,     1,     2,     2,     2,     2,     2,
     3,     1,     1,     2,     1,     1,     1,     1,     1,     1,
     1,     3,     3,     1,     0,     1,     3,     2,     2,     4,
     3,     2,     1,     0,     1,     2,     3,     3,     1,     3,
     2,     1,     3,     3,     3,     3,     1,     4,     4,     1,
     0,     2,     0,     1,     2,     2,     1,     1,     1,     1,
     1,     2,     1,     0,     5,     7,     4,     4,     2,     7,
     7,     4,     4,     2,     3,     1,     1,     3,     3,     3,
     3,     3,     3,     1,     3,     1,     3,     1,     3,     3,
     1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
     3,     3,     1,     2,     2,     2,     2,     1,     4,     4,
     4,     4,     2,     2,     1,     0,     1,     1,     3,     1,
     1,     1,     3,     3
};

static const short yydefact[] = {     0,
     0,     0,    17,    18,    19,    20,     0,     2,     4,     0,
     0,    12,    13,    15,    16,     5,    34,    10,     7,     6,
     3,     9,     8,    47,     0,     0,    39,    42,    14,     0,
     0,    53,    33,    35,    51,    25,    11,    38,    47,     0,
    37,    41,     0,     0,    31,   120,   121,   122,     0,    64,
     0,     0,     0,     0,     0,     0,    57,    32,     0,    54,
    58,     0,    59,    60,    61,    63,    76,    77,    84,    86,
    88,    91,    96,    99,   103,   108,    36,    50,     0,     0,
     0,    24,    26,    40,    43,    45,    44,    46,    69,     0,
     0,    74,     0,   105,   106,   107,   104,     0,    30,    55,
    52,    56,    62,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   113,   114,   116,     0,    49,    48,    29,    23,
    22,     0,    28,     0,     0,    75,     0,     0,   124,   123,
    85,    99,    87,    89,    90,    92,    94,    93,    95,    97,
    98,   100,   101,   102,    78,    79,    80,    81,    82,    83,
   118,     0,   115,   117,     0,    27,    68,    67,    64,    73,
    72,     0,   112,   111,     0,   110,   109,    65,    64,   119,
    64,     0,    66,    71,    70,     0,     0,     0
};

static const short yydefgoto[] = {   186,
     7,     8,     9,    10,    80,    12,    13,    14,    15,    25,
    37,    81,    82,    83,    57,    31,    32,    33,    16,    26,
    27,    28,    79,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,   162,   163,   164,    76
};

static const short yypact[] = {   231,
   -19,     5,-32768,-32768,-32768,-32768,   218,-32768,-32768,    30,
    72,    13,-32768,-32768,-32768,-32768,    13,-32768,-32768,-32768,
-32768,-32768,-32768,    50,    51,    36,-32768,    11,-32768,    75,
    94,   119,    13,-32768,    39,    13,-32768,-32768,    58,    75,
-32768,-32768,    37,    87,-32768,-32768,-32768,-32768,    14,   185,
    49,   185,   185,   185,   185,   185,-32768,    64,    69,-32768,
-32768,    63,-32768,-32768,-32768,-32768,-32768,    91,    88,    80,
    89,    92,    61,   232,   -10,-32768,-32768,-32768,     7,    75,
    40,   186,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   163,
    84,-32768,   174,-32768,-32768,-32768,-32768,    44,-32768,-32768,
-32768,-32768,-32768,   185,   185,   185,   185,   185,   185,   185,
   185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
   185,   185,-32768,-32768,   185,   185,-32768,-32768,-32768,-32768,
-32768,    13,-32768,   133,    45,-32768,   141,    46,-32768,-32768,
    88,-32768,    80,    89,    89,    92,    92,    92,    92,    61,
    61,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,    47,-32768,   103,    24,-32768,-32768,-32768,   131,-32768,
-32768,    90,-32768,-32768,   185,-32768,-32768,   144,   131,-32768,
   131,     6,-32768,-32768,-32768,   157,   159,-32768
};

static const short yypgoto[] = {-32768,
-32768,   153,-32768,-32768,    96,-32768,   152,-32768,-32768,-32768,
-32768,-32768,-32768,   -64,    29,-32768,-32768,-32768,    -1,-32768,
    -7,    95,-32768,-32768,-32768,   -59,-32768,   121,-32768,-32768,
-32768,   -55,  -108,-32768,    68,    71,    32,    38,    43,   -50,
-32768,-32768,-32768,-32768,-32768
};


#define	YYLAST		253


static const short yytable[] = {   102,
    98,    94,    95,    96,    97,    19,   184,   127,   155,   156,
   157,   158,   159,   160,    89,    34,   161,   133,    42,     3,
   123,   124,    17,     4,   176,     5,    43,     6,   125,    18,
    22,    77,    84,   126,   135,    44,    38,   138,    23,    39,
   130,    85,    86,    78,   139,   168,   171,   173,   185,    92,
    20,   128,    90,   142,   142,   142,   142,   142,   142,   142,
   142,   142,   142,   152,   153,   154,   180,   166,   177,   100,
   165,    17,    46,    47,    48,    24,    40,    49,    39,   131,
    50,    41,    51,   140,   169,   172,   174,    93,   -21,    36,
    52,    87,    88,    35,    45,    11,   114,   115,   116,    53,
    54,    35,    11,    55,   106,   107,    99,    56,   103,   178,
    17,   105,    30,   104,   -64,   108,   109,   110,   111,   182,
   101,   183,    46,    47,    48,   112,   113,    49,    30,   136,
    50,   179,    51,   167,    46,    47,    48,   144,   145,    49,
    52,   170,    50,   175,    51,   146,   147,   148,   149,    53,
    54,   181,    52,    55,   150,   151,   187,    56,   188,    21,
    17,    53,    54,    29,   -64,    55,    46,    47,    48,    56,
    91,   141,    17,     0,   129,   143,     0,    46,    47,    48,
     0,     0,     0,     0,    52,     0,     0,     0,    46,    47,
    48,     0,     3,    53,    54,    52,     4,    55,     5,     0,
     6,    56,   134,     0,    53,    54,    52,     0,    55,     0,
     0,     0,    56,   137,     0,    53,    54,    -1,     1,    55,
     0,     2,     0,    56,     3,     0,   132,     0,     4,     0,
     5,     1,     6,     0,     2,     0,     0,     3,     0,     0,
     0,     4,     0,     5,     0,     6,     0,   117,   118,   119,
   120,   121,   122
};

static const short yycheck[] = {    59,
    56,    52,    53,    54,    55,     1,     1,     1,   117,   118,
   119,   120,   121,   122,     1,    17,   125,    82,    26,     7,
    31,    32,    42,    11,     1,    13,    16,    15,    39,     1,
     1,    33,    40,    44,    90,    25,     1,    93,    10,     4,
     1,     5,     6,     5,     1,     1,     1,     1,    43,     1,
    46,    45,    39,   104,   105,   106,   107,   108,   109,   110,
   111,   112,   113,   114,   115,   116,   175,   132,    45,     1,
   126,    42,     4,     5,     6,     4,    41,     9,     4,    40,
    12,    46,    14,    40,    40,    40,    40,    39,    39,    39,
    22,     5,     6,    44,     1,     0,    36,    37,    38,    31,
    32,    44,     7,    35,    25,    26,    43,    39,    46,   169,
    42,    24,    17,    23,    46,    27,    28,    29,    30,   179,
    52,   181,     4,     5,     6,    34,    35,     9,    33,    46,
    12,    42,    14,     1,     4,     5,     6,   106,   107,     9,
    22,     1,    12,    41,    14,   108,   109,   110,   111,    31,
    32,     8,    22,    35,   112,   113,     0,    39,     0,     7,
    42,    31,    32,    12,    46,    35,     4,     5,     6,    39,
    50,   104,    42,    -1,    80,   105,    -1,     4,     5,     6,
    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,     4,     5,
     6,    -1,     7,    31,    32,    22,    11,    35,    13,    -1,
    15,    39,    40,    -1,    31,    32,    22,    -1,    35,    -1,
    -1,    -1,    39,    40,    -1,    31,    32,     0,     1,    35,
    -1,     4,    -1,    39,     7,    -1,    41,    -1,    11,    -1,
    13,     1,    15,    -1,     4,    -1,    -1,     7,    -1,    -1,
    -1,    11,    -1,    13,    -1,    15,    -1,    16,    17,    18,
    19,    20,    21
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

case 7:
#line 44 "parser.y"
{yyerrok; PrintError(missing_semi);;
    break;}
case 9:
#line 48 "parser.y"
{yyerrok; PrintError(missing_semi);;
    break;}
case 10:
#line 49 "parser.y"
{yyerrok; PrintError(missing_funcheader);;
    break;}
case 17:
#line 66 "parser.y"
{con = 1;;
    break;}
case 18:
#line 69 "parser.y"
{type = INT;;
    break;}
case 19:
#line 70 "parser.y"
{type = VOID;;
    break;}
case 20:
#line 71 "parser.y"
{type = FLOAT;;
    break;}
case 21:
#line 75 "parser.y"
{func = 1; 
					changeHSTable(); 
					func=0; con=0; param=0; array=0; type=NONE;;
    break;}
case 23:
#line 81 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
case 24:
#line 84 "parser.y"
{param=1;;
    break;}
case 25:
#line 85 "parser.y"
{param=0;;
    break;}
case 28:
#line 90 "parser.y"
{yyerrok; PrintError(missing_comma);;
    break;}
case 31:
#line 96 "parser.y"
{yyerrok; PrintError(missing_mbracket);;
    break;}
case 37:
#line 109 "parser.y"
{
						con = 0;
						func =0;
						param = 0;
						array = 0;
						type = NONE;
					;
    break;}
case 38:
#line 117 "parser.y"
{yyerrok;
					con = 0;
					func =0;
					param = 0;
					array = 0;
					type = NONE;
					PrintError(missing_semi);;
    break;}
case 41:
#line 128 "parser.y"
{yyerrok; PrintError(missing_comma);;
    break;}
case 44:
#line 133 "parser.y"
{yyerrok; PrintError(declaring_err);;
    break;}
case 46:
#line 135 "parser.y"
{yyerrok; PrintError(declaring_err);;
    break;}
case 47:
#line 138 "parser.y"
{changeHSTable(); ;
    break;}
case 48:
#line 139 "parser.y"
{array=1; changeHSTable(); ;
    break;}
case 49:
#line 140 "parser.y"
{yyerrok; PrintError(missing_lbracket);;
    break;}
case 67:
#line 172 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
case 68:
#line 173 "parser.y"
{yyerrok; PrintError(missing_condition);;
    break;}
case 69:
#line 174 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
case 71:
#line 178 "parser.y"
{yyerrok; PrintError(missing_mbracket);;
    break;}
case 72:
#line 179 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
case 73:
#line 180 "parser.y"
{yyerrok; PrintError(missing_condition);;
    break;}
case 74:
#line 181 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
case 110:
#line 237 "parser.y"
{yyerrok; PrintError(missing_lbracket);;
    break;}
case 112:
#line 239 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
case 124:
#line 258 "parser.y"
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
#line 260 "parser.y"


void changeHSTable(){
	current_id->isConst= con;
	current_id->isFunction= func;
	current_id->isParam= param;
	current_id->isArray= array;
	current_id->spec= type;
}