
/*  A Bison parser, made from parser.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	TEOF	258
#define	TIDENT	259
#define	TNUMBER	260
#define	TCONST	261
#define	TELSE	262
#define	TIF	263
#define	TEIF	264
#define	TINT	265
#define	TRETURN	266
#define	TVOID	267
#define	TWHILE	268
#define	TASSIGN	269
#define	TADDASSIGN	270
#define	TSUBASSIGN	271
#define	TMULASSIGN	272
#define	TDIVASSIGN	273
#define	TMODASSIGN	274
#define	TNOT	275
#define	TOR	276
#define	TAND	277
#define	TEQUAL	278
#define	TNOTEQU	279
#define	TGREAT	280
#define	TGREATE	281
#define	TLESS	282
#define	TLESSE	283
#define	TINC	284
#define	TDEC	285
#define	TERROR	286
#define	TPLUS	287
#define	TMINUS	288
#define	TSTAR	289
#define	TSLASH	290
#define	TMOD	291
#define	TLPAREN	292
#define	TRPAREN	293
#define	TCOMMA	294
#define	TLBRACE	295
#define	TRBRACE	296
#define	TLBRACKET	297
#define	TRBRACKET	298
#define	TSEMI	299
#define	TCOMMENT	300
#define	THEX	301
#define	TOCT	302
#define	LOWER_THAN_ELSE	303
#define	LOWER_THAN_OPT_STAT_LIST	304
#define	OPT_STAT_LIST	305

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
Types type = NONE;

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



#define	YYFINAL		180
#define	YYFLAG		-32768
#define	YYNTBASE	51

#define YYTRANSLATE(x) ((unsigned)(x) <= 305 ? yytranslate[x] : 97)

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
    46,    47,    48,    49,    50
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     4,     7,     9,    11,    14,    17,    20,    23,
    26,    30,    32,    34,    37,    39,    41,    43,    45,    47,
    49,    53,    57,    61,    65,    67,    68,    70,    74,    77,
    80,    85,    89,    92,    94,    95,    97,   100,   104,   108,
   110,   114,   117,   119,   123,   127,   129,   134,   139,   141,
   142,   145,   146,   148,   151,   154,   156,   158,   160,   162,
   164,   167,   169,   170,   176,   184,   189,   192,   198,   203,
   206,   210,   212,   214,   218,   222,   226,   230,   234,   238,
   240,   244,   246,   250,   252,   256,   260,   262,   266,   270,
   274,   278,   280,   284,   288,   290,   294,   298,   302,   304,
   307,   310,   313,   316,   318,   323,   328,   333,   338,   341,
   344,   346,   347,   349,   351,   355,   357,   359,   363
};

static const short yyrhs[] = {    52,
     0,    53,     0,    52,    53,     0,    54,     0,    70,     0,
     4,    44,     0,     4,     1,     0,    55,    66,     0,    55,
     1,     0,     1,    66,     0,    56,    61,    62,     0,    57,
     0,    58,     0,    57,    58,     0,    59,     0,    60,     0,
     6,     0,    10,     0,    12,     0,     4,     0,    37,    63,
    38,     0,    37,    80,    38,     0,    37,    80,     1,     0,
    37,    63,     1,     0,    64,     0,     0,    65,     0,    64,
    39,    65,     0,    64,    65,     0,    56,    73,     0,    40,
    68,    75,    41,     0,    40,    67,     1,     0,    68,    75,
     0,    69,     0,     0,    70,     0,    69,    70,     0,    56,
    71,    44,     0,    56,    71,     1,     0,    72,     0,    71,
    39,    72,     0,    71,    72,     0,    73,     0,    73,    14,
     5,     0,    73,    23,     5,     0,     4,     0,     4,    42,
    74,    43,     0,     4,    42,    74,     1,     0,     5,     0,
     0,    76,    50,     0,     0,    77,     0,    76,     1,     0,
    76,    77,     0,    66,     0,    78,     0,    80,     0,    81,
     0,    82,     0,    79,    44,     0,    83,     0,     0,     8,
    37,    83,    38,    77,     0,     8,    37,    83,    38,    77,
     7,    77,     0,     8,    37,    83,     1,     0,     8,     1,
     0,    13,    37,    83,    38,    77,     0,    13,    37,    83,
     1,     0,    13,     1,     0,    11,    79,    44,     0,    84,
     0,    85,     0,    91,    14,    84,     0,    91,    15,    84,
     0,    91,    16,    84,     0,    91,    17,    84,     0,    91,
    18,    84,     0,    91,    19,    84,     0,    86,     0,    85,
    21,    86,     0,    87,     0,    86,    22,    87,     0,    88,
     0,    87,    23,    88,     0,    87,    24,    88,     0,    89,
     0,    88,    25,    89,     0,    88,    27,    89,     0,    88,
    26,    89,     0,    88,    28,    89,     0,    90,     0,    89,
    32,    90,     0,    89,    33,    90,     0,    91,     0,    90,
    34,    91,     0,    90,    35,    91,     0,    90,    36,    91,
     0,    92,     0,    33,    91,     0,    20,    91,     0,    29,
    91,     0,    30,    91,     0,    96,     0,    92,    42,    83,
    43,     0,    92,    42,    83,     1,     0,    92,    37,    93,
    38,     0,    92,    37,    93,     1,     0,    92,    29,     0,
    92,    30,     0,    94,     0,     0,    95,     0,    84,     0,
    95,    39,    84,     0,     4,     0,     5,     0,    37,    83,
    38,     0,    37,    83,     1,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    34,    37,    38,    41,    42,    43,    44,    47,    48,    49,
    52,    55,    58,    59,    62,    63,    66,    69,    70,    73,
    76,    77,    78,    79,    82,    83,    86,    87,    88,    91,
    93,    94,    97,    98,    99,   102,   103,   106,   114,   117,
   118,   119,   122,   123,   124,   127,   128,   129,   132,   133,
   136,   137,   140,   141,   142,   145,   146,   147,   148,   149,
   152,   155,   156,   159,   160,   161,   162,   165,   166,   167,
   170,   172,   174,   175,   176,   177,   178,   179,   180,   183,
   184,   187,   188,   191,   192,   193,   196,   197,   198,   199,
   200,   203,   204,   205,   208,   209,   210,   211,   214,   215,
   216,   217,   218,   221,   222,   223,   224,   225,   226,   227,
   230,   231,   234,   236,   237,   240,   242,   243,   244
};

static const char * const yytname[] = {   "$","error","$undefined.","TEOF","TIDENT",
"TNUMBER","TCONST","TELSE","TIF","TEIF","TINT","TRETURN","TVOID","TWHILE","TASSIGN",
"TADDASSIGN","TSUBASSIGN","TMULASSIGN","TDIVASSIGN","TMODASSIGN","TNOT","TOR",
"TAND","TEQUAL","TNOTEQU","TGREAT","TGREATE","TLESS","TLESSE","TINC","TDEC",
"TERROR","TPLUS","TMINUS","TSTAR","TSLASH","TMOD","TLPAREN","TRPAREN","TCOMMA",
"TLBRACE","TRBRACE","TLBRACKET","TRBRACKET","TSEMI","TCOMMENT","THEX","TOCT",
"LOWER_THAN_ELSE","LOWER_THAN_OPT_STAT_LIST","OPT_STAT_LIST","mini_c","translation_unit",
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
    51,    52,    52,    53,    53,    53,    53,    54,    54,    54,
    55,    56,    57,    57,    58,    58,    59,    60,    60,    61,
    62,    62,    62,    62,    63,    63,    64,    64,    64,    65,
    66,    66,    67,    68,    68,    69,    69,    70,    70,    71,
    71,    71,    72,    72,    72,    73,    73,    73,    74,    74,
    75,    75,    76,    76,    76,    77,    77,    77,    77,    77,
    78,    79,    79,    80,    80,    80,    80,    81,    81,    81,
    82,    83,    84,    84,    84,    84,    84,    84,    84,    85,
    85,    86,    86,    87,    87,    87,    88,    88,    88,    88,
    88,    89,    89,    89,    90,    90,    90,    90,    91,    91,
    91,    91,    91,    92,    92,    92,    92,    92,    92,    92,
    93,    93,    94,    95,    95,    96,    96,    96,    96
};

static const short yyr2[] = {     0,
     1,     1,     2,     1,     1,     2,     2,     2,     2,     2,
     3,     1,     1,     2,     1,     1,     1,     1,     1,     1,
     3,     3,     3,     3,     1,     0,     1,     3,     2,     2,
     4,     3,     2,     1,     0,     1,     2,     3,     3,     1,
     3,     2,     1,     3,     3,     1,     4,     4,     1,     0,
     2,     0,     1,     2,     2,     1,     1,     1,     1,     1,
     2,     1,     0,     5,     7,     4,     2,     5,     4,     2,
     3,     1,     1,     3,     3,     3,     3,     3,     3,     1,
     3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
     3,     1,     3,     3,     1,     3,     3,     3,     1,     2,
     2,     2,     2,     1,     4,     4,     4,     4,     2,     2,
     1,     0,     1,     1,     3,     1,     1,     3,     3
};

static const short yydefact[] = {     0,
     0,     0,    17,    18,    19,     0,     2,     4,     0,     0,
    12,    13,    15,    16,     5,    35,    10,     7,     6,     3,
     9,     8,    46,     0,     0,    40,    43,    14,     0,     0,
    52,    34,    36,    50,    26,    11,    39,    46,     0,    38,
    42,     0,     0,    32,   116,   117,     0,    63,     0,     0,
     0,     0,     0,     0,    56,    33,     0,    53,    57,     0,
    58,    59,    60,    62,    72,    73,    80,    82,    84,    87,
    92,    95,    99,   104,    37,    49,     0,     0,     0,    25,
    27,     0,    41,    44,    45,    67,     0,     0,    70,     0,
   101,   102,   103,   100,     0,    31,    54,    51,    55,    61,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   109,
   110,   112,     0,    48,    47,    30,    24,    21,     0,    29,
    23,    22,     0,    71,     0,   119,   118,    81,    95,    83,
    85,    86,    88,    90,    89,    91,    93,    94,    96,    97,
    98,    74,    75,    76,    77,    78,    79,   114,     0,   111,
   113,     0,    28,    66,    63,    69,    63,   108,   107,     0,
   106,   105,    64,    68,   115,    63,    65,     0,     0,     0
};

static const short yydefgoto[] = {   178,
     6,     7,     8,     9,    78,    11,    12,    13,    14,    24,
    36,    79,    80,    81,    55,    30,    31,    32,    15,    25,
    26,    27,    77,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,   159,   160,   161,    74
};

static const short yypact[] = {   166,
   -18,     6,-32768,-32768,-32768,   159,-32768,-32768,     7,    20,
    78,-32768,-32768,-32768,-32768,    78,-32768,-32768,-32768,-32768,
-32768,-32768,    57,   -11,     5,-32768,     9,-32768,    26,    42,
   101,    78,-32768,    46,   167,-32768,-32768,    49,    26,-32768,
-32768,    76,    93,-32768,-32768,-32768,    15,   119,    37,   119,
   119,   119,   119,   119,-32768,    60,    67,-32768,-32768,    59,
-32768,-32768,-32768,-32768,-32768,    99,   111,    92,   163,   110,
    91,   168,    -1,-32768,-32768,-32768,    24,    26,    38,    83,
-32768,    39,-32768,-32768,-32768,-32768,   119,    69,-32768,   119,
-32768,-32768,-32768,-32768,    41,-32768,-32768,-32768,-32768,-32768,
   119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
   119,   119,   119,   119,   119,   119,   119,   119,   119,-32768,
-32768,   119,   119,-32768,-32768,-32768,-32768,-32768,    78,-32768,
-32768,-32768,    44,-32768,    45,-32768,-32768,   111,-32768,    92,
   163,   163,   110,   110,   110,   110,    91,    91,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,    47,-32768,
    97,    30,-32768,-32768,   124,-32768,   124,-32768,-32768,   119,
-32768,-32768,   133,-32768,-32768,   124,-32768,   150,   151,-32768
};

static const short yypgoto[] = {-32768,
-32768,   149,-32768,-32768,    86,-32768,   147,-32768,-32768,-32768,
-32768,-32768,-32768,   -60,    18,-32768,-32768,-32768,     1,-32768,
    -4,    84,-32768,-32768,-32768,   -57,-32768,   118,   139,-32768,
-32768,   -53,  -104,-32768,    95,    66,    43,    87,    71,   -48,
-32768,-32768,-32768,-32768,-32768
};


#define	YYLAST		196


static const short yytable[] = {    99,
    95,    91,    92,    93,    94,    37,    18,    21,    38,   152,
   153,   154,   155,   156,   157,    86,    33,   158,    17,   130,
    41,    16,    42,    23,   124,    35,    22,   120,   121,    38,
   171,    43,    75,   133,    83,   122,   135,    89,   127,   131,
   123,   136,    44,    39,   164,   166,    16,   168,    40,    19,
    76,    87,   139,   139,   139,   139,   139,   139,   139,   139,
   139,   139,   149,   150,   151,   175,   125,    97,   163,   162,
    45,    46,   172,    90,    47,   128,   132,    48,   137,    49,
    84,   165,   167,     3,   169,    10,    50,     4,     3,     5,
    34,    10,     4,   -20,     5,    51,    52,    85,    34,    53,
    96,    29,   100,    54,    45,    46,    16,   173,    47,   174,
   -63,    48,   134,    49,   103,   104,    98,    29,   177,   101,
    50,   129,    45,    46,   111,   112,   113,    45,    46,    51,
    52,    47,   102,    53,    48,   170,    49,    54,    50,   176,
    16,   109,   110,    50,   -63,   141,   142,    51,    52,   179,
   180,    53,    51,    52,    20,    54,    53,    28,    -1,     1,
    54,   126,     2,    16,     3,    88,     1,   140,     4,     2,
     5,     3,     3,    82,    47,     4,     4,     5,     5,   147,
   148,   114,   115,   116,   117,   118,   119,   105,   106,   107,
   108,   143,   144,   145,   146,   138
};

static const short yycheck[] = {    57,
    54,    50,    51,    52,    53,     1,     1,     1,     4,   114,
   115,   116,   117,   118,   119,     1,    16,   122,     1,    80,
    25,    40,    14,     4,     1,    37,     9,    29,    30,     4,
     1,    23,    32,    87,    39,    37,    90,     1,     1,     1,
    42,     1,     1,    39,     1,     1,    40,     1,    44,    44,
     5,    37,   101,   102,   103,   104,   105,   106,   107,   108,
   109,   110,   111,   112,   113,   170,    43,     1,   129,   123,
     4,     5,    43,    37,     8,    38,    38,    11,    38,    13,
     5,    38,    38,     6,    38,     0,    20,    10,     6,    12,
    42,     6,    10,    37,    12,    29,    30,     5,    42,    33,
    41,    16,    44,    37,     4,     5,    40,   165,     8,   167,
    44,    11,    44,    13,    23,    24,    50,    32,   176,    21,
    20,    39,     4,     5,    34,    35,    36,     4,     5,    29,
    30,     8,    22,    33,    11,    39,    13,    37,    20,     7,
    40,    32,    33,    20,    44,   103,   104,    29,    30,     0,
     0,    33,    29,    30,     6,    37,    33,    11,     0,     1,
    37,    78,     4,    40,     6,    48,     1,   102,    10,     4,
    12,     6,     6,    35,     8,    10,    10,    12,    12,   109,
   110,    14,    15,    16,    17,    18,    19,    25,    26,    27,
    28,   105,   106,   107,   108,   101
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
#line 73 "parser.y"
{func = 1; changeHSTable();;
    break;}
case 23:
#line 78 "parser.y"
{yyerrok; printf("no if_st");;
    break;}
case 24:
#line 79 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
case 25:
#line 82 "parser.y"
{param=1;;
    break;}
case 26:
#line 83 "parser.y"
{param=0;;
    break;}
case 29:
#line 88 "parser.y"
{yyerrok; PrintError(missing_comma);;
    break;}
case 32:
#line 94 "parser.y"
{yyerrok; PrintError(missing_mbracket);;
    break;}
case 38:
#line 107 "parser.y"
{
						con = 0;
						func =0;
						param = 0;
						array = 0;
						type = NONE;
					;
    break;}
case 39:
#line 114 "parser.y"
{yyerrok; PrintError(missing_semi);;
    break;}
case 42:
#line 119 "parser.y"
{yyerrok; PrintError(missing_comma);;
    break;}
case 45:
#line 124 "parser.y"
{yyerrok; PrintError(declaring_err);;
    break;}
case 46:
#line 127 "parser.y"
{changeHSTable(); ;
    break;}
case 47:
#line 128 "parser.y"
{array=1; changeHSTable(); ;
    break;}
case 48:
#line 129 "parser.y"
{yyerrok; PrintError(missing_lbracket);;
    break;}
case 66:
#line 161 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
case 67:
#line 162 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
case 69:
#line 166 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
case 70:
#line 167 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
case 106:
#line 223 "parser.y"
{yyerrok; PrintError(missing_lbracket);;
    break;}
case 108:
#line 225 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
case 116:
#line 241 "parser.y"
{ func=0; param =0; con=0; array=0; type=NONE; changeHSTable();;
    break;}
case 119:
#line 244 "parser.y"
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
#line 246 "parser.y"


void changeHSTable(){
	current_id->isConst= con;
	current_id->isFunction= func;
	current_id->isParam= param;
	current_id->isArray= array;
	current_id->spec= type;
	func=0; param =0; con=0; array=0; type=NONE;
}