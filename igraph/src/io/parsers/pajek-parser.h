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
     END = 0,
     NEWLINE = 258,
     NUM = 259,
     ALNUM = 260,
     QSTR = 261,
     NETWORKLINE = 262,
     VERTICESLINE = 263,
     ARCSLINE = 264,
     EDGESLINE = 265,
     ARCSLISTLINE = 266,
     EDGESLISTLINE = 267,
     MATRIXLINE = 268,
     ERROR = 269,
     VP_X_FACT = 270,
     VP_Y_FACT = 271,
     VP_PHI = 272,
     VP_R = 273,
     VP_Q = 274,
     VP_IC = 275,
     VP_BC = 276,
     VP_BW = 277,
     VP_LC = 278,
     VP_LA = 279,
     VP_LR = 280,
     VP_LPHI = 281,
     VP_FOS = 282,
     VP_FONT = 283,
     VP_URL = 284,
     EP_H1 = 285,
     EP_H2 = 286,
     EP_W = 287,
     EP_C = 288,
     EP_P = 289,
     EP_A = 290,
     EP_S = 291,
     EP_A1 = 292,
     EP_K1 = 293,
     EP_A2 = 294,
     EP_K2 = 295,
     EP_AP = 296,
     EP_L = 297,
     EP_LP = 298,
     EP_LR = 299,
     EP_LPHI = 300,
     EP_LC = 301,
     EP_LA = 302,
     EP_FOS = 303,
     EP_FONT = 304
   };
#endif
/* Tokens.  */
#define END 0
#define NEWLINE 258
#define NUM 259
#define ALNUM 260
#define QSTR 261
#define NETWORKLINE 262
#define VERTICESLINE 263
#define ARCSLINE 264
#define EDGESLINE 265
#define ARCSLISTLINE 266
#define EDGESLISTLINE 267
#define MATRIXLINE 268
#define ERROR 269
#define VP_X_FACT 270
#define VP_Y_FACT 271
#define VP_PHI 272
#define VP_R 273
#define VP_Q 274
#define VP_IC 275
#define VP_BC 276
#define VP_BW 277
#define VP_LC 278
#define VP_LA 279
#define VP_LR 280
#define VP_LPHI 281
#define VP_FOS 282
#define VP_FONT 283
#define VP_URL 284
#define EP_H1 285
#define EP_H2 286
#define EP_W 287
#define EP_C 288
#define EP_P 289
#define EP_A 290
#define EP_S 291
#define EP_A1 292
#define EP_K1 293
#define EP_A2 294
#define EP_K2 295
#define EP_AP 296
#define EP_L 297
#define EP_LP 298
#define EP_LR 299
#define EP_LPHI 300
#define EP_LC 301
#define EP_LA 302
#define EP_FOS 303
#define EP_FONT 304




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE

{
  igraph_int_t intnum;
  igraph_real_t    realnum;
  struct {
    char *str;
    size_t len;
  } string;
  char *dynstr;
}
/* Line 1529 of yacc.c.  */

	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


