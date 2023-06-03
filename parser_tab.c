
/*  A Bison parser, made from parser.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	TIDENT	258
#define	TNUMBER	259
#define	TCONST	260
#define	TELSE	261
#define	TIF	262
#define	TEIF	263
#define	TINT	264
#define	TRETURN	265
#define	TVOID	266
#define	TWHILE	267
#define	TASSIGN	268
#define	TADDASSIGN	269
#define	TSUBASSIGN	270
#define	TMULASSIGN	271
#define	TDIVASSIGN	272
#define	TMODASSIGN	273
#define	TNOT	274
#define	TOR	275
#define	TAND	276
#define	TEQUAL	277
#define	TNOTEQU	278
#define	TGREAT	279
#define	TGREATE	280
#define	TLESS	281
#define	TLESSE	282
#define	TINC	283
#define	TDEC	284
#define	TERROR	285
#define	TPLUS	286
#define	TMINUS	287
#define	TSTAR	288
#define	TSLASH	289
#define	TMOD	290
#define	TLPAREN	291
#define	TRPAREN	292
#define	TCOMMA	293
#define	TLBRACE	294
#define	TRBRACE	295
#define	TLBRACKET	296
#define	TRBRACKET	297
#define	TSEMI	298
#define	TCOMMENT	299
#define	THEX	300
#define	TOCT	301
#define	TCARR	302
#define	TEOF	303
#define	LOWER_THAN_ELSE	304

#line 1 "parser.y"

#include <stdio.h>
#include <ctype.h>
#include <malloc.h>

/*yacc source for Mini C*/

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
#define	YYNTBASE	52

#define YYTRANSLATE(x) ((unsigned)(x) <= 304 ? yytranslate[x] : 97)

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
     2,     2,    50,     2,    51,     2,     2,     2,     2,     2,
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
    46,    47,    48,    49
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

static const short yyrhs[] = {    53,
     0,    54,     0,    53,    54,     0,    55,     0,    70,     0,
    56,    67,     0,    57,    62,    63,     0,    58,     0,    59,
     0,    58,    59,     0,    60,     0,    61,     0,     5,     0,
     9,     0,    11,     0,     3,     0,    36,    64,    37,     0,
    65,     0,     0,    66,     0,    65,    38,    66,     0,    57,
    73,     0,    50,    68,    75,    51,     0,    69,     0,     0,
    70,     0,    69,    70,     0,    57,    71,    43,     0,    72,
     0,    71,    38,    72,     0,    73,     0,    73,    13,     4,
     0,     3,     0,     3,    41,    74,    42,     0,     4,     0,
     0,    76,     0,     0,    77,     0,    76,     1,     0,    76,
    77,     0,    67,     0,    78,     0,    80,     0,    81,     0,
    82,     0,    79,    43,     0,    83,     0,     0,     7,    36,
    83,    37,    77,     0,     7,    36,    83,    37,    77,     6,
    77,     0,    12,    36,    83,    37,    77,     0,    10,    79,
    43,     0,    84,     0,    85,     0,    91,    13,    84,     0,
    91,    14,    84,     0,    91,    15,    84,     0,    91,    16,
    84,     0,    91,    17,    84,     0,    91,    18,    84,     0,
    86,     0,    85,    20,    86,     0,    87,     0,    86,    21,
    87,     0,    88,     0,    87,    22,    88,     0,    87,    23,
    88,     0,    89,     0,    88,    24,    89,     0,    88,    26,
    89,     0,    88,    25,    89,     0,    88,    27,    89,     0,
    90,     0,    89,    31,    90,     0,    89,    32,    90,     0,
    91,     0,    90,    33,    91,     0,    90,    34,    91,     0,
    90,    35,    91,     0,    92,     0,    32,    91,     0,    19,
    91,     0,    28,    91,     0,    29,    91,     0,    96,     0,
    92,    41,    83,    42,     0,    92,    36,    93,    37,     0,
    92,    28,     0,    92,    29,     0,    94,     0,     0,    95,
     0,    84,     0,    95,    38,    84,     0,     3,     0,     4,
     0,    36,    83,    37,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    20,    23,    24,    27,    28,    31,    34,    37,    40,    41,
    44,    45,    48,    51,    52,    55,    58,    61,    62,    65,
    66,    69,    72,    75,    76,    79,    80,    83,    86,    87,
    90,    91,    94,    95,    98,    99,   102,   103,   106,   107,
   108,   111,   112,   113,   114,   115,   118,   121,   122,   125,
   126,   129,   131,   133,   135,   136,   137,   138,   139,   140,
   141,   144,   145,   148,   149,   152,   153,   154,   157,   158,
   159,   160,   161,   164,   165,   166,   169,   170,   171,   172,
   175,   176,   177,   178,   179,   182,   183,   184,   185,   186,
   189,   190,   193,   195,   196,   199,   200,   201
};

static const char * const yytname[] = {   "$","error","$undefined.","TIDENT",
"TNUMBER","TCONST","TELSE","TIF","TEIF","TINT","TRETURN","TVOID","TWHILE","TASSIGN",
"TADDASSIGN","TSUBASSIGN","TMULASSIGN","TDIVASSIGN","TMODASSIGN","TNOT","TOR",
"TAND","TEQUAL","TNOTEQU","TGREAT","TGREATE","TLESS","TLESSE","TINC","TDEC",
"TERROR","TPLUS","TMINUS","TSTAR","TSLASH","TMOD","TLPAREN","TRPAREN","TCOMMA",
"TLBRACE","TRBRACE","TLBRACKET","TRBRACKET","TSEMI","TCOMMENT","THEX","TOCT",
"TCARR","TEOF","LOWER_THAN_ELSE","'{'","'}'","mini_c","translation_unit","external_dcl",
"function_def","function_header","dcl_spec","dcl_specifiers","dcl_specifier",
"type_qualifier","type_specifier","function_name","formal_param","opt_formal_param",
"formal_param_list","param_dcl","compound_st","opt_dcl_list","declaration_list",
"declaration","init_dcl_list","init_declarator","declarator","opt_number","opt_stat_list",
"statement_list","statement","expression_st","opt_expression","if_st","while_st",
"return_st","expression","assignment_exp","logical_or_exp","logical_and_exp",
"equality_exp","relational_exp","additive_exp","multiplicative_exp","unary_exp",
"postfix_exp","opt_actual_param","actual_param","actual_param_list","primary_exp",
""
};
#endif

static const short yyr1[] = {     0,
    52,    53,    53,    54,    54,    55,    56,    57,    58,    58,
    59,    59,    60,    61,    61,    62,    63,    64,    64,    65,
    65,    66,    67,    68,    68,    69,    69,    70,    71,    71,
    72,    72,    73,    73,    74,    74,    75,    75,    76,    76,
    76,    77,    77,    77,    77,    77,    78,    79,    79,    80,
    80,    81,    82,    83,    84,    84,    84,    84,    84,    84,
    84,    85,    85,    86,    86,    87,    87,    87,    88,    88,
    88,    88,    88,    89,    89,    89,    90,    90,    90,    90,
    91,    91,    91,    91,    91,    92,    92,    92,    92,    92,
    93,    93,    94,    95,    95,    96,    96,    96
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

static const short yypact[] = {    21,
-32768,-32768,-32768,    21,-32768,-32768,   -39,    11,    21,-32768,
-32768,-32768,-32768,-32768,    21,-32768,   -14,     1,    31,-32768,
    49,-32768,    65,    98,    21,-32768,    76,    21,-32768,    65,
-32768,    77,    53,-32768,-32768,    57,     6,    64,     6,     6,
     6,     6,     6,-32768,    39,    63,-32768,-32768,    60,-32768,
-32768,-32768,-32768,-32768,    87,    88,   -15,    52,     8,    54,
    30,     0,-32768,-32768,-32768,    73,    65,    79,    80,-32768,
-32768,-32768,     6,    78,     6,-32768,-32768,-32768,-32768,    82,
-32768,-32768,-32768,-32768,     6,     6,     6,     6,     6,     6,
     6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
     6,     6,     6,-32768,-32768,     6,     6,-32768,-32768,-32768,
    21,    83,-32768,    85,-32768,    88,-32768,   -15,    52,    52,
     8,     8,     8,     8,    54,    54,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,    86,-32768,    91,    90,
-32768,   121,   121,-32768,     6,-32768,   129,-32768,-32768,   121,
-32768,   136,   137,-32768
};

static const short yypgoto[] = {-32768,
-32768,   134,-32768,-32768,   -13,-32768,   130,-32768,-32768,-32768,
-32768,-32768,-32768,    32,   135,-32768,-32768,    -2,-32768,   114,
    84,-32768,-32768,-32768,   -46,-32768,   108,-32768,-32768,-32768,
   -42,   -82,-32768,    61,    66,   -16,    -6,    18,   -36,-32768,
-32768,-32768,-32768,-32768
};


#define	YYLAST		171


static const short yytable[] = {    83,
    80,    23,    76,    77,    78,    79,    87,    88,    34,    35,
    15,    23,    26,    17,    67,   130,   131,   132,   133,   134,
   135,   -16,    64,   136,    39,     1,    27,   104,   105,     2,
   112,     3,   114,    40,    41,   106,    28,    42,    93,    94,
   107,    43,    98,    99,   100,   101,   102,   103,   117,   117,
   117,   117,   117,   117,   117,   117,   117,   117,   127,   128,
   129,    32,   149,    82,   140,    34,    35,    33,    30,    36,
   119,   120,    37,    31,    38,    89,    90,    91,    92,    65,
    72,    39,   121,   122,   123,   124,    95,    96,    97,    81,
    40,    41,    73,    27,    42,   147,   148,    67,    43,    75,
    34,    35,    84,   151,    36,   -49,    85,    37,    86,    38,
   125,   126,    15,   -37,   108,   110,    39,   111,   115,   142,
   113,   143,   144,    34,    35,    40,    41,    36,   145,    42,
    37,   146,    38,    43,   150,   153,   154,    14,    22,    39,
   -49,    16,   141,    71,    74,   116,     0,    15,    40,    41,
   109,   118,    42,     0,     0,     0,    43,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    15
};

static const short yycheck[] = {    46,
    43,    15,    39,    40,    41,    42,    22,    23,     3,     4,
    50,    25,    15,     3,    28,    98,    99,   100,   101,   102,
   103,    36,    25,   106,    19,     5,    41,    28,    29,     9,
    73,    11,    75,    28,    29,    36,    36,    32,    31,    32,
    41,    36,    13,    14,    15,    16,    17,    18,    85,    86,
    87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
    97,    13,   145,     1,   107,     3,     4,     3,    38,     7,
    87,    88,    10,    43,    12,    24,    25,    26,    27,     4,
     4,    19,    89,    90,    91,    92,    33,    34,    35,    51,
    28,    29,    36,    41,    32,   142,   143,   111,    36,    36,
     3,     4,    43,   150,     7,    43,    20,    10,    21,    12,
    93,    94,    50,    51,    42,    37,    19,    38,    37,    37,
    43,    37,    37,     3,     4,    28,    29,     7,    38,    32,
    10,    42,    12,    36,     6,     0,     0,     4,     9,    19,
    43,     7,   111,    30,    37,    85,    -1,    50,    28,    29,
    67,    86,    32,    -1,    -1,    -1,    36,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    50
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
#line 203 "parser.y"

