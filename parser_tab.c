
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
con = 0;
func =0;
param = 0;
array = 0;
type = NONE;

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



#define	YYFINAL		177
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
    49,    53,    57,    59,    60,    62,    66,    69,    72,    77,
    81,    84,    86,    87,    89,    92,    96,   100,   102,   106,
   109,   111,   115,   119,   121,   126,   131,   133,   134,   137,
   138,   140,   143,   146,   148,   150,   152,   154,   156,   159,
   161,   162,   168,   176,   181,   184,   190,   195,   198,   202,
   204,   206,   210,   214,   218,   222,   226,   230,   232,   236,
   238,   242,   244,   248,   252,   254,   258,   262,   266,   270,
   272,   276,   280,   282,   286,   290,   294,   296,   299,   302,
   305,   308,   310,   315,   320,   325,   330,   333,   336,   338,
   339,   341,   343,   347,   349,   351,   355
};

static const short yyrhs[] = {    52,
     0,    53,     0,    52,    53,     0,    54,     0,    70,     0,
     4,    44,     0,     4,     1,     0,    55,    66,     0,    55,
     1,     0,     1,    66,     0,    56,    61,    62,     0,    57,
     0,    58,     0,    57,    58,     0,    59,     0,    60,     0,
     6,     0,    10,     0,    12,     0,     4,     0,    37,    63,
    38,     0,    37,    63,     1,     0,    64,     0,     0,    65,
     0,    64,    39,    65,     0,    64,    65,     0,    56,    73,
     0,    40,    68,    75,    41,     0,    40,    67,     1,     0,
    68,    75,     0,    69,     0,     0,    70,     0,    69,    70,
     0,    56,    71,    44,     0,    56,    71,     1,     0,    72,
     0,    71,    39,    72,     0,    71,    72,     0,    73,     0,
    73,    14,     5,     0,    73,    23,     5,     0,     4,     0,
     4,    42,    74,    43,     0,     4,    42,    74,     1,     0,
     5,     0,     0,    76,    50,     0,     0,    77,     0,    76,
     1,     0,    76,    77,     0,    66,     0,    78,     0,    80,
     0,    81,     0,    82,     0,    79,    44,     0,    83,     0,
     0,     8,    37,    83,    38,    77,     0,     8,    37,    83,
    38,    77,     7,    77,     0,     8,    37,    83,     1,     0,
     8,     1,     0,    13,    37,    83,    38,    77,     0,    13,
    37,    83,     1,     0,    13,     1,     0,    11,    79,    44,
     0,    84,     0,    85,     0,    91,    14,    84,     0,    91,
    15,    84,     0,    91,    16,    84,     0,    91,    17,    84,
     0,    91,    18,    84,     0,    91,    19,    84,     0,    86,
     0,    85,    21,    86,     0,    87,     0,    86,    22,    87,
     0,    88,     0,    87,    23,    88,     0,    87,    24,    88,
     0,    89,     0,    88,    25,    89,     0,    88,    27,    89,
     0,    88,    26,    89,     0,    88,    28,    89,     0,    90,
     0,    89,    32,    90,     0,    89,    33,    90,     0,    91,
     0,    90,    34,    91,     0,    90,    35,    91,     0,    90,
    36,    91,     0,    92,     0,    33,    91,     0,    20,    91,
     0,    29,    91,     0,    30,    91,     0,    96,     0,    92,
    42,    83,    43,     0,    92,    42,    83,     1,     0,    92,
    37,    93,    38,     0,    92,    37,    93,     1,     0,    92,
    29,     0,    92,    30,     0,    94,     0,     0,    95,     0,
    84,     0,    95,    39,    84,     0,     4,     0,     5,     0,
    37,    83,    38,     0,    37,    83,     1,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    34,    37,    38,    41,    42,    43,    44,    47,    48,    49,
    52,    55,    58,    59,    62,    63,    66,    69,    70,    73,
    76,    77,    80,    81,    84,    85,    86,    89,    91,    92,
    95,    96,    97,   100,   101,   104,   112,   115,   116,   117,
   120,   121,   122,   125,   126,   127,   130,   131,   134,   135,
   138,   139,   140,   143,   144,   145,   146,   147,   150,   153,
   154,   157,   158,   159,   160,   163,   164,   165,   168,   170,
   172,   173,   174,   175,   176,   177,   178,   181,   182,   185,
   186,   189,   190,   191,   194,   195,   196,   197,   198,   201,
   202,   203,   206,   207,   208,   209,   212,   213,   214,   215,
   216,   219,   220,   221,   222,   223,   224,   225,   228,   229,
   232,   234,   235,   238,   240,   241,   242
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
    62,    62,    63,    63,    64,    64,    64,    65,    66,    66,
    67,    68,    68,    69,    69,    70,    70,    71,    71,    71,
    72,    72,    72,    73,    73,    73,    74,    74,    75,    75,
    76,    76,    76,    77,    77,    77,    77,    77,    78,    79,
    79,    80,    80,    80,    80,    81,    81,    81,    82,    83,
    84,    84,    84,    84,    84,    84,    84,    85,    85,    86,
    86,    87,    87,    87,    88,    88,    88,    88,    88,    89,
    89,    89,    90,    90,    90,    90,    91,    91,    91,    91,
    91,    92,    92,    92,    92,    92,    92,    92,    93,    93,
    94,    95,    95,    96,    96,    96,    96
};

static const short yyr2[] = {     0,
     1,     1,     2,     1,     1,     2,     2,     2,     2,     2,
     3,     1,     1,     2,     1,     1,     1,     1,     1,     1,
     3,     3,     1,     0,     1,     3,     2,     2,     4,     3,
     2,     1,     0,     1,     2,     3,     3,     1,     3,     2,
     1,     3,     3,     1,     4,     4,     1,     0,     2,     0,
     1,     2,     2,     1,     1,     1,     1,     1,     2,     1,
     0,     5,     7,     4,     2,     5,     4,     2,     3,     1,
     1,     3,     3,     3,     3,     3,     3,     1,     3,     1,
     3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
     3,     3,     1,     3,     3,     3,     1,     2,     2,     2,
     2,     1,     4,     4,     4,     4,     2,     2,     1,     0,
     1,     1,     3,     1,     1,     3,     3
};

static const short yydefact[] = {     0,
     0,     0,    17,    18,    19,     0,     2,     4,     0,     0,
    12,    13,    15,    16,     5,    33,    10,     7,     6,     3,
     9,     8,    44,     0,     0,    38,    41,    14,     0,     0,
    50,    32,    34,    48,    24,    11,    37,    44,     0,    36,
    40,     0,     0,    30,   114,   115,     0,    61,     0,     0,
     0,     0,     0,     0,    54,    31,     0,    51,    55,     0,
    56,    57,    58,    60,    70,    71,    78,    80,    82,    85,
    90,    93,    97,   102,    35,    47,     0,     0,     0,    23,
    25,    39,    42,    43,    65,     0,     0,    68,     0,    99,
   100,   101,    98,     0,    29,    52,    49,    53,    59,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   107,   108,
   110,     0,    46,    45,    28,    22,    21,     0,    27,     0,
    69,     0,   117,   116,    79,    93,    81,    83,    84,    86,
    88,    87,    89,    91,    92,    94,    95,    96,    72,    73,
    74,    75,    76,    77,   112,     0,   109,   111,     0,    26,
    64,    61,    67,    61,   106,   105,     0,   104,   103,    62,
    66,   113,    61,    63,     0,     0,     0
};

static const short yydefgoto[] = {   175,
     6,     7,     8,     9,    78,    11,    12,    13,    14,    24,
    36,    79,    80,    81,    55,    30,    31,    32,    15,    25,
    26,    27,    77,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,   156,   157,   158,    74
};

static const short yypact[] = {   165,
   -19,     6,-32768,-32768,-32768,    91,-32768,-32768,     7,    28,
   152,-32768,-32768,-32768,-32768,   152,-32768,-32768,-32768,-32768,
-32768,-32768,   -15,   -14,     5,-32768,    70,-32768,    41,    47,
   107,   152,-32768,    46,   152,-32768,-32768,    44,    41,-32768,
-32768,    83,    85,-32768,-32768,-32768,     9,   119,    42,   119,
   119,   119,   119,   119,-32768,    55,    69,-32768,-32768,    39,
-32768,-32768,-32768,-32768,-32768,    87,    82,    98,   153,   113,
   138,   114,     0,-32768,-32768,-32768,    24,    41,    33,    75,
-32768,-32768,-32768,-32768,-32768,   119,    73,-32768,   119,-32768,
-32768,-32768,-32768,    34,-32768,-32768,-32768,-32768,-32768,   119,
   119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
   119,   119,   119,   119,   119,   119,   119,   119,-32768,-32768,
   119,   119,-32768,-32768,-32768,-32768,-32768,   152,-32768,    37,
-32768,    38,-32768,-32768,    82,-32768,    98,   153,   153,   113,
   113,   113,   113,   138,   138,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,    40,-32768,    86,    25,-32768,
-32768,   130,-32768,   130,-32768,-32768,   119,-32768,-32768,   135,
-32768,-32768,   130,-32768,   155,   157,-32768
};

static const short yypgoto[] = {-32768,
-32768,   159,-32768,-32768,    94,-32768,   150,-32768,-32768,-32768,
-32768,-32768,-32768,   -62,    19,-32768,-32768,-32768,     8,-32768,
    -8,    90,-32768,-32768,-32768,   -57,-32768,   128,-32768,-32768,
-32768,   -53,  -102,-32768,    89,    92,    51,    78,    79,   -48,
-32768,-32768,-32768,-32768,-32768
};


#define	YYLAST		193


static const short yytable[] = {    98,
    94,    90,    91,    92,    93,    37,    18,    21,    38,    85,
   149,   150,   151,   152,   153,   154,    41,   129,   155,    17,
    16,   -20,    35,    33,   123,   168,    34,    22,   119,   120,
    82,    23,   130,   126,   133,   132,   121,   161,   163,    75,
   165,   122,    88,    39,    38,    86,    16,    44,    40,    19,
    76,   136,   136,   136,   136,   136,   136,   136,   136,   136,
   136,   146,   147,   148,   172,   160,   124,   169,   159,    96,
   127,   134,    45,    46,   162,   164,    47,   166,    89,    48,
     3,    49,    99,    42,     4,    34,     5,    83,    50,    84,
    -1,     1,    43,    10,     2,    95,     3,    51,    52,    10,
     4,    53,     5,   101,   170,    54,   171,   100,    16,    29,
    45,    46,   -61,   128,    47,   174,   131,    48,    97,    49,
   102,   103,    45,    46,   167,    29,    50,   113,   114,   115,
   116,   117,   118,    45,    46,    51,    52,    47,    50,    53,
    48,   173,    49,    54,   108,   109,    16,    51,    52,    50,
   -61,    53,   138,   139,   176,    54,   177,     3,    51,    52,
    28,     4,    53,     5,    20,     1,    54,   125,     2,    16,
     3,   110,   111,   112,     4,    87,     5,   104,   105,   106,
   107,   140,   141,   142,   143,     0,   144,   145,   135,     0,
     0,     0,   137
};

static const short yycheck[] = {    57,
    54,    50,    51,    52,    53,     1,     1,     1,     4,     1,
   113,   114,   115,   116,   117,   118,    25,    80,   121,     1,
    40,    37,    37,    16,     1,     1,    42,     9,    29,    30,
    39,     4,    86,     1,     1,    89,    37,     1,     1,    32,
     1,    42,     1,    39,     4,    37,    40,     1,    44,    44,
     5,   100,   101,   102,   103,   104,   105,   106,   107,   108,
   109,   110,   111,   112,   167,   128,    43,    43,   122,     1,
    38,    38,     4,     5,    38,    38,     8,    38,    37,    11,
     6,    13,    44,    14,    10,    42,    12,     5,    20,     5,
     0,     1,    23,     0,     4,    41,     6,    29,    30,     6,
    10,    33,    12,    22,   162,    37,   164,    21,    40,    16,
     4,     5,    44,    39,     8,   173,    44,    11,    50,    13,
    23,    24,     4,     5,    39,    32,    20,    14,    15,    16,
    17,    18,    19,     4,     5,    29,    30,     8,    20,    33,
    11,     7,    13,    37,    32,    33,    40,    29,    30,    20,
    44,    33,   102,   103,     0,    37,     0,     6,    29,    30,
    11,    10,    33,    12,     6,     1,    37,    78,     4,    40,
     6,    34,    35,    36,    10,    48,    12,    25,    26,    27,
    28,   104,   105,   106,   107,    -1,   108,   109,   100,    -1,
    -1,    -1,   101
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
case 22:
#line 77 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
case 23:
#line 80 "parser.y"
{param=1;;
    break;}
case 24:
#line 81 "parser.y"
{param=0;;
    break;}
case 27:
#line 86 "parser.y"
{yyerrok; PrintError(missing_comma);;
    break;}
case 30:
#line 92 "parser.y"
{yyerrok; PrintError(missing_mbracket);;
    break;}
case 36:
#line 105 "parser.y"
{
						con = 0;
						func =0;
						param = 0;
						array = 0;
						type = NONE;
					;
    break;}
case 37:
#line 112 "parser.y"
{yyerrok; PrintError(missing_semi);;
    break;}
case 40:
#line 117 "parser.y"
{yyerrok; PrintError(missing_comma);;
    break;}
case 43:
#line 122 "parser.y"
{yyerrok; PrintError(declaring_err);;
    break;}
case 44:
#line 125 "parser.y"
{func = 0; changeHSTable(); ;
    break;}
case 45:
#line 126 "parser.y"
{array=1; changeHSTable(); ;
    break;}
case 46:
#line 127 "parser.y"
{yyerrok; PrintError(missing_lbracket);;
    break;}
case 64:
#line 159 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
case 65:
#line 160 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
case 67:
#line 164 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
case 68:
#line 165 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
case 104:
#line 221 "parser.y"
{yyerrok; PrintError(missing_lbracket);;
    break;}
case 106:
#line 223 "parser.y"
{yyerrok; PrintError(missing_sbracket);;
    break;}
case 114:
#line 239 "parser.y"
{ func=0; param =0; con=0; array=0; type=NONE; changeHSTable();;
    break;}
case 117:
#line 242 "parser.y"
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
#line 244 "parser.y"


void changeHSTable(){
	current_id->isConst= con;
	current_id->isFunction= func;
	current_id->isParam= param;
	current_id->isArray= array;
	current_id->spec= type;
}