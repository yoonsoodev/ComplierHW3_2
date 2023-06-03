/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

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
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TIDENT = 258,
     TFLOAT = 259,
     TNUMBER = 260,
     TCONST = 261,
     TELSE = 262,
     TIF = 263,
     TINT = 264,
     TRETURN = 265,
     TVOID = 266,
     TWHILE = 267,
     TPLUS = 268,
     TMINUS = 269,
     TSTAR = 270,
     TSLASH = 271,
     TMOD = 272,
     TASSIGN = 273,
     TADDASSIGN = 274,
     TSUBASSIGN = 275,
     TMULASSIGN = 276,
     TDIVASSIGN = 277,
     TMODASSIGN = 278,
     TNOT = 279,
     TOR = 280,
     TAND = 281,
     TEQUAL = 282,
     TNOTEQU = 283,
     TGREATE = 284,
     TLESSE = 285,
     TLESS = 286,
     TGREAT = 287,
     TINC = 288,
     TDEC = 289,
     TLPAREN = 290,
     TRPAREN = 291,
     TCOMMA = 292,
     TLBRACE = 293,
     TRBRACE = 294,
     TLBRACKET = 295,
     TRBRACKET = 296,
     TSEMI = 297,
     TERROR = 298,
     TCARR = 299,
     TCOMMENT = 300,
     TIF_CONDITION_ERROR = 301,
     TIF_ERROR = 302,
     TELSE_CONDITION_ERROR = 303,
     TELSE_ERROR = 304,
     UIF = 305,
     LOWER_THAN_ELSE = 306
   };
#endif
/* Tokens.  */
#define TIDENT 258
#define TFLOAT 259
#define TNUMBER 260
#define TCONST 261
#define TELSE 262
#define TIF 263
#define TINT 264
#define TRETURN 265
#define TVOID 266
#define TWHILE 267
#define TPLUS 268
#define TMINUS 269
#define TSTAR 270
#define TSLASH 271
#define TMOD 272
#define TASSIGN 273
#define TADDASSIGN 274
#define TSUBASSIGN 275
#define TMULASSIGN 276
#define TDIVASSIGN 277
#define TMODASSIGN 278
#define TNOT 279
#define TOR 280
#define TAND 281
#define TEQUAL 282
#define TNOTEQU 283
#define TGREATE 284
#define TLESSE 285
#define TLESS 286
#define TGREAT 287
#define TINC 288
#define TDEC 289
#define TLPAREN 290
#define TRPAREN 291
#define TCOMMA 292
#define TLBRACE 293
#define TRBRACE 294
#define TLBRACKET 295
#define TRBRACKET 296
#define TSEMI 297
#define TERROR 298
#define TCARR 299
#define TCOMMENT 300
#define TIF_CONDITION_ERROR 301
#define TIF_ERROR 302
#define TELSE_CONDITION_ERROR 303
#define TELSE_ERROR 304
#define UIF 305
#define LOWER_THAN_ELSE 306




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

