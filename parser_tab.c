
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



#define	YYFINAL		205
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
    49,    51,    55,    59,    61,    62,    64,    68,    72,    75,
    78,    83,    87,    90,    92,    93,    95,    98,   102,   106,
   108,   112,   115,   117,   121,   125,   129,   133,   135,   140,
   145,   147,   148,   151,   152,   154,   157,   160,   162,   164,
   166,   168,   170,   173,   176,   178,   179,   185,   193,   198,
   203,   206,   214,   222,   227,   232,   235,   239,   243,   245,
   247,   251,   255,   259,   263,   267,   271,   274,   277,   280,
   283,   286,   289,   291,   295,   299,   301,   305,   309,   311,
   315,   319,   323,   327,   329,   333,   337,   341,   345,   349,
   353,   357,   361,   363,   367,   371,   375,   379,   381,   385,
   389,   393,   397,   401,   405,   407,   410,   413,   416,   419,
   421,   426,   431,   436,   441,   444,   447,   449,   450,   452,
   454,   458,   460,   462,   464,   468
};

static const short yyrhs[] = {    54,
     0,    55,     0,    54,    55,     0,    56,     0,    72,     0,
     4,    46,     0,     4,     1,     0,    57,    68,     0,    57,
     1,     0,     1,    68,     0,    58,    63,    64,     0,    59,
     0,    60,     0,    59,    60,     0,    61,     0,    62,     0,
     7,     0,    11,     0,    13,     0,    15,     0,     4,     0,
    39,    65,    40,     0,    39,    65,     1,     0,    66,     0,
     0,    67,     0,    66,    41,    67,     0,    66,    41,     1,
     0,    66,    67,     0,    58,    75,     0,    42,    70,    77,
    43,     0,    42,    69,     1,     0,    70,    77,     0,    71,
     0,     0,    72,     0,    71,    72,     0,    58,    73,    46,
     0,    58,    73,     1,     0,    74,     0,    73,    41,    74,
     0,    73,    74,     0,    75,     0,    75,    16,     5,     0,
    75,    25,     5,     0,    75,    16,     6,     0,    75,    25,
     6,     0,     4,     0,     4,    44,    76,    45,     0,     4,
    44,    76,     1,     0,     5,     0,     0,    78,    52,     0,
     0,    79,     0,    78,     1,     0,    78,    79,     0,    68,
     0,    80,     0,    82,     0,    83,     0,    84,     0,    81,
    46,     0,    85,     1,     0,    85,     0,     0,     9,    39,
    85,    40,    79,     0,     9,    39,    85,    40,    79,     8,
    79,     0,     9,    39,    85,     1,     0,     9,    39,    40,
     1,     0,     9,     1,     0,    14,    39,    85,    40,    42,
    79,    43,     0,    14,    39,    85,    40,    42,    79,     1,
     0,    14,    39,    85,     1,     0,    14,    39,    40,     1,
     0,    14,     1,     0,    12,    81,    46,     0,    12,    81,
     1,     0,    86,     0,    87,     0,    93,    16,    86,     0,
    93,    17,    86,     0,    93,    18,    86,     0,    93,    19,
    86,     0,    93,    20,    86,     0,    93,    21,    86,     0,
    93,    16,     0,    93,    17,     0,    93,    18,     0,    93,
    19,     0,    93,    20,     0,    93,    21,     0,    88,     0,
    87,    23,    88,     0,    87,    23,     1,     0,    89,     0,
    88,    24,    89,     0,    88,    24,     1,     0,    90,     0,
    89,    25,    90,     0,    89,    26,    90,     0,    89,    25,
     1,     0,    89,    26,     1,     0,    91,     0,    90,    27,
    91,     0,    90,    29,    91,     0,    90,    28,    91,     0,
    90,    30,    91,     0,    90,    27,     1,     0,    90,    29,
     1,     0,    90,    28,     1,     0,    90,    30,     1,     0,
    92,     0,    91,    34,    92,     0,    91,    35,    92,     0,
    91,    34,     1,     0,    91,    35,     1,     0,    93,     0,
    92,    36,    93,     0,    92,    37,    93,     0,    92,    38,
    93,     0,    92,    36,     1,     0,    92,    37,     1,     0,
    92,    38,     1,     0,    94,     0,    35,    93,     0,    22,
    93,     0,    31,    93,     0,    32,    93,     0,    98,     0,
    94,    44,    85,    45,     0,    94,    44,    85,     1,     0,
    94,    39,    95,    40,     0,    94,    39,    95,     1,     0,
    94,    31,     0,    94,    32,     0,    96,     0,     0,    97,
     0,    86,     0,    97,    41,    86,     0,     4,     0,     5,
     0,     6,     0,    39,    85,    40,     0,    39,    85,     1,
     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    34,    37,    38,    41,    42,    43,    44,    47,    48,    49,
    52,    55,    58,    59,    62,    63,    66,    69,    70,    71,
    74,    80,    81,    84,    92,    95,    96,    97,    98,   101,
   103,   104,   107,   108,   109,   112,   113,   116,   124,   134,
   135,   136,   139,   140,   141,   142,   143,   146,   147,   148,
   151,   152,   155,   156,   159,   160,   161,   164,   165,   166,
   167,   168,   171,   172,   176,   177,   180,   181,   182,   183,
   184,   187,   188,   189,   190,   191,   194,   195,   198,   200,
   201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
   211,   212,   215,   216,   217,   220,   221,   222,   225,   226,
   227,   228,   229,   232,   233,   234,   235,   236,   237,   238,
   239,   240,   243,   244,   245,   246,   247,   250,   251,   252,
   253,   254,   255,   256,   259,   260,   261,   262,   263,   266,
   267,   268,   269,   270,   271,   272,   275,   276,   279,   281,
   282,   285,   286,   287,   288,   289
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
    63,    64,    64,    65,    65,    66,    66,    66,    66,    67,
    68,    68,    69,    70,    70,    71,    71,    72,    72,    73,
    73,    73,    74,    74,    74,    74,    74,    75,    75,    75,
    76,    76,    77,    77,    78,    78,    78,    79,    79,    79,
    79,    79,    80,    80,    81,    81,    82,    82,    82,    82,
    82,    83,    83,    83,    83,    83,    84,    84,    85,    86,
    86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
    86,    86,    87,    87,    87,    88,    88,    88,    89,    89,
    89,    89,    89,    90,    90,    90,    90,    90,    90,    90,
    90,    90,    91,    91,    91,    91,    91,    92,    92,    92,
    92,    92,    92,    92,    93,    93,    93,    93,    93,    94,
    94,    94,    94,    94,    94,    94,    95,    95,    96,    97,
    97,    98,    98,    98,    98,    98
};

static const short yyr2[] = {     0,
     1,     1,     2,     1,     1,     2,     2,     2,     2,     2,
     3,     1,     1,     2,     1,     1,     1,     1,     1,     1,
     1,     3,     3,     1,     0,     1,     3,     3,     2,     2,
     4,     3,     2,     1,     0,     1,     2,     3,     3,     1,
     3,     2,     1,     3,     3,     3,     3,     1,     4,     4,
     1,     0,     2,     0,     1,     2,     2,     1,     1,     1,
     1,     1,     2,     2,     1,     0,     5,     7,     4,     4,
     2,     7,     7,     4,     4,     2,     3,     3,     1,     1,
     3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
     2,     2,     1,     3,     3,     1,     3,     3,     1,     3,
     3,     3,     3,     1,     3,     3,     3,     3,     3,     3,
     3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
     3,     3,     3,     3,     1,     2,     2,     2,     2,     1,
     4,     4,     4,     4,     2,     2,     1,     0,     1,     1,
     3,     1,     1,     1,     3,     3
};

static const short yydefact[] = {     0,
     0,     0,    17,    18,    19,    20,     0,     2,     4,     0,
     0,    12,    13,    15,    16,     5,    35,    10,     7,     6,
     3,     9,     8,    48,     0,     0,    40,    43,    14,     0,
     0,    54,    34,    36,    52,    25,    11,    39,    48,     0,
    38,    42,     0,     0,    32,   142,   143,   144,     0,    66,
     0,     0,     0,     0,     0,     0,    58,    33,     0,    55,
    59,     0,    60,    61,    62,     0,    79,    80,    93,    96,
    99,   104,   113,   118,   125,   130,    37,    51,     0,     0,
     0,    24,    26,    41,    44,    46,    45,    47,    71,     0,
     0,    65,    76,     0,   127,   128,   129,   126,     0,    31,
    56,    53,    57,    63,    64,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    87,    88,
    89,    90,    91,    92,   135,   136,   138,     0,    50,    49,
    30,    23,    22,     0,    29,     0,     0,    78,    77,     0,
     0,   146,   145,    95,    94,   118,    98,    97,   102,   100,
   103,   101,   109,   105,   111,   107,   110,   106,   112,   108,
   116,   114,   117,   115,   122,   119,   123,   120,   124,   121,
    81,    82,    83,    84,    85,    86,   140,     0,   137,   139,
     0,    28,    27,    70,    69,    66,    75,    74,     0,   134,
   133,     0,   132,   131,    67,    66,   141,    66,     0,    68,
    73,    72,     0,     0,     0
};

static const short yydefgoto[] = {   203,
     7,     8,     9,    10,    80,    12,    13,    14,    15,    25,
    37,    81,    82,    83,    57,    31,    32,    33,    16,    26,
    27,    28,    79,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,   178,   179,   180,    76
};

static const short yypact[] = {   425,
     4,     5,-32768,-32768,-32768,-32768,   408,-32768,-32768,    13,
    44,   214,-32768,-32768,-32768,-32768,   214,-32768,-32768,-32768,
-32768,-32768,-32768,   -15,    11,    32,-32768,     3,-32768,   100,
    42,    83,   214,-32768,   104,   214,-32768,-32768,    72,   100,
-32768,-32768,    17,   102,-32768,-32768,-32768,-32768,    89,   396,
    97,   396,   396,   396,   396,   396,-32768,    76,    71,-32768,
-32768,    75,-32768,-32768,-32768,    24,-32768,   101,   107,    86,
   172,   109,    63,   426,     0,-32768,-32768,-32768,    29,   100,
    14,   144,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   342,
    25,-32768,-32768,   385,-32768,-32768,-32768,-32768,    46,-32768,
-32768,-32768,-32768,-32768,-32768,   148,   159,   191,   202,   213,
   245,   256,   267,   299,   310,   321,   353,   364,   396,   396,
   396,   396,   396,   396,-32768,-32768,   396,   396,-32768,-32768,
-32768,-32768,-32768,   119,-32768,   137,    51,-32768,-32768,   155,
    93,-32768,-32768,-32768,   107,-32768,-32768,    86,-32768,   172,
-32768,   172,-32768,   109,-32768,   109,-32768,   109,-32768,   109,
-32768,    63,-32768,    63,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,    95,-32768,   125,
    37,-32768,-32768,-32768,-32768,   136,-32768,-32768,   127,-32768,
-32768,   396,-32768,-32768,   164,   136,-32768,   136,    41,-32768,
-32768,-32768,   173,   174,-32768
};

static const short yypgoto[] = {-32768,
-32768,   169,-32768,-32768,    20,-32768,   165,-32768,-32768,-32768,
-32768,-32768,-32768,   -65,    39,-32768,-32768,-32768,     1,-32768,
    -5,   106,-32768,-32768,-32768,   -59,-32768,   132,-32768,-32768,
-32768,   -49,  -111,-32768,    78,    81,    38,    99,    47,   -50,
-32768,-32768,-32768,-32768,-32768
};


#define	YYLAST		447


static const short yytable[] = {   103,
    92,    95,    96,    97,    98,    19,    99,   171,   172,   173,
   174,   175,   176,    22,   132,   177,   135,    34,    43,    11,
    42,    85,    86,   -21,   105,   138,    11,    44,    35,   129,
   125,   126,    38,    77,    84,    39,    30,   193,   127,    18,
   137,   201,    45,   128,   141,    17,   142,    24,    23,    36,
    20,   185,    30,   133,    17,   146,   146,   146,   146,   146,
   146,   146,   146,   146,   146,   166,   168,   170,   183,   -65,
   139,   101,    40,   130,    46,    47,    48,    41,   181,    49,
   197,   194,    50,   202,    51,   143,    46,    47,    48,    89,
   186,    49,    52,   188,    50,   190,    51,    93,   116,   117,
   118,    53,    54,    39,    52,    55,    87,    88,    78,    56,
   108,   109,    17,    53,    54,    35,   -66,    55,   100,   182,
   104,    56,   102,   106,    17,     3,   195,    90,   -66,     4,
   107,     5,   189,     6,   191,    94,   199,   184,   200,    46,
    47,    48,   114,   115,    49,   150,   152,    50,   144,    51,
     3,    46,    47,    48,     4,   187,     5,    52,     6,   147,
   162,   164,    46,    47,    48,   192,    53,    54,   196,    52,
    55,   198,   204,   205,    56,    21,    29,    17,    53,    54,
    52,    91,    55,   145,   134,   131,    56,   148,     0,    53,
    54,   149,     0,    55,    46,    47,    48,    56,   110,   111,
   112,   113,   151,     0,     0,    46,    47,    48,   154,   156,
   158,   160,    52,   153,     0,     0,    46,    47,    48,     0,
     3,    53,    54,    52,     4,    55,     5,     0,     6,    56,
     0,     0,    53,    54,    52,     0,    55,     0,     0,     0,
    56,     0,     0,    53,    54,   155,     0,    55,    46,    47,
    48,    56,     0,     0,     0,     0,   157,     0,     0,    46,
    47,    48,     0,     0,     0,     0,    52,   159,     0,     0,
    46,    47,    48,     0,     0,    53,    54,    52,     0,    55,
     0,     0,     0,    56,     0,     0,    53,    54,    52,     0,
    55,     0,     0,     0,    56,     0,     0,    53,    54,   161,
     0,    55,    46,    47,    48,    56,     0,     0,     0,     0,
   163,     0,     0,    46,    47,    48,     0,     0,     0,     0,
    52,   165,     0,     0,    46,    47,    48,     0,     0,    53,
    54,    52,     0,    55,     0,     0,     0,    56,     0,     0,
    53,    54,    52,     0,    55,    46,    47,    48,    56,     0,
     0,    53,    54,   167,     0,    55,    46,    47,    48,    56,
     0,     0,     0,    52,   169,     0,     0,    46,    47,    48,
     0,     0,    53,    54,    52,     0,    55,     0,     0,     0,
    56,   136,     0,    53,    54,    52,     0,    55,    46,    47,
    48,    56,     0,     0,    53,    54,     0,     0,    55,    46,
    47,    48,    56,     0,     0,     0,    52,    -1,     1,     0,
     0,     2,     0,     0,     3,    53,    54,    52,     4,    55,
     5,     0,     6,    56,   140,     1,    53,    54,     2,     0,
    55,     3,     0,     0,    56,     4,     0,     5,     0,     6,
     0,   119,   120,   121,   122,   123,   124
};

static const short yycheck[] = {    59,
    50,    52,    53,    54,    55,     1,    56,   119,   120,   121,
   122,   123,   124,     1,     1,   127,    82,    17,    16,     0,
    26,     5,     6,    39,     1,     1,     7,    25,    44,     1,
    31,    32,     1,    33,    40,     4,    17,     1,    39,     1,
    90,     1,     1,    44,    94,    42,     1,     4,    10,    39,
    46,     1,    33,    40,    42,   106,   107,   108,   109,   110,
   111,   112,   113,   114,   115,   116,   117,   118,   134,    46,
    46,     1,    41,    45,     4,     5,     6,    46,   128,     9,
   192,    45,    12,    43,    14,    40,     4,     5,     6,     1,
    40,     9,    22,     1,    12,     1,    14,     1,    36,    37,
    38,    31,    32,     4,    22,    35,     5,     6,     5,    39,
    25,    26,    42,    31,    32,    44,    46,    35,    43,     1,
    46,    39,    52,    23,    42,     7,   186,    39,    46,    11,
    24,    13,    40,    15,    40,    39,   196,     1,   198,     4,
     5,     6,    34,    35,     9,   108,   109,    12,     1,    14,
     7,     4,     5,     6,    11,     1,    13,    22,    15,     1,
   114,   115,     4,     5,     6,    41,    31,    32,    42,    22,
    35,     8,     0,     0,    39,     7,    12,    42,    31,    32,
    22,    50,    35,   106,    41,    80,    39,   107,    -1,    31,
    32,     1,    -1,    35,     4,     5,     6,    39,    27,    28,
    29,    30,     1,    -1,    -1,     4,     5,     6,   110,   111,
   112,   113,    22,     1,    -1,    -1,     4,     5,     6,    -1,
     7,    31,    32,    22,    11,    35,    13,    -1,    15,    39,
    -1,    -1,    31,    32,    22,    -1,    35,    -1,    -1,    -1,
    39,    -1,    -1,    31,    32,     1,    -1,    35,     4,     5,
     6,    39,    -1,    -1,    -1,    -1,     1,    -1,    -1,     4,
     5,     6,    -1,    -1,    -1,    -1,    22,     1,    -1,    -1,
     4,     5,     6,    -1,    -1,    31,    32,    22,    -1,    35,
    -1,    -1,    -1,    39,    -1,    -1,    31,    32,    22,    -1,
    35,    -1,    -1,    -1,    39,    -1,    -1,    31,    32,     1,
    -1,    35,     4,     5,     6,    39,    -1,    -1,    -1,    -1,
     1,    -1,    -1,     4,     5,     6,    -1,    -1,    -1,    -1,
    22,     1,    -1,    -1,     4,     5,     6,    -1,    -1,    31,
    32,    22,    -1,    35,    -1,    -1,    -1,    39,    -1,    -1,
    31,    32,    22,    -1,    35,     4,     5,     6,    39,    -1,
    -1,    31,    32,     1,    -1,    35,     4,     5,     6,    39,
    -1,    -1,    -1,    22,     1,    -1,    -1,     4,     5,     6,
    -1,    -1,    31,    32,    22,    -1,    35,    -1,    -1,    -1,
    39,    40,    -1,    31,    32,    22,    -1,    35,     4,     5,
     6,    39,    -1,    -1,    31,    32,    -1,    -1,    35,     4,
     5,     6,    39,    -1,    -1,    -1,    22,     0,     1,    -1,
    -1,     4,    -1,    -1,     7,    31,    32,    22,    11,    35,
    13,    -1,    15,    39,    40,     1,    31,    32,     4,    -1,
    35,     7,    -1,    -1,    39,    11,    -1,    13,    -1,    15,
    -1,    16,    17,    18,    19,    20,    21
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
case 22:
#line 80 "parser.y"
{param=1; changeHSTable();;
    break;}
case 23:
#line 81 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
case 24:
#line 85 "parser.y"
{param=1; 
					changeHSTable();
					con = 0;
					func =0;
					param = 0;
					array = 0;
					type = NONE;;
    break;}
case 25:
#line 92 "parser.y"
{param=0;;
    break;}
case 28:
#line 97 "parser.y"
{yyerrok; PrintError(missing_comma);;
    break;}
case 29:
#line 98 "parser.y"
{yyerrok; PrintError(missing_comma);;
    break;}
case 30:
#line 101 "parser.y"
{param=1; changeHSTable();;
    break;}
case 32:
#line 104 "parser.y"
{yyerrok; PrintError(missing_mbracket);;
    break;}
case 38:
#line 117 "parser.y"
{
						con = 0;
						func =0;
						param = 0;
						array = 0;
						type = NONE;
					;
    break;}
case 39:
#line 125 "parser.y"
{yyerrok;
					con = 0;
					func =0;
					param = 0;
					array = 0;
					type = NONE;
					PrintError(missing_semi);;
    break;}
case 42:
#line 136 "parser.y"
{yyerrok; PrintError(missing_comma);;
    break;}
case 45:
#line 141 "parser.y"
{yyerrok; PrintError(declaring_err);;
    break;}
case 47:
#line 143 "parser.y"
{yyerrok; PrintError(declaring_err);;
    break;}
case 48:
#line 146 "parser.y"
{changeHSTable(); ;
    break;}
case 49:
#line 147 "parser.y"
{array=1; changeHSTable(); ;
    break;}
case 50:
#line 148 "parser.y"
{yyerrok; PrintError(missing_lbracket);;
    break;}
case 64:
#line 172 "parser.y"
{yyerrok; PrintError(missing_semi);;
    break;}
case 69:
#line 182 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
case 70:
#line 183 "parser.y"
{yyerrok; PrintError(missing_condition);;
    break;}
case 71:
#line 184 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
case 73:
#line 188 "parser.y"
{yyerrok; PrintError(missing_mbracket);;
    break;}
case 74:
#line 189 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
case 75:
#line 190 "parser.y"
{yyerrok; PrintError(missing_condition);;
    break;}
case 76:
#line 191 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
case 78:
#line 195 "parser.y"
{yyerrok; PrintError(missing_semi);;
    break;}
case 87:
#line 207 "parser.y"
{yyerrok; PrintError(wrong_assign);;
    break;}
case 88:
#line 208 "parser.y"
{yyerrok; PrintError(wrong_assign);;
    break;}
case 89:
#line 209 "parser.y"
{yyerrok; PrintError(wrong_assign);;
    break;}
case 90:
#line 210 "parser.y"
{yyerrok; PrintError(wrong_assign);;
    break;}
case 91:
#line 211 "parser.y"
{yyerrok; PrintError(wrong_assign);;
    break;}
case 92:
#line 212 "parser.y"
{yyerrok; PrintError(wrong_assign);;
    break;}
case 95:
#line 217 "parser.y"
{yyerrok; PrintError(missing_operand);;
    break;}
case 98:
#line 222 "parser.y"
{yyerrok; PrintError(missing_operand);;
    break;}
case 102:
#line 228 "parser.y"
{yyerrok; PrintError(missing_operand);;
    break;}
case 103:
#line 229 "parser.y"
{yyerrok; PrintError(missing_operand);;
    break;}
case 109:
#line 237 "parser.y"
{yyerrok; PrintError(missing_operand);;
    break;}
case 110:
#line 238 "parser.y"
{yyerrok; PrintError(missing_operand);;
    break;}
case 111:
#line 239 "parser.y"
{yyerrok; PrintError(missing_operand);;
    break;}
case 112:
#line 240 "parser.y"
{yyerrok; PrintError(missing_operand);;
    break;}
case 116:
#line 246 "parser.y"
{yyerrok; PrintError(missing_operand);;
    break;}
case 117:
#line 247 "parser.y"
{yyerrok; PrintError(missing_operand);;
    break;}
case 122:
#line 254 "parser.y"
{yyerrok; PrintError(missing_operand);;
    break;}
case 123:
#line 255 "parser.y"
{yyerrok; PrintError(missing_operand);;
    break;}
case 124:
#line 256 "parser.y"
{yyerrok; PrintError(missing_operand);;
    break;}
case 132:
#line 268 "parser.y"
{yyerrok; PrintError(missing_lbracket);;
    break;}
case 134:
#line 270 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
case 141:
#line 282 "parser.y"
{param=1;;
    break;}
case 146:
#line 289 "parser.y"
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
#line 291 "parser.y"


void changeHSTable(){
	current_id->isConst= con;
	current_id->isFunction= func;
	current_id->isParam= param;
	current_id->isArray= array;
	current_id->spec= type;
}