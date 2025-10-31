/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 1

/* Substitute the variable and function names.  */
#define yyparse igraph_pajek_yyparse
#define yylex   igraph_pajek_yylex
#define yyerror igraph_pajek_yyerror
#define yylval  igraph_pajek_yylval
#define yychar  igraph_pajek_yychar
#define yydebug igraph_pajek_yydebug
#define yynerrs igraph_pajek_yynerrs
#define yylloc igraph_pajek_yylloc

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




/* Copy the first part of user declarations.  */



/*
   igraph library.
   Copyright (C) 2006-2012  Gabor Csardi <csardi.gabor@gmail.com>
   334 Harvard st, Cambridge, MA, 02138 USA

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc.,  51 Franklin Street, Fifth Floor, Boston, MA
   02110-1301 USA

*/

#include "igraph_attributes.h"
#include "igraph_error.h"
#include "igraph_memory.h"
#include "igraph_types.h"

#include "io/pajek-header.h"
#include "io/parsers/pajek-parser.h" /* it must come first because of YYSTYPE */
#include "io/parsers/pajek-lexer.h"
#include "io/parse_utils.h"
#include "internal/hacks.h" /* strdup */

#include <stdio.h>
#include <string.h>
#include <math.h>

int igraph_pajek_yyerror(YYLTYPE* locp,
                         igraph_i_pajek_parsedata_t *context,
                         const char *s);

static igraph_error_t add_string_vertex_attribute(const char *name,
                                               const char *value,
                                               size_t len,
                                               igraph_i_pajek_parsedata_t *context);
static igraph_error_t add_string_edge_attribute(const char *name,
                                             const char *value,
                                             size_t len,
                                             igraph_i_pajek_parsedata_t *context);
static igraph_error_t add_numeric_vertex_attribute(const char *name,
                                                igraph_real_t value,
                                                igraph_i_pajek_parsedata_t *context);
static igraph_error_t add_numeric_edge_attribute(const char *name,
                                              igraph_real_t value,
                                              igraph_i_pajek_parsedata_t *context);
static igraph_error_t add_numeric_attribute(igraph_trie_t *names,
                                         igraph_attribute_record_list_t *attrs,
                                         igraph_int_t count,
                                         const char *attrname,
                                         igraph_real_t default_value,
                                         igraph_int_t vid,
                                         igraph_real_t number);
static igraph_error_t add_string_attribute(igraph_trie_t *names,
                                        igraph_attribute_record_list_t *attrs,
                                        igraph_int_t count,
                                        const char *attrname,
                                        const char *default_value,
                                        igraph_int_t vid,
                                        const char *str,
                                        igraph_int_t str_len);

static igraph_error_t add_bipartite_type(igraph_i_pajek_parsedata_t *context);
static igraph_error_t check_bipartite(igraph_i_pajek_parsedata_t *context);

static igraph_error_t make_dynstr(const char *src, size_t len, char **res);
static igraph_bool_t is_standard_vattr(const char *attrname);
static igraph_bool_t is_standard_eattr(const char *attrname);
static igraph_error_t deconflict_attrname(char **attrname);
static igraph_real_t get_default_value_for_numeric_vattr(const char *attrname);
static igraph_real_t get_default_value_for_numeric_eattr(const char *attrname);
static const char* get_default_value_for_string_vattr(const char *attrname);
static const char* get_default_value_for_string_eattr(const char *attrname);

#define scanner context->scanner



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

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
/* Line 193 of yacc.c.  */

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


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */


#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   215

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNRULES -- Number of states.  */
#define YYNSTATES  178

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,     9,    12,    13,    15,    19,    22,
      26,    27,    30,    33,    34,    42,    44,    46,    47,    50,
      54,    55,    57,    58,    61,    63,    66,    69,    72,    75,
      78,    81,    84,    87,    90,    93,    96,    99,   102,   105,
     108,   111,   112,   115,   118,   121,   124,   127,   131,   136,
     137,   140,   141,   148,   152,   157,   158,   161,   162,   169,
     170,   172,   173,   176,   178,   181,   184,   187,   190,   193,
     196,   199,   202,   205,   208,   211,   214,   217,   220,   223,
     226,   229,   232,   235,   238,   241,   245,   246,   249,   253,
     254,   257,   259,   261,   265,   266,   269,   273,   274,   277,
     279,   281,   285,   287,   288,   291,   294,   295,   298,   300,
     302,   304,   306,   308,   310,   312
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      51,     0,    -1,    53,    54,    66,    52,    -1,    -1,     3,
      52,    -1,    -1,     7,    -1,    55,     3,    56,    -1,     8,
      97,    -1,     8,    97,    97,    -1,    -1,    56,    57,    -1,
      59,     3,    -1,    -1,    59,    58,    60,    61,    62,    63,
       3,    -1,    97,    -1,   101,    -1,    -1,    98,    98,    -1,
      98,    98,    98,    -1,    -1,   101,    -1,    -1,    63,    64,
      -1,    65,    -1,    15,    98,    -1,    16,    98,    -1,    25,
      98,    -1,    26,    98,    -1,    22,    98,    -1,    27,    98,
      -1,    17,    98,    -1,    18,    98,    -1,    19,    98,    -1,
      24,    98,    -1,    28,   100,    -1,    29,   100,    -1,    20,
     100,    -1,    21,   100,    -1,    23,   100,    -1,    99,   100,
      -1,    -1,    66,    67,    -1,    66,    71,    -1,    66,    79,
      -1,    66,    85,    -1,    66,    91,    -1,     9,     3,    68,
      -1,     9,    98,     3,    68,    -1,    -1,    68,    69,    -1,
      -1,    59,    59,    70,    75,    76,     3,    -1,    10,     3,
      72,    -1,    10,    98,     3,    72,    -1,    -1,    72,    73,
      -1,    -1,    59,    59,    74,    75,    76,     3,    -1,    -1,
      98,    -1,    -1,    76,    77,    -1,    78,    -1,    36,    98,
      -1,    32,    98,    -1,    30,    98,    -1,    31,    98,    -1,
      37,    98,    -1,    39,    98,    -1,    38,    98,    -1,    40,
      98,    -1,    41,    98,    -1,    43,    98,    -1,    44,    98,
      -1,    45,    98,    -1,    47,    98,    -1,    48,    98,    -1,
      35,   100,    -1,    34,   100,    -1,    42,   100,    -1,    46,
     100,    -1,    33,   100,    -1,    49,   100,    -1,    99,   100,
      -1,    11,     3,    80,    -1,    -1,    80,    81,    -1,    83,
      82,     3,    -1,    -1,    82,    84,    -1,    59,    -1,    59,
      -1,    12,     3,    86,    -1,    -1,    86,    87,    -1,    89,
      88,     3,    -1,    -1,    88,    90,    -1,    59,    -1,    59,
      -1,    92,     3,    93,    -1,    13,    -1,    -1,    93,    94,
      -1,    95,     3,    -1,    -1,    96,    95,    -1,    98,    -1,
       4,    -1,     4,    -1,   101,    -1,   101,    -1,     5,    -1,
       4,    -1,     6,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   194,   194,   205,   205,   207,   207,   209,   211,   222,
     241,   241,   243,   244,   244,   254,   273,   277,   278,   282,
     288,   288,   292,   292,   295,   296,   299,   302,   305,   308,
     311,   314,   317,   320,   323,   328,   331,   334,   337,   340,
     343,   358,   358,   358,   358,   358,   358,   360,   361,   363,
     363,   365,   365,   370,   371,   373,   373,   375,   375,   380,
     380,   384,   384,   387,   388,   391,   394,   397,   400,   403,
     406,   409,   412,   415,   418,   421,   424,   427,   432,   435,
     438,   441,   444,   447,   450,   465,   467,   467,   469,   471,
     471,   473,   475,   480,   482,   482,   484,   486,   486,   488,
     490,   497,   499,   504,   504,   506,   508,   508,   510,   530,
     538,   546,   550,   552,   554,   556
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "\"end of line\"",
  "\"number\"", "\"word\"", "\"quoted string\"", "\"*Network line\"",
  "\"*Vertices line\"", "\"*Arcs line\"", "\"*Edges line\"",
  "\"*Arcslist line\"", "\"*Edgeslist line\"", "\"*Matrix line\"", "ERROR",
  "VP_X_FACT", "VP_Y_FACT", "VP_PHI", "VP_R", "VP_Q", "VP_IC", "VP_BC",
  "VP_BW", "VP_LC", "VP_LA", "VP_LR", "VP_LPHI", "VP_FOS", "VP_FONT",
  "VP_URL", "EP_H1", "EP_H2", "EP_W", "EP_C", "EP_P", "EP_A", "EP_S",
  "EP_A1", "EP_K1", "EP_A2", "EP_K2", "EP_AP", "EP_L", "EP_LP", "EP_LR",
  "EP_LPHI", "EP_LC", "EP_LA", "EP_FOS", "EP_FONT", "$accept", "input",
  "final_newlines", "nethead", "vertices", "verticeshead", "vertdefs",
  "vertexline", "@1", "vertex", "vertexid", "vertexcoords", "shape",
  "vertparams", "vertparam", "vpword", "edgeblock", "arcs", "arcsdefs",
  "arcsline", "@2", "edges", "edgesdefs", "edgesline", "@3", "weight",
  "edgeparams", "edgeparam", "epword", "arcslist", "arcslistlines",
  "arclistline", "arctolist", "arclistfrom", "arclistto", "edgeslist",
  "edgelistlines", "edgelistline", "edgetolist", "edgelistfrom",
  "edgelistto", "adjmatrix", "matrixline", "adjmatrixlines",
  "adjmatrixline", "adjmatrixnumbers", "adjmatrixentry", "integer",
  "number", "parname", "parstrval", "word", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    54,    55,    55,
      56,    56,    57,    58,    57,    59,    60,    61,    61,    61,
      62,    62,    63,    63,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    65,    65,    65,    65,    65,
      65,    66,    66,    66,    66,    66,    66,    67,    67,    68,
      68,    70,    69,    71,    71,    72,    72,    74,    73,    75,
      75,    76,    76,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    78,    78,
      78,    78,    78,    78,    78,    79,    80,    80,    81,    82,
      82,    83,    84,    85,    86,    86,    87,    88,    88,    89,
      90,    91,    92,    93,    93,    94,    95,    95,    96,    97,
      98,    99,   100,   101,   101,   101
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     2,     0,     1,     3,     2,     3,
       0,     2,     2,     0,     7,     1,     1,     0,     2,     3,
       0,     1,     0,     2,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     0,     2,     2,     2,     2,     2,     3,     4,     0,
       2,     0,     6,     3,     4,     0,     2,     0,     6,     0,
       1,     0,     2,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     0,     2,     3,     0,
       2,     1,     1,     3,     0,     2,     3,     0,     2,     1,
       1,     3,     1,     0,     2,     2,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     6,     0,     0,     1,     0,    41,     0,   109,     8,
       3,    10,     9,     3,     0,     0,     0,     0,   102,     2,
      42,    43,    44,    45,    46,     0,     7,     4,    49,   110,
       0,    55,     0,    86,    94,   103,    11,    13,    15,    47,
      49,    53,    55,    85,    93,   101,    12,     0,     0,    50,
      48,     0,    56,    54,    91,    87,    89,    99,    95,    97,
     104,     0,   106,   108,   114,   113,   115,    17,    16,    51,
      57,     0,     0,   105,   107,    20,     0,    59,    59,    88,
      92,    90,    96,   100,    98,    22,    21,    18,    61,    60,
      61,     0,    19,     0,     0,    14,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    23,    24,     0,   111,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    62,    63,     0,    58,
      25,    26,    31,    32,    33,    37,   112,    38,    29,    39,
      34,    27,    28,    30,    35,    36,    40,    66,    67,    65,
      82,    79,    78,    64,    68,    70,    69,    71,    72,    80,
      73,    74,    75,    81,    76,    77,    83,    84
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    19,     3,     6,     7,    26,    36,    47,    48,
      67,    75,    85,    91,   111,   112,    10,    20,    39,    49,
      77,    21,    41,    52,    78,    88,    93,   136,   137,    22,
      43,    55,    71,    56,    81,    23,    44,    58,    72,    59,
      84,    24,    25,    45,    60,    61,    62,    38,    63,   138,
     145,   146
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -95
static const yytype_int16 yypact[] =
{
       2,   -95,    20,     6,   -95,    18,   -95,    26,   -95,    18,
      47,   -95,   -95,    29,     1,    14,    34,    39,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,    40,    18,   -95,   -95,   -95,
      42,   -95,    44,   -95,   -95,   -95,   -95,    51,   -95,    18,
     -95,    18,   -95,    18,    18,    57,   -95,     7,    18,   -95,
      18,    18,   -95,    18,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,    52,    57,   -95,   -95,   -95,   -95,    57,   -95,   -95,
     -95,    32,    36,   -95,   -95,     7,    57,    57,    57,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,    57,   -95,   -95,
     -95,   186,   -95,    92,   139,   -95,    57,    57,    57,    57,
      57,     7,     7,    57,     7,    57,    57,    57,    57,     7,
       7,   -95,   -95,     7,   -95,   -95,    57,    57,    57,     7,
       7,     7,    57,    57,    57,    57,    57,    57,     7,    57,
      57,    57,     7,    57,    57,     7,   -95,   -95,     7,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -95,   -95,    53,   -95,   -95,   -95,   -95,   -95,   -95,   -20,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,    25,   -95,
     -95,   -95,    27,   -95,   -95,   -11,   -22,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,     8,   -95,    -2,   -14,   -19,
     -94,   -45
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      30,    32,    68,     9,    28,    29,    37,    12,   147,     1,
     149,    64,    65,    66,     5,   154,   155,    31,    29,   156,
       4,    51,     8,    54,    57,   160,   161,   162,    69,    11,
      86,    70,    13,    51,   169,    79,     8,    33,   173,    82,
       8,   176,    34,    35,   177,    40,   114,    42,   114,   114,
      13,    80,    83,    76,    46,    73,    14,    15,    16,    17,
      18,    29,    87,    89,    89,    50,    27,    90,    94,    53,
      74,     0,   113,    92,     0,     0,     0,     0,     0,     0,
       0,     0,   140,   141,   142,   143,   144,     0,     0,   148,
       0,   150,   151,   152,   153,   115,    64,    65,    66,     0,
       0,     0,   157,   158,   159,     0,     0,     0,   163,   164,
     165,   166,   167,   168,     0,   170,   171,   172,     0,   174,
     175,     0,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   139,    64,    65,    66,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,    95,
      64,    65,    66,     0,     0,     0,     0,     0,     0,     0,
       0,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110
};

static const yytype_int16 yycheck[] =
{
      14,    15,    47,     5,     3,     4,    26,     9,   102,     7,
     104,     4,     5,     6,     8,   109,   110,     3,     4,   113,
       0,    41,     4,    43,    44,   119,   120,   121,    48,     3,
      75,    51,     3,    53,   128,     3,     4,     3,   132,     3,
       4,   135,     3,     3,   138,     3,    91,     3,    93,    94,
       3,    71,    72,    67,     3,     3,     9,    10,    11,    12,
      13,     4,    76,    77,    78,    40,    13,    78,    90,    42,
      62,    -1,    91,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,    -1,    -1,   103,
      -1,   105,   106,   107,   108,     3,     4,     5,     6,    -1,
      -1,    -1,   116,   117,   118,    -1,    -1,    -1,   122,   123,
     124,   125,   126,   127,    -1,   129,   130,   131,    -1,   133,
     134,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    51,    53,     0,     8,    54,    55,     4,    97,
      66,     3,    97,     3,     9,    10,    11,    12,    13,    52,
      67,    71,    79,    85,    91,    92,    56,    52,     3,     4,
      98,     3,    98,     3,     3,     3,    57,    59,    97,    68,
       3,    72,     3,    80,    86,    93,     3,    58,    59,    69,
      68,    59,    73,    72,    59,    81,    83,    59,    87,    89,
      94,    95,    96,    98,     4,     5,     6,    60,   101,    59,
      59,    82,    88,     3,    95,    61,    98,    70,    74,     3,
      59,    84,     3,    59,    90,    62,   101,    98,    75,    98,
      75,    63,    98,    76,    76,     3,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    64,    65,    99,   101,     3,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    77,    78,    99,     3,
      98,    98,    98,    98,    98,   100,   101,   100,    98,   100,
      98,    98,    98,    98,   100,   100,   100,    98,    98,    98,
     100,   100,   100,    98,    98,    98,    98,    98,    98,   100,
      98,    98,    98,   100,    98,    98,   100,   100
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (&yylloc, context, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc, scanner)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location, context); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, igraph_i_pajek_parsedata_t* context)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, context)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    igraph_i_pajek_parsedata_t* context;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
  YYUSE (context);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, igraph_i_pajek_parsedata_t* context)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp, context)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    igraph_i_pajek_parsedata_t* context;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, context);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, igraph_i_pajek_parsedata_t* context)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule, context)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
    igraph_i_pajek_parsedata_t* context;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       , context);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule, context); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, igraph_i_pajek_parsedata_t* context)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp, context)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
    igraph_i_pajek_parsedata_t* context;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (context);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {
      case 99: /* "parname" */

	{ free((yyvaluep->dynstr)); };

	break;

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (igraph_i_pajek_parsedata_t* context);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (igraph_i_pajek_parsedata_t* context)
#else
int
yyparse (context)
    igraph_i_pajek_parsedata_t* context;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;
#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
	YYSTACK_RELOCATE (yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

    {
  if (context->vcount2 > 0) { check_bipartite(context); }
  if (! context->eof) {
    /* In Pajek files, an empty line after *Vertices signifies the end of the network data.
     * If there is more data after one or more empty lines, we warn the user, as this
     * may indicate file corruption, for example a stray empty lines before *Edges. */
    IGRAPH_WARNINGF("Empty line encountered, ignoring rest of file after line %d.", (yylsp[(4) - (4)]).first_line);
  }
  YYACCEPT; /* stop parsing even if there is more data in the file. */
 ;}
    break;

  case 8:

    {
  context->vcount=(yyvsp[(2) - (2)].intnum);
  context->vcount2=0;
  if (context->vcount < 0) {
    IGRAPH_YY_ERRORF("Invalid vertex count in Pajek file (%" IGRAPH_PRId ").", IGRAPH_EINVAL, context->vcount);
  }
  if (context->vcount > IGRAPH_PAJEK_MAX_VERTEX_COUNT) {
    IGRAPH_YY_ERRORF("Vertex count too large in Pajek file (%" IGRAPH_PRId ").", IGRAPH_EINVAL, context->vcount);
  }
  IGRAPH_YY_CHECK(igraph_bitset_resize(context->seen, context->vcount));
            ;}
    break;

  case 9:

    {
  context->vcount=(yyvsp[(2) - (3)].intnum);
  context->vcount2=(yyvsp[(3) - (3)].intnum);
  if (context->vcount < 0) {
    IGRAPH_YY_ERRORF("Invalid vertex count in Pajek file (%" IGRAPH_PRId ").", IGRAPH_EINVAL, context->vcount);
  }
  if (context->vcount > IGRAPH_PAJEK_MAX_VERTEX_COUNT) {
    IGRAPH_YY_ERRORF("Vertex count too large in Pajek file (%" IGRAPH_PRId ").", IGRAPH_EINVAL, context->vcount);
  }
  if (context->vcount2 < 0) {
    IGRAPH_YY_ERRORF("Invalid two-mode vertex count in Pajek file (%" IGRAPH_PRId ").", IGRAPH_EINVAL, context->vcount2);
  }
  if (context->vcount2 > IGRAPH_PAJEK_MAX_VERTEX_COUNT) {
    IGRAPH_YY_ERRORF("2-mode vertex count too large in Pajek file (%" IGRAPH_PRId ").", IGRAPH_EINVAL, context->vcount2);
  }
  IGRAPH_YY_CHECK(add_bipartite_type(context));
  IGRAPH_YY_CHECK(igraph_bitset_resize(context->seen, context->vcount));
;}
    break;

  case 13:

    { context->actvertex=(yyvsp[(1) - (1)].intnum); ;}
    break;

  case 14:

    {
              igraph_int_t v = (yyvsp[(1) - (7)].intnum)-1; /* zero-based vertex ID */
              if (IGRAPH_BIT_TEST(*context->seen, v)) {
                IGRAPH_WARNINGF("Vertex ID %" IGRAPH_PRId " appears twice in Pajek file. Duplicate attributes will be overwritten.", v+1);
              } else {
                IGRAPH_BIT_SET(*context->seen, v);
              }
            ;}
    break;

  case 15:

    {
  igraph_int_t v = (yyvsp[(1) - (1)].intnum);
  /* Per feedback from Pajek's authors, negative signs should be ignored for vertex IDs.
   * See https://nascol.discourse.group/t/pajek-arcslist-edgelist-format/44/2
   * This applies to all of *Edges, *Arcs, *Edgeslist, *Arcslist and *Vertices section.
   * IGRAPH_INTEGER_MIN cannot be negated on typical platforms so we keep it as-is.
   */
  if (v < 0 && v > IGRAPH_INTEGER_MIN) {
    v = -v;
  }
  if (v < 1 || v > context->vcount) {
      IGRAPH_YY_ERRORF(
                  "Invalid vertex ID (%" IGRAPH_PRId ") in Pajek file. "
                  "The number of vertices is %" IGRAPH_PRId ".",
                  IGRAPH_EINVAL, v, context->vcount);
  }
  (yyval.intnum) = v;
;}
    break;

  case 16:

    {
  IGRAPH_YY_CHECK(add_string_vertex_attribute("name", (yyvsp[(1) - (1)].string).str, (yyvsp[(1) - (1)].string).len, context));
;}
    break;

  case 18:

    {
  IGRAPH_YY_CHECK(add_numeric_vertex_attribute("x", (yyvsp[(1) - (2)].realnum), context));
  IGRAPH_YY_CHECK(add_numeric_vertex_attribute("y", (yyvsp[(2) - (2)].realnum), context));
            ;}
    break;

  case 19:

    {
  IGRAPH_YY_CHECK(add_numeric_vertex_attribute("x", (yyvsp[(1) - (3)].realnum), context));
  IGRAPH_YY_CHECK(add_numeric_vertex_attribute("y", (yyvsp[(2) - (3)].realnum), context));
  IGRAPH_YY_CHECK(add_numeric_vertex_attribute("z", (yyvsp[(3) - (3)].realnum), context));
            ;}
    break;

  case 21:

    {
  IGRAPH_YY_CHECK(add_string_vertex_attribute("shape", (yyvsp[(1) - (1)].string).str, (yyvsp[(1) - (1)].string).len, context));
;}
    break;

  case 25:

    {
         IGRAPH_YY_CHECK(add_numeric_vertex_attribute("xfact", (yyvsp[(2) - (2)].realnum), context));
       ;}
    break;

  case 26:

    {
         IGRAPH_YY_CHECK(add_numeric_vertex_attribute("yfact", (yyvsp[(2) - (2)].realnum), context));
       ;}
    break;

  case 27:

    {
         IGRAPH_YY_CHECK(add_numeric_vertex_attribute("labeldist", (yyvsp[(2) - (2)].realnum), context));
     ;}
    break;

  case 28:

    {
         IGRAPH_YY_CHECK(add_numeric_vertex_attribute("labeldegree2", (yyvsp[(2) - (2)].realnum), context));
     ;}
    break;

  case 29:

    {
         IGRAPH_YY_CHECK(add_numeric_vertex_attribute("framewidth", (yyvsp[(2) - (2)].realnum), context));
     ;}
    break;

  case 30:

    {
         IGRAPH_YY_CHECK(add_numeric_vertex_attribute("fontsize", (yyvsp[(2) - (2)].realnum), context));
     ;}
    break;

  case 31:

    {
         IGRAPH_YY_CHECK(add_numeric_vertex_attribute("rotation", (yyvsp[(2) - (2)].realnum), context));
     ;}
    break;

  case 32:

    {
         IGRAPH_YY_CHECK(add_numeric_vertex_attribute("radius", (yyvsp[(2) - (2)].realnum), context));
     ;}
    break;

  case 33:

    {
         IGRAPH_YY_CHECK(add_numeric_vertex_attribute("diamondratio", (yyvsp[(2) - (2)].realnum), context));
     ;}
    break;

  case 34:

    {
         IGRAPH_YY_CHECK(add_numeric_vertex_attribute("labeldegree", (yyvsp[(2) - (2)].realnum), context));
     ;}
    break;

  case 35:

    {
         IGRAPH_YY_CHECK(add_string_vertex_attribute("font", (yyvsp[(2) - (2)].string).str, (yyvsp[(2) - (2)].string).len, context));
     ;}
    break;

  case 36:

    {
         IGRAPH_YY_CHECK(add_string_vertex_attribute("url", (yyvsp[(2) - (2)].string).str, (yyvsp[(2) - (2)].string).len, context));
     ;}
    break;

  case 37:

    {
         IGRAPH_YY_CHECK(add_string_vertex_attribute("color", (yyvsp[(2) - (2)].string).str, (yyvsp[(2) - (2)].string).len, context));
     ;}
    break;

  case 38:

    {
         IGRAPH_YY_CHECK(add_string_vertex_attribute("framecolor", (yyvsp[(2) - (2)].string).str, (yyvsp[(2) - (2)].string).len, context));
     ;}
    break;

  case 39:

    {
         IGRAPH_YY_CHECK(add_string_vertex_attribute("labelcolor", (yyvsp[(2) - (2)].string).str, (yyvsp[(2) - (2)].string).len, context));
     ;}
    break;

  case 40:

    {
         IGRAPH_FINALLY(igraph_free, (yyvsp[(1) - (2)].dynstr));
         if (is_standard_vattr((yyvsp[(1) - (2)].dynstr))) {
          IGRAPH_YY_CHECK(deconflict_attrname(&(yyvsp[(1) - (2)].dynstr)));
          /* update address on finally stack */
          IGRAPH_FINALLY_CLEAN(1);
          IGRAPH_FINALLY(igraph_free, (yyvsp[(1) - (2)].dynstr));
         }
         IGRAPH_YY_CHECK(add_string_vertex_attribute(
           (yyvsp[(1) - (2)].dynstr), (yyvsp[(2) - (2)].string).str, (yyvsp[(2) - (2)].string).len, context));
         IGRAPH_FREE((yyvsp[(1) - (2)].dynstr));
         IGRAPH_FINALLY_CLEAN(1);
     ;}
    break;

  case 47:

    { context->directed=true; ;}
    break;

  case 48:

    { context->directed=true; ;}
    break;

  case 51:

    { context->actedge++; ;}
    break;

  case 52:

    {
  IGRAPH_YY_CHECK(igraph_vector_int_push_back(context->vector, (yyvsp[(1) - (6)].intnum)-1));
  IGRAPH_YY_CHECK(igraph_vector_int_push_back(context->vector, (yyvsp[(2) - (6)].intnum)-1)); ;}
    break;

  case 53:

    { context->directed=0; ;}
    break;

  case 54:

    { context->directed=0; ;}
    break;

  case 57:

    { context->actedge++; ;}
    break;

  case 58:

    {
  IGRAPH_YY_CHECK(igraph_vector_int_push_back(context->vector, (yyvsp[(1) - (6)].intnum)-1));
  IGRAPH_YY_CHECK(igraph_vector_int_push_back(context->vector, (yyvsp[(2) - (6)].intnum)-1)); ;}
    break;

  case 60:

    {
  IGRAPH_YY_CHECK(add_numeric_edge_attribute("weight", (yyvsp[(1) - (1)].realnum), context));
;}
    break;

  case 64:

    {
       IGRAPH_YY_CHECK(add_numeric_edge_attribute("arrowsize", (yyvsp[(2) - (2)].realnum), context));
   ;}
    break;

  case 65:

    {
       IGRAPH_YY_CHECK(add_numeric_edge_attribute("edgewidth", (yyvsp[(2) - (2)].realnum), context));
   ;}
    break;

  case 66:

    {
       IGRAPH_YY_CHECK(add_numeric_edge_attribute("hook1", (yyvsp[(2) - (2)].realnum), context));
   ;}
    break;

  case 67:

    {
       IGRAPH_YY_CHECK(add_numeric_edge_attribute("hook2", (yyvsp[(2) - (2)].realnum), context));
   ;}
    break;

  case 68:

    {
       IGRAPH_YY_CHECK(add_numeric_edge_attribute("angle1", (yyvsp[(2) - (2)].realnum), context));
   ;}
    break;

  case 69:

    {
       IGRAPH_YY_CHECK(add_numeric_edge_attribute("angle2", (yyvsp[(2) - (2)].realnum), context));
   ;}
    break;

  case 70:

    {
       IGRAPH_YY_CHECK(add_numeric_edge_attribute("velocity1", (yyvsp[(2) - (2)].realnum), context));
   ;}
    break;

  case 71:

    {
       IGRAPH_YY_CHECK(add_numeric_edge_attribute("velocity2", (yyvsp[(2) - (2)].realnum), context));
   ;}
    break;

  case 72:

    {
       IGRAPH_YY_CHECK(add_numeric_edge_attribute("arrowpos", (yyvsp[(2) - (2)].realnum), context));
   ;}
    break;

  case 73:

    {
       IGRAPH_YY_CHECK(add_numeric_edge_attribute("labelpos", (yyvsp[(2) - (2)].realnum), context));
   ;}
    break;

  case 74:

    {
       IGRAPH_YY_CHECK(add_numeric_edge_attribute("labelangle", (yyvsp[(2) - (2)].realnum), context));
   ;}
    break;

  case 75:

    {
       IGRAPH_YY_CHECK(add_numeric_edge_attribute("labelangle2", (yyvsp[(2) - (2)].realnum), context));
   ;}
    break;

  case 76:

    {
       IGRAPH_YY_CHECK(add_numeric_edge_attribute("labeldegree", (yyvsp[(2) - (2)].realnum), context));
   ;}
    break;

  case 77:

    {
       IGRAPH_YY_CHECK(add_numeric_edge_attribute("fontsize", (yyvsp[(2) - (2)].realnum), context));
   ;}
    break;

  case 78:

    {
      IGRAPH_YY_CHECK(add_string_edge_attribute("arrowtype", (yyvsp[(2) - (2)].string).str, (yyvsp[(2) - (2)].string).len, context));
    ;}
    break;

  case 79:

    {
      IGRAPH_YY_CHECK(add_string_edge_attribute("linepattern", (yyvsp[(2) - (2)].string).str, (yyvsp[(2) - (2)].string).len, context));
    ;}
    break;

  case 80:

    {
      IGRAPH_YY_CHECK(add_string_edge_attribute("label", (yyvsp[(2) - (2)].string).str, (yyvsp[(2) - (2)].string).len, context));
    ;}
    break;

  case 81:

    {
      IGRAPH_YY_CHECK(add_string_edge_attribute("labelcolor", (yyvsp[(2) - (2)].string).str, (yyvsp[(2) - (2)].string).len, context));
    ;}
    break;

  case 82:

    {
      IGRAPH_YY_CHECK(add_string_edge_attribute("color", (yyvsp[(2) - (2)].string).str, (yyvsp[(2) - (2)].string).len, context));
    ;}
    break;

  case 83:

    {
      IGRAPH_YY_CHECK(add_string_edge_attribute("font", (yyvsp[(2) - (2)].string).str, (yyvsp[(2) - (2)].string).len, context));
    ;}
    break;

  case 84:

    {
        IGRAPH_FINALLY(igraph_free, (yyvsp[(1) - (2)].dynstr));
        if (is_standard_eattr((yyvsp[(1) - (2)].dynstr))) {
          IGRAPH_YY_CHECK(deconflict_attrname(&(yyvsp[(1) - (2)].dynstr)));
          /* update address on finally stack */
          IGRAPH_FINALLY_CLEAN(1);
          IGRAPH_FINALLY(igraph_free, (yyvsp[(1) - (2)].dynstr));
        }
        IGRAPH_YY_CHECK(add_string_edge_attribute(
           (yyvsp[(1) - (2)].dynstr), (yyvsp[(2) - (2)].string).str, (yyvsp[(2) - (2)].string).len, context));
        IGRAPH_FREE((yyvsp[(1) - (2)].dynstr));
        IGRAPH_FINALLY_CLEAN(1);
     ;}
    break;

  case 85:

    { context->directed=true; ;}
    break;

  case 91:

    { context->actfrom=(yyvsp[(1) - (1)].intnum)-1; ;}
    break;

  case 92:

    {
  IGRAPH_YY_CHECK(igraph_vector_int_push_back(context->vector, context->actfrom));
  IGRAPH_YY_CHECK(igraph_vector_int_push_back(context->vector, (yyvsp[(1) - (1)].intnum)-1));
;}
    break;

  case 93:

    { context->directed=0; ;}
    break;

  case 99:

    { context->actfrom=(yyvsp[(1) - (1)].intnum)-1; ;}
    break;

  case 100:

    {
  IGRAPH_YY_CHECK(igraph_vector_int_push_back(context->vector, context->actfrom));
  IGRAPH_YY_CHECK(igraph_vector_int_push_back(context->vector, (yyvsp[(1) - (1)].intnum)-1));
;}
    break;

  case 102:

    { context->actfrom=0;
                         context->actto=0;
                         context->directed=(context->vcount2==0);
                       ;}
    break;

  case 105:

    { context->actfrom++; context->actto=0; ;}
    break;

  case 108:

    {
  if ((yyvsp[(1) - (1)].realnum) != 0) {
    if (context->vcount2==0) {
      context->actedge++;
      IGRAPH_YY_CHECK(add_numeric_edge_attribute("weight", (yyvsp[(1) - (1)].realnum), context));
      IGRAPH_YY_CHECK(igraph_vector_int_push_back(context->vector, context->actfrom));
      IGRAPH_YY_CHECK(igraph_vector_int_push_back(context->vector, context->actto));
    } else if (context->vcount2 + context->actto < context->vcount) {
      context->actedge++;
      IGRAPH_YY_CHECK(add_numeric_edge_attribute("weight", (yyvsp[(1) - (1)].realnum), context));
      IGRAPH_YY_CHECK(igraph_vector_int_push_back(context->vector, context->actfrom));
      IGRAPH_YY_CHECK(igraph_vector_int_push_back(context->vector,
                              context->vcount2+context->actto));
    }
  }
  context->actto++;
;}
    break;

  case 109:

    {
  igraph_int_t val;
  IGRAPH_YY_CHECK(igraph_i_parse_integer(igraph_pajek_yyget_text(scanner),
                                         igraph_pajek_yyget_leng(scanner),
                                         &val));
  (yyval.intnum)=val;
;}
    break;

  case 110:

    {
  igraph_real_t val;
  IGRAPH_YY_CHECK(igraph_i_parse_real(igraph_pajek_yyget_text(scanner),
                                      igraph_pajek_yyget_leng(scanner),
                                      &val));
  (yyval.realnum)=val;
;}
    break;

  case 111:

    {
  IGRAPH_YY_CHECK(make_dynstr((yyvsp[(1) - (1)].string).str, (yyvsp[(1) - (1)].string).len, &(yyval.dynstr)));
;}
    break;

  case 112:

    { (yyval.string)=(yyvsp[(1) - (1)].string); ;}
    break;

  case 113:

    { (yyval.string).str=igraph_pajek_yyget_text(scanner);
              (yyval.string).len=igraph_pajek_yyget_leng(scanner); ;}
    break;

  case 114:

    { (yyval.string).str=igraph_pajek_yyget_text(scanner);
              (yyval.string).len=igraph_pajek_yyget_leng(scanner); ;}
    break;

  case 115:

    { (yyval.string).str=igraph_pajek_yyget_text(scanner)+1;
               (yyval.string).len=igraph_pajek_yyget_leng(scanner)-2; ;}
    break;


/* Line 1267 of yacc.c.  */

      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, context, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (&yylloc, context, yymsg);
	  }
	else
	  {
	    yyerror (&yylloc, context, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, &yylloc, context);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp, context);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, context, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc, context);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp, context);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}





int igraph_pajek_yyerror(YYLTYPE* locp,
                         igraph_i_pajek_parsedata_t *context,
                         const char *s) {
  snprintf(context->errmsg, sizeof(context->errmsg)/sizeof(char)-1,
           "Parse error in Pajek file, line %i (%s)",
           locp->first_line, s);
  return 0;
}

/* TODO: NA's */

static igraph_error_t add_numeric_attribute(igraph_trie_t *names,
                                            igraph_attribute_record_list_t *attrs,
                                            igraph_int_t count,
                                            const char *attrname,
                                            igraph_real_t default_value,
                                            igraph_int_t elem_id,
                                            igraph_real_t number) {
  igraph_int_t attrsize = igraph_trie_size(names);
  igraph_int_t id;
  igraph_vector_t *na;
  igraph_attribute_record_t *prec;

  IGRAPH_CHECK(igraph_trie_get(names, attrname, &id));
  if (id == attrsize) {
    igraph_attribute_record_t rec;

    /* add a new attribute */
    IGRAPH_CHECK(igraph_attribute_record_init(&rec, attrname, IGRAPH_ATTRIBUTE_NUMERIC));
    IGRAPH_FINALLY(igraph_attribute_record_destroy, &rec);

    IGRAPH_CHECK(igraph_attribute_record_set_default_numeric(&rec, default_value));

    IGRAPH_CHECK(igraph_attribute_record_resize(&rec, count));
    IGRAPH_CHECK(igraph_attribute_record_list_push_back(attrs, &rec));
    IGRAPH_FINALLY_CLEAN(1); /* ownership of rec transferred to attrs */
  }

  prec = igraph_attribute_record_list_get_ptr(attrs, id);
  na = prec->value.as_vector;
  if (igraph_vector_size(na) == elem_id) {
    IGRAPH_CHECK(igraph_vector_push_back(na, number));
  } else if (igraph_vector_size(na) < elem_id) {
    IGRAPH_CHECK(igraph_attribute_record_resize(prec, elem_id+1));
    VECTOR(*na)[elem_id] = number;
  } else {
    VECTOR(*na)[elem_id] = number;
  }

  return IGRAPH_SUCCESS;
}

static igraph_error_t make_dynstr(const char *src, size_t len, char **res) {
  *res = strndup(src, len);
  CHECK_OOM_RP(*res);
  return IGRAPH_SUCCESS;
}

static igraph_error_t add_string_attribute(igraph_trie_t *names,
                                           igraph_attribute_record_list_t *attrs,
                                           igraph_int_t count,
                                           const char *attrname,
                                           const char *default_value,
                                           igraph_int_t elem_id,
                                           const char *str,
                                           igraph_int_t str_len) {
  igraph_int_t attrsize=igraph_trie_size(names);
  igraph_int_t id;
  igraph_strvector_t *na;
  igraph_attribute_record_t *prec;

  if (attrname[0] == '\0') {
    /* This is relevant only for custom attributes, which are always of string type.
       No need to add the same check for numerical attributes. */
    IGRAPH_ERROR("\"\" is not allowed as a parameter name in Pajek files.", IGRAPH_PARSEERROR);
  }

  IGRAPH_CHECK(igraph_trie_get(names, attrname, &id));
  if (id == attrsize) {
    igraph_attribute_record_t rec;

#ifdef FUZZING_BUILD_MODE_UNSAFE_FOR_PRODUCTION
    /* There are 21 standard vertex attributes and 21 standard edge attributes.
     * We refuse to allow more to reduce memory usage when fuzzing. */
    if (attrsize > 21) {
      IGRAPH_ERROR("Too many attributes in Pajek file.", IGRAPH_PARSEERROR);
    }
#endif

    IGRAPH_CHECK(igraph_attribute_record_init(&rec, attrname, IGRAPH_ATTRIBUTE_STRING));
    IGRAPH_FINALLY(igraph_attribute_record_destroy, &rec);

    IGRAPH_CHECK(igraph_attribute_record_set_default_string(&rec, default_value));

    IGRAPH_CHECK(igraph_attribute_record_resize(&rec, count));
    IGRAPH_CHECK(igraph_attribute_record_list_push_back(attrs, &rec));
    IGRAPH_FINALLY_CLEAN(1); /* ownership of rec transferred to attrs */
  }

  prec = igraph_attribute_record_list_get_ptr(attrs, id);
  na = prec->value.as_strvector;
  if (igraph_strvector_size(na) <= elem_id) {
    IGRAPH_CHECK(igraph_strvector_resize(na, elem_id+1));
  }
  IGRAPH_CHECK(igraph_strvector_set_len(na, elem_id, str, str_len));

  return IGRAPH_SUCCESS;
}

static igraph_error_t add_string_vertex_attribute(const char *name,
                                                  const char *value,
                                                  size_t len,
                                                  igraph_i_pajek_parsedata_t *context) {

  return add_string_attribute(context->vertex_attribute_names,
                              context->vertex_attributes,
                              context->vcount,
                              name,
                              get_default_value_for_string_vattr(name),
                              context->actvertex-1,
                              value, len);
}

static igraph_error_t add_string_edge_attribute(const char *name,
                                                const char *value,
                                                size_t len,
                                                igraph_i_pajek_parsedata_t *context) {

  return add_string_attribute(context->edge_attribute_names,
                              context->edge_attributes,
                              context->actedge,
                              name,
                              get_default_value_for_string_eattr(name),
                              context->actedge-1,
                              value, len);
}

static igraph_error_t add_numeric_vertex_attribute(const char *name,
                                                   igraph_real_t value,
                                                   igraph_i_pajek_parsedata_t *context) {

  return add_numeric_attribute(context->vertex_attribute_names,
                               context->vertex_attributes,
                               context->vcount,
                               name,
                               get_default_value_for_numeric_vattr(name),
                               context->actvertex-1,
                               value);
}

static igraph_error_t add_numeric_edge_attribute(const char *name,
                                                 igraph_real_t value,
                                                 igraph_i_pajek_parsedata_t *context) {

  return add_numeric_attribute(context->edge_attribute_names,
                               context->edge_attributes,
                               context->actedge,
                               name,
                               get_default_value_for_numeric_eattr(name),
                               context->actedge-1,
                               value);
}

static igraph_error_t add_bipartite_type(igraph_i_pajek_parsedata_t *context) {

  const char *attrname="type";
  igraph_trie_t *names=context->vertex_attribute_names;
  igraph_attribute_record_list_t *attrs=context->vertex_attributes;
  igraph_int_t n=context->vcount, n1=context->vcount2;
  igraph_int_t attrid, attrsize = igraph_trie_size(names);
  igraph_attribute_record_t* rec;
  igraph_vector_bool_t *na;

  if (n1 > n) {
    IGRAPH_ERROR("Invalid number of vertices in bipartite Pajek file.",
                 IGRAPH_PARSEERROR);
  }

  IGRAPH_CHECK(igraph_trie_get(names, attrname, &attrid));

  /* It should not be possible for the "type" attribute to be already
   * present at this point. */
  IGRAPH_ASSERT(attrid == attrsize);

  /* add a new attribute */
  IGRAPH_CHECK(igraph_attribute_record_list_push_back_new(attrs, &rec));
  IGRAPH_CHECK(igraph_attribute_record_set_name(rec, attrname));
  IGRAPH_CHECK(igraph_attribute_record_set_type(rec, IGRAPH_ATTRIBUTE_BOOLEAN));
  IGRAPH_CHECK(igraph_attribute_record_resize(rec, n));

  na = rec->value.as_vector_bool;
  for (igraph_int_t i = n1; i < n; i++) {
    VECTOR(*na)[i] = true;
  }

  return IGRAPH_SUCCESS;
}

static igraph_error_t check_bipartite(igraph_i_pajek_parsedata_t *context) {
  const igraph_vector_int_t *edges=context->vector;
  igraph_int_t n1=context->vcount2;
  igraph_int_t ne=igraph_vector_int_size(edges);

  for (igraph_int_t i=0; i<ne; i+=2) {
    igraph_int_t v1 = VECTOR(*edges)[i];
    igraph_int_t v2 = VECTOR(*edges)[i+1];
    if ( (v1 < n1 && v2 < n1) || (v1 > n1 && v2 > n1) ) {
      IGRAPH_WARNING("Invalid edge in bipartite graph.");
    }
  }

  return IGRAPH_SUCCESS;
}

/* Check if attrname is a standard vertex attribute name used by igraph
   for Pajek data. All of these must be listed here to prevent overwriting
   standard attributes, or crashes due to incompatible attribute types. */
static igraph_bool_t is_standard_vattr(const char *attrname) {
  const char *names[] = {
    /* vertex names: */
    "id", /* TODO: remove for 0.11 */ "name",
    /* other vertex attributes: */
    "type", "x", "y", "z",
    /* vertex parameters: */
    "xfact", "yfact",
    "labeldist", "labeldegree2", "framewidth",
    "fontsize", "rotation", "radius",
    "diamondratio", "labeldegree",
    "font", "url", "color", "framecolor",
    "labelcolor"
  };
  for (size_t i = 0; i < sizeof(names) / sizeof(names[0]); i++) {
    if (strcmp(attrname, names[i]) == 0) {
      return true;
    }
  }
  return false;
}

/* Check if attrname is a standard edge attribute name used by igraph
   for Pajek data. All of these must be listed here to prevent overwriting
   standard attributes, or crashes due to incompatible attribute types. */
static igraph_bool_t is_standard_eattr(const char *attrname) {
  const char *names[] = {
    /* other edge attributes: */
    "weight",
    /* edge parameters: */
    "arrowsize", "edgewidth", "hook1", "hook2",
    "angle1", "angle2", "velocity1", "velocity2",
    "arrowpos", "labelpos", "labelangle",
    "labelangle2", "labeldegree", "fontsize", "font",
    "arrowtype", "linepattern", "label", "labelcolor",
    "color"
  };
  for (size_t i=0; i < sizeof(names) / sizeof(names[0]); i++) {
    if (strcmp(attrname, names[i]) == 0) {
      return true;
    }
  }
  return false;
}

/* Add a _ character at the end of an attribute name to avoid conflict
 * with standard Pajek attributes. */
static igraph_error_t deconflict_attrname(char **attrname) {
  size_t len = strlen(*attrname);
  char *tmp = IGRAPH_REALLOC(*attrname, len+2, char);
  CHECK_OOM_RP(tmp);
  tmp[len] = '_';
  tmp[len+1] = '\0';
  *attrname = tmp;
  return IGRAPH_SUCCESS;
}

typedef struct {
  const char* name;
  igraph_real_t default_value;
} attribute_numeric_defaults_t;

typedef struct {
  const char* name;
  const char* default_value;
} attribute_string_defaults_t;

/* The defaults listed below are Pajek's built-in defaults unless the user
 * overrides them.
 *
 * See: https://nascol.discourse.group/t/pajek-file-format-default-values-for-attributes/38/2
 */

const attribute_numeric_defaults_t vattr_numeric_defaults[] = {
  { "xfact", 1 },
  { "yfact", 1 },
  { "labeldist", 20 },
  { "labeldegree2", 285 },
  { "framewidth", 1 },
  { "fontsize", 15 },
  { "rotation", 0 },
  { "radius", 0 },
  { "diamondratio", 0.01 },
  { "labeldegree", 0 },
  { 0 }
};

const attribute_string_defaults_t vattr_string_defaults[] = {
  { "color", "LightOrange" },
  { "framecolor", "Brown" },
  { "labelcolor", "Maroon" },
  { 0 }
};

const attribute_numeric_defaults_t eattr_numeric_defaults[] = {
  { "arrowsize", 1 },
  { "edgewidth", 2 },
  { "hook1", 0 },
  { "hook2", 0 },
  { "angle1", 0 },
  { "angle2", 0 },
  { "velocity1", 1 },
  { "velocity2", 1 },
  { "arrowpos", 0 },
  { "labelpos", 0.5 },
  { "labelangle", 10 },
  { "labelangle2", 90 },
  { "labeldegree", 0 },
  { "fontsize", 15 },
  { 0 }
};

const attribute_string_defaults_t eattr_string_defaults[] = {
  { "color", "MidnightBlue" },
  { "labelcolor", "Black" },
  { 0 }
};

static igraph_real_t get_default_value_for_numeric_attr(
  const char *attrname, const attribute_numeric_defaults_t* table
) {
  const attribute_numeric_defaults_t* ptr;

  for (ptr = table; ptr->name != 0; ptr++) {
    if (!strcmp(attrname, ptr->name)) {
      return ptr->default_value;
    }
  }

  return IGRAPH_NAN;
}

static const char* get_default_value_for_string_attr(
  const char *attrname, const attribute_string_defaults_t* table
) {
  const attribute_string_defaults_t* ptr;

  for (ptr = table; ptr->name != 0; ptr++) {
    if (!strcmp(attrname, ptr->name)) {
      return ptr->default_value;
    }
  }

  return "";
}

static igraph_real_t get_default_value_for_numeric_vattr(const char *attrname) {
  return get_default_value_for_numeric_attr(attrname, vattr_numeric_defaults);
}

static igraph_real_t get_default_value_for_numeric_eattr(const char *attrname) {
  return get_default_value_for_numeric_attr(attrname, eattr_numeric_defaults);
}

static const char* get_default_value_for_string_vattr(const char *attrname) {
  return get_default_value_for_string_attr(attrname, vattr_string_defaults);
}

static const char* get_default_value_for_string_eattr(const char *attrname) {
  return get_default_value_for_string_attr(attrname, eattr_string_defaults);
}

