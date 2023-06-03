
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

#line 1 "parser.y"

#include <stdio.h>
#include <ctype.h>
#include <malloc.h>
#include "glob.h"

/*yacc source for Mini C*/
int con = 0;
int function =0;
int param = 0;
int array = 0;
Types type = NONE;

extern yyerror(char* );
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



#define	YYFINAL		154
#define	YYFLAG		-32768
#define	YYNTBASE	49

#define YYTRANSLATE(x) ((unsigned)(x) <= 303 ? yytranslate[x] : 94)

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
     0,     2,     4,     7,     9,    11,    14,    18,    20,    22,
    25,    27,    29,    31,    33,    35,    37,    41,    43,    44,
    46,    50,    53,    58,    60,    61,    63,    66,    70,    72,
    76,    78,    82,    84,    89,    91,    92,    94,    95,    97,
   100,   103,   105,   107,   109,   111,   113,   116,   118,   119,
   125,   133,   139,   143,   145,   147,   151,   155,   159,   163,
   167,   171,   173,   177,   179,   183,   185,   189,   193,   195,
   199,   203,   207,   211,   213,   217,   221,   223,   227,   231,
   235,   237,   240,   243,   246,   249,   251,   256,   261,   264,
   267,   269,   270,   272,   274,   278,   280,   282
};

static const short yyrhs[] = {    50,
     0,    51,     0,    50,    51,     0,    52,     0,    67,     0,
    53,    64,     0,    54,    59,    60,     0,    55,     0,    56,
     0,    55,    56,     0,    57,     0,    58,     0,     6,     0,
    10,     0,    12,     0,     4,     0,    37,    61,    38,     0,
    62,     0,     0,    63,     0,    62,    39,    63,     0,    54,
    70,     0,    40,    65,    72,    41,     0,    66,     0,     0,
    67,     0,    66,    67,     0,    54,    68,    44,     0,    69,
     0,    68,    39,    69,     0,    70,     0,    70,    14,     5,
     0,     4,     0,     4,    42,    71,    43,     0,     5,     0,
     0,    73,     0,     0,    74,     0,    73,     1,     0,    73,
    74,     0,    64,     0,    75,     0,    77,     0,    78,     0,
    79,     0,    76,    44,     0,    80,     0,     0,     8,    37,
    80,    38,    74,     0,     8,    37,    80,    38,    74,     7,
    74,     0,    13,    37,    80,    38,    74,     0,    11,    76,
    44,     0,    81,     0,    82,     0,    88,    14,    81,     0,
    88,    15,    81,     0,    88,    16,    81,     0,    88,    17,
    81,     0,    88,    18,    81,     0,    88,    19,    81,     0,
    83,     0,    82,    21,    83,     0,    84,     0,    83,    22,
    84,     0,    85,     0,    84,    23,    85,     0,    84,    24,
    85,     0,    86,     0,    85,    25,    86,     0,    85,    27,
    86,     0,    85,    26,    86,     0,    85,    28,    86,     0,
    87,     0,    86,    32,    87,     0,    86,    33,    87,     0,
    88,     0,    87,    34,    88,     0,    87,    35,    88,     0,
    87,    36,    88,     0,    89,     0,    33,    88,     0,    20,
    88,     0,    29,    88,     0,    30,    88,     0,    93,     0,
    89,    42,    80,    43,     0,    89,    37,    90,    38,     0,
    89,    29,     0,    89,    30,     0,    91,     0,     0,    92,
     0,    81,     0,    92,    39,    81,     0,     4,     0,     5,
     0,    37,    80,    38,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    30,    33,    34,    37,    38,    41,    44,    47,    50,    51,
    54,    55,    58,    61,    62,    65,    68,    71,    72,    75,
    76,    79,    82,    85,    86,    89,    90,    93,    96,    97,
   100,   101,   104,   105,   108,   109,   112,   113,   116,   117,
   118,   121,   122,   123,   124,   125,   128,   131,   132,   135,
   136,   139,   141,   143,   145,   146,   147,   148,   149,   150,
   151,   154,   155,   158,   159,   162,   163,   164,   167,   168,
   169,   170,   171,   174,   175,   176,   179,   180,   181,   182,
   185,   186,   187,   188,   189,   192,   193,   194,   195,   196,
   199,   200,   203,   205,   206,   209,   210,   211
};

static const char * const yytname[] = {   "$","error","$undefined.","TEOF","TIDENT",
"TNUMBER","TCONST","TELSE","TIF","TEIF","TINT","TRETURN","TVOID","TWHILE","TASSIGN",
"TADDASSIGN","TSUBASSIGN","TMULASSIGN","TDIVASSIGN","TMODASSIGN","TNOT","TOR",
"TAND","TEQUAL","TNOTEQU","TGREAT","TGREATE","TLESS","TLESSE","TINC","TDEC",
"TERROR","TPLUS","TMINUS","TSTAR","TSLASH","TMOD","TLPAREN","TRPAREN","TCOMMA",
"TLBRACE","TRBRACE","TLBRACKET","TRBRACKET","TSEMI","TCOMMENT","THEX","TOCT",
"LOWER_THAN_ELSE","mini_c","translation_unit","external_dcl","function_def",
"function_header","dcl_spec","dcl_specifiers","dcl_specifier","type_qualifier",
"type_specifier","function_name","formal_param","opt_formal_param","formal_param_list",
"param_dcl","compound_st","opt_dcl_list","declaration_list","declaration","init_dcl_list",
"init_declarator","declarator","opt_number","opt_stat_list","statement_list",
"statement","expression_st","opt_expression","if_st","while_st","return_st",
"expression","assignment_exp","logical_or_exp","logical_and_exp","equality_exp",
"relational_exp","additive_exp","multiplicative_exp","unary_exp","postfix_exp",
"opt_actual_param","actual_param","actual_param_list","primary_exp",""
};
#endif

static const short yyr1[] = {     0,
    49,    50,    50,    51,    51,    52,    53,    54,    55,    55,
    56,    56,    57,    58,    58,    59,    60,    61,    61,    62,
    62,    63,    64,    65,    65,    66,    66,    67,    68,    68,
    69,    69,    70,    70,    71,    71,    72,    72,    73,    73,
    73,    74,    74,    74,    74,    74,    75,    76,    76,    77,
    77,    78,    79,    80,    81,    81,    81,    81,    81,    81,
    81,    82,    82,    83,    83,    84,    84,    84,    85,    85,
    85,    85,    85,    86,    86,    86,    87,    87,    87,    87,
    88,    88,    88,    88,    88,    89,    89,    89,    89,    89,
    90,    90,    91,    92,    92,    93,    93,    93
};

static const short yyr2[] = {     0,
     1,     1,     2,     1,     1,     2,     3,     1,     1,     2,
     1,     1,     1,     1,     1,     1,     3,     1,     0,     1,
     3,     2,     4,     1,     0,     1,     2,     3,     1,     3,
     1,     3,     1,     4,     1,     0,     1,     0,     1,     2,
     2,     1,     1,     1,     1,     1,     2,     1,     0,     5,
     7,     5,     3,     1,     1,     3,     3,     3,     3,     3,
     3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
     3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
     1,     2,     2,     2,     2,     1,     4,     4,     2,     2,
     1,     0,     1,     1,     3,     1,     1,     3
};

static const short yydefact[] = {     0,
    13,    14,    15,     1,     2,     4,     0,     0,     8,     9,
    11,    12,     5,     3,    25,     6,    33,     0,     0,    29,
    31,    10,     0,    38,    24,    26,    36,    19,     7,     0,
    28,     0,    33,    96,    97,     0,    49,     0,     0,     0,
     0,     0,     0,    42,     0,     0,    39,    43,     0,    44,
    45,    46,    48,    54,    55,    62,    64,    66,    69,    74,
    77,    81,    86,    27,    35,     0,     0,     0,    18,    20,
    30,    32,     0,     0,     0,    83,    84,    85,    82,     0,
    23,    40,    41,    47,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    89,    90,    92,     0,    34,    22,    17,
     0,     0,    53,     0,    98,    63,    77,    65,    67,    68,
    70,    72,    71,    73,    75,    76,    78,    79,    80,    56,
    57,    58,    59,    60,    61,    94,     0,    91,    93,     0,
    21,    49,    49,    88,     0,    87,    50,    52,    95,    49,
    51,     0,     0,     0
};

static const short yydefgoto[] = {   152,
     4,     5,     6,     7,     8,     9,    10,    11,    12,    18,
    29,    68,    69,    70,    44,    24,    25,    13,    19,    20,
    21,    66,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
   137,   138,   139,    63
};

static const short yypact[] = {    20,
-32768,-32768,-32768,    20,-32768,-32768,   -29,    10,    20,-32768,
-32768,-32768,-32768,-32768,    20,-32768,   -15,     0,    23,-32768,
    50,-32768,    62,   104,    20,-32768,    74,    20,-32768,    62,
-32768,    75,    40,-32768,-32768,    51,     5,    52,     5,     5,
     5,     5,     5,-32768,    54,    70,-32768,-32768,    57,-32768,
-32768,-32768,-32768,-32768,    81,    83,   -16,    59,     7,    34,
    29,    -1,-32768,-32768,-32768,    63,    62,    78,    79,-32768,
-32768,-32768,     5,    69,     5,-32768,-32768,-32768,-32768,    82,
-32768,-32768,-32768,-32768,     5,     5,     5,     5,     5,     5,
     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
     5,     5,     5,-32768,-32768,     5,     5,-32768,-32768,-32768,
    20,    84,-32768,    85,-32768,    83,-32768,   -16,    59,    59,
     7,     7,     7,     7,    34,    34,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,    87,-32768,    80,    86,
-32768,   127,   127,-32768,     5,-32768,   114,-32768,-32768,   127,
-32768,   126,   128,-32768
};

static const short yypgoto[] = {-32768,
-32768,   123,-32768,-32768,   -13,-32768,   121,-32768,-32768,-32768,
-32768,-32768,-32768,    25,   132,-32768,-32768,    -2,-32768,   112,
    76,-32768,-32768,-32768,   -46,-32768,   108,-32768,-32768,-32768,
   -42,   -82,-32768,    61,    64,   -11,     2,   -21,   -36,-32768,
-32768,-32768,-32768,-32768
};


#define	YYLAST		167


static const short yytable[] = {    83,
    80,    23,    76,    77,    78,    79,    87,    88,    34,    35,
    15,    23,    26,    17,    67,   130,   131,   132,   133,   134,
   135,   -16,    64,   136,    39,     1,    27,   104,   105,     2,
   112,     3,   114,    40,    41,   106,    28,    42,    93,    94,
   107,    43,    98,    99,   100,   101,   102,   103,   117,   117,
   117,   117,   117,   117,   117,   117,   117,   117,   127,   128,
   129,    30,   149,    32,   140,    33,    31,    95,    96,    97,
    82,   125,   126,    34,    35,   119,   120,    36,    65,    72,
    37,    27,    38,    89,    90,    91,    92,    73,    75,    39,
   121,   122,   123,   124,    81,   147,   148,    67,    40,    41,
    84,    85,    42,   151,    86,   108,    43,    34,    35,    15,
   -37,    36,   113,   -49,    37,   110,    38,   111,   145,   115,
   150,   142,   143,    39,   144,   153,    14,   154,   146,    22,
    34,    35,    40,    41,    36,   141,    42,    37,    16,    38,
    43,    71,   109,    15,    74,   116,    39,   -49,     0,   118,
     0,     0,     0,     0,     0,    40,    41,     0,     0,    42,
     0,     0,     0,    43,     0,     0,    15
};

static const short yycheck[] = {    46,
    43,    15,    39,    40,    41,    42,    23,    24,     4,     5,
    40,    25,    15,     4,    28,    98,    99,   100,   101,   102,
   103,    37,    25,   106,    20,     6,    42,    29,    30,    10,
    73,    12,    75,    29,    30,    37,    37,    33,    32,    33,
    42,    37,    14,    15,    16,    17,    18,    19,    85,    86,
    87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
    97,    39,   145,    14,   107,     4,    44,    34,    35,    36,
     1,    93,    94,     4,     5,    87,    88,     8,     5,     5,
    11,    42,    13,    25,    26,    27,    28,    37,    37,    20,
    89,    90,    91,    92,    41,   142,   143,   111,    29,    30,
    44,    21,    33,   150,    22,    43,    37,     4,     5,    40,
    41,     8,    44,    44,    11,    38,    13,    39,    39,    38,
     7,    38,    38,    20,    38,     0,     4,     0,    43,     9,
     4,     5,    29,    30,     8,   111,    33,    11,     7,    13,
    37,    30,    67,    40,    37,    85,    20,    44,    -1,    86,
    -1,    -1,    -1,    -1,    -1,    29,    30,    -1,    -1,    33,
    -1,    -1,    -1,    37,    -1,    -1,    40
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

case 13:
#line 58 "parser.y"
{con = 1;;
    break;}
case 14:
#line 61 "parser.y"
{type=INT;;
    break;}
case 15:
#line 62 "parser.y"
{type = VOID;;
    break;}
case 16:
#line 65 "parser.y"
{function = 1; changeHSTable();;
    break;}
case 18:
#line 71 "parser.y"
{param=1;;
    break;}
case 19:
#line 72 "parser.y"
{param=0;;
    break;}
case 33:
#line 104 "parser.y"
{changeHSTable();;
    break;}
case 34:
#line 105 "parser.y"
{array=1; changeHSTable();;
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
#line 213 "parser.y"

void changeHSTable(){
	current_id->isConst= con;
	current_id->isFunction= function;
	current_id->isParam= param;
	current_id->isArray= array;
	current_id->spec= type;
}