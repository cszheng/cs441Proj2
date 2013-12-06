/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "calc3.y"

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string>
#include <cstring>
#include "calc3.h"
#include "symbol_table.h"
#include "pstcode.h"
#include "apm.h"

/* prototypes */
nodeType *opr(int oper, int nops, ...);
nodeType *id(char* i);
nodeType *integer(int value);
nodeType *doub(double value);
nodeType *newId(char* i);
nodeType *declareDoub(nodeType *p);
nodeType *declareInt(nodeType *p);
void freeNode(nodeType *p);
int ex(nodeType *p);
int yylex(void);

int lineno;
PstackCode myPStack;

void yyerror(std::string s);
/*int sym[26]; */                   /* symbol table */


/* Line 268 of yacc.c  */
#line 103 "y.tab.cc"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INTEGER = 258,
     VARIABLE = 259,
     DOUBLE = 260,
     WHILE = 261,
     IF = 262,
     PRINT = 263,
     DO = 264,
     REPEAT = 265,
     UNTIL = 266,
     INT = 267,
     DOUB = 268,
     IFX = 269,
     ELSE = 270,
     NE = 271,
     EQ = 272,
     LE = 273,
     GE = 274,
     UMINUS = 275
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 32 "calc3.y"

    int iValue;                 /* integer value */
    double fValue;
    char* sVariable;                /* symbol table index */
    nodeType *nPtr;             /* node pointer */



/* Line 293 of yacc.c  */
#line 168 "y.tab.cc"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 180 "y.tab.cc"

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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   225

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  8
/* YYNRULES -- Number of rules.  */
#define YYNRULES  38
/* YYNRULES -- Number of states.  */
#define YYNSTATES  85

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   275

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      29,    30,    24,    22,    33,    23,     2,    25,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    27,
      17,    28,    16,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    31,     2,    32,     2,     2,     2,     2,
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
      15,    18,    19,    20,    21,    26
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    11,    14,    18,    23,
      29,    35,    43,    47,    50,    57,    64,    67,    70,    76,
      80,    84,    86,    88,    91,    93,    95,    97,   100,   104,
     108,   112,   116,   120,   124,   128,   132,   136,   140
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      35,     0,    -1,    36,    -1,    36,    37,    -1,    -1,    27,
      -1,    41,    27,    -1,     8,    41,    27,    -1,     4,    28,
      41,    27,    -1,     6,    29,    41,    30,    37,    -1,     7,
      29,    41,    30,    37,    -1,     7,    29,    41,    30,    37,
      15,    37,    -1,    31,    40,    32,    -1,    38,    27,    -1,
       9,    37,     6,    29,    41,    30,    -1,    10,    37,    11,
      29,    41,    30,    -1,    12,    39,    -1,    13,    39,    -1,
       4,    28,    41,    33,    39,    -1,     4,    28,    41,    -1,
       4,    33,    39,    -1,     4,    -1,    37,    -1,    40,    37,
      -1,     3,    -1,     5,    -1,     4,    -1,    23,    41,    -1,
      41,    22,    41,    -1,    41,    23,    41,    -1,    41,    24,
      41,    -1,    41,    25,    41,    -1,    41,    17,    41,    -1,
      41,    16,    41,    -1,    41,    21,    41,    -1,    41,    20,
      41,    -1,    41,    18,    41,    -1,    41,    19,    41,    -1,
      29,    41,    30,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    56,    56,    60,    61,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    78,    79,    82,    83,
      84,    85,    89,    90,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "VARIABLE", "DOUBLE", "WHILE",
  "IF", "PRINT", "DO", "REPEAT", "UNTIL", "INT", "DOUB", "IFX", "ELSE",
  "'>'", "'<'", "NE", "EQ", "LE", "GE", "'+'", "'-'", "'*'", "'/'",
  "UMINUS", "';'", "'='", "'('", "')'", "'{'", "'}'", "','", "$accept",
  "program", "function", "stmt", "declaration", "variable", "stmt_list",
  "expr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,    62,    60,   271,   272,
     273,   274,    43,    45,    42,    47,   275,    59,    61,    40,
      41,   123,   125,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    34,    35,    36,    36,    37,    37,    37,    37,    37,
      37,    37,    37,    37,    37,    37,    38,    38,    39,    39,
      39,    39,    40,    40,    41,    41,    41,    41,    41,    41,
      41,    41,    41,    41,    41,    41,    41,    41,    41
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     2,     3,     4,     5,
       5,     7,     3,     2,     6,     6,     2,     2,     5,     3,
       3,     1,     1,     2,     1,     1,     1,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,    24,    26,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     0,     0,     3,     0,
       0,     0,     0,     0,    26,     0,     0,     0,    21,    16,
      17,    27,     0,    22,     0,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     6,     0,     0,     0,
       7,     0,     0,     0,     0,    38,    12,    23,    33,    32,
      36,    37,    35,    34,    28,    29,    30,    31,     8,     0,
       0,     0,     0,    19,    20,     9,    10,     0,     0,     0,
       0,    14,    15,    18,    11
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    18,    19,    29,    34,    20
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -25
static const yytype_int16 yypact[] =
{
     -25,    11,    80,   -25,   -25,   -16,   -25,   -15,     0,    17,
      80,    80,     9,     9,    17,   -25,    17,    80,   -25,    -9,
     174,    17,    17,    17,   -25,   186,    13,    12,   -24,   -25,
     -25,   -25,    32,   -25,    68,   -25,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,   -25,   198,   114,   129,
     -25,    15,    16,    17,     9,   -25,   -25,   -25,     3,     3,
       3,     3,     3,     3,   -19,   -19,   -25,   -25,   -25,    80,
      80,    17,    17,    96,   -25,   -25,    26,   144,   159,     9,
      80,   -25,   -25,   -25,   -25
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -25,   -25,   -25,   -10,   -25,   -11,   -25,    -6
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      26,    27,    30,    25,    53,    44,    45,    33,    31,    54,
      32,     3,    21,    28,    22,    47,    48,    49,    35,    51,
       4,    24,     6,    52,    57,    42,    43,    44,    45,    23,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      14,    80,     0,    74,    71,    72,    16,    73,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,     0,    75,
      76,     0,    55,     0,     0,    77,    78,     0,    83,     0,
      84,     4,     5,     6,     7,     8,     9,    10,    11,     0,
      12,    13,     0,     4,     5,     6,     7,     8,     9,    10,
      11,    14,    12,    13,     0,    15,     0,    16,     0,    17,
      56,     0,     0,    14,     0,     0,     0,    15,     0,    16,
       0,    17,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,     0,     0,     0,     0,     0,     0,     0,    79,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
       0,     0,     0,     0,    69,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,     0,     0,     0,     0,    70,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
       0,     0,     0,     0,    81,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,     0,     0,     0,     0,    82,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
       0,    46,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,     0,    50,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,     0,    68
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-25))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
      10,    11,    13,     9,    28,    24,    25,    17,    14,    33,
      16,     0,    28,     4,    29,    21,    22,    23,    27,     6,
       3,     4,     5,    11,    34,    22,    23,    24,    25,    29,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      23,    15,    -1,    54,    29,    29,    29,    53,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    69,
      70,    -1,    30,    -1,    -1,    71,    72,    -1,    79,    -1,
      80,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    23,    12,    13,    -1,    27,    -1,    29,    -1,    31,
      32,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,
      -1,    31,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    30,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    30,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    36,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    12,    13,    23,    27,    29,    31,    37,    38,
      41,    28,    29,    29,     4,    41,    37,    37,     4,    39,
      39,    41,    41,    37,    40,    27,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    27,    41,    41,    41,
      27,     6,    11,    28,    33,    30,    32,    37,    41,    41,
      41,    41,    41,    41,    41,    41,    41,    41,    27,    30,
      30,    29,    29,    41,    39,    37,    37,    41,    41,    33,
      15,    30,    30,    39,    37
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

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
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


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
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1806 of yacc.c  */
#line 56 "calc3.y"
    {}
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 60 "calc3.y"
    { ex((yyvsp[(2) - (2)].nPtr)); freeNode((yyvsp[(2) - (2)].nPtr)); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 65 "calc3.y"
    { (yyval.nPtr) = opr(';', 2, NULL, NULL); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 66 "calc3.y"
    { (yyval.nPtr) = (yyvsp[(1) - (2)].nPtr); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 67 "calc3.y"
    { (yyval.nPtr) = opr(PRINT, 1, (yyvsp[(2) - (3)].nPtr)); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 68 "calc3.y"
    { (yyval.nPtr) = opr('=', 2, id((yyvsp[(1) - (4)].sVariable)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 69 "calc3.y"
    { (yyval.nPtr) = opr(WHILE, 2, (yyvsp[(3) - (5)].nPtr), (yyvsp[(5) - (5)].nPtr)); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 70 "calc3.y"
    { (yyval.nPtr) = opr(IF, 2, (yyvsp[(3) - (5)].nPtr), (yyvsp[(5) - (5)].nPtr)); }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 71 "calc3.y"
    { (yyval.nPtr) = opr(IF, 3, (yyvsp[(3) - (7)].nPtr), (yyvsp[(5) - (7)].nPtr), (yyvsp[(7) - (7)].nPtr)); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 72 "calc3.y"
    { (yyval.nPtr) = (yyvsp[(2) - (3)].nPtr); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 73 "calc3.y"
    { (yyval.nPtr) = (yyvsp[(1) - (2)].nPtr);}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 74 "calc3.y"
    { (yyval.nPtr) = opr(DO, 2, (yyvsp[(2) - (6)].nPtr), (yyvsp[(5) - (6)].nPtr));}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 75 "calc3.y"
    { (yyval.nPtr) = opr(REPEAT, 2, (yyvsp[(2) - (6)].nPtr), (yyvsp[(5) - (6)].nPtr));}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 78 "calc3.y"
    {(yyval.nPtr) = opr(INT, 1, declareInt((yyvsp[(2) - (2)].nPtr)));}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 79 "calc3.y"
    {(yyval.nPtr) = opr(DOUB, 1, declareDoub((yyvsp[(2) - (2)].nPtr)));}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 82 "calc3.y"
    {(yyval.nPtr) = opr(',', 2, opr('=', 2, newId((yyvsp[(1) - (5)].sVariable)), (yyvsp[(3) - (5)].nPtr)), (yyvsp[(5) - (5)].nPtr));}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 83 "calc3.y"
    {(yyval.nPtr) = opr('=', 2, newId((yyvsp[(1) - (3)].sVariable)), (yyvsp[(3) - (3)].nPtr));}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 84 "calc3.y"
    {(yyval.nPtr) = opr(',', 2, newId((yyvsp[(1) - (3)].sVariable)), (yyvsp[(3) - (3)].nPtr));}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 85 "calc3.y"
    {(yyval.nPtr) = newId((yyvsp[(1) - (1)].sVariable));}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 89 "calc3.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 90 "calc3.y"
    { (yyval.nPtr) = opr(';', 2, (yyvsp[(1) - (2)].nPtr), (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 94 "calc3.y"
    { (yyval.nPtr) = integer((yyvsp[(1) - (1)].iValue)); }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 95 "calc3.y"
    { (yyval.nPtr) = doub((yyvsp[(1) - (1)].fValue));  }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 96 "calc3.y"
    { (yyval.nPtr) = id((yyvsp[(1) - (1)].sVariable)); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 97 "calc3.y"
    { (yyval.nPtr) = opr(UMINUS, 1, (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 98 "calc3.y"
    { (yyval.nPtr) = opr('+', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 99 "calc3.y"
    { (yyval.nPtr) = opr('-', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 100 "calc3.y"
    { (yyval.nPtr) = opr('*', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 101 "calc3.y"
    { (yyval.nPtr) = opr('/', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 102 "calc3.y"
    { (yyval.nPtr) = opr('<', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 103 "calc3.y"
    { (yyval.nPtr) = opr('>', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 104 "calc3.y"
    { (yyval.nPtr) = opr(GE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 105 "calc3.y"
    { (yyval.nPtr) = opr(LE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 106 "calc3.y"
    { (yyval.nPtr) = opr(NE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 107 "calc3.y"
    { (yyval.nPtr) = opr(EQ, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 108 "calc3.y"
    { (yyval.nPtr) = (yyvsp[(2) - (3)].nPtr); }
    break;



/* Line 1806 of yacc.c  */
#line 1744 "y.tab.cc"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
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
      if (!yypact_value_is_default (yyn))
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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



/* Line 2067 of yacc.c  */
#line 111 "calc3.y"


#define SIZEOF_NODETYPE ((char *)&p->con - (char *)p)

nodeType *integer(int value) {
    nodeType *p;
    size_t nodeSize;

    /* allocate node */
    nodeSize = SIZEOF_NODETYPE + sizeof(conNodeType);
    if ((p = (nodeType*) malloc(nodeSize)) == NULL)
        yyerror("out of memory");
    
    /* copy information */
    p->type = typeInt;
    p->con.value = value;
    return p;
}

nodeType *doub(double value){
    nodeType *p;
    size_t nodeSize;

    /* allocate node */
    nodeSize = SIZEOF_NODETYPE + sizeof(floatNodeType);
    if ((p = (nodeType*) malloc(nodeSize)) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type = typeFloat;
    p->fl.value = value;

    return p;
}

nodeType *id(char* i){
    symbol_entry* entry;
    if((entry=getSymbolEntry(i)) == 0)
        yyerror("missing declaration for identifier"); 
    nodeType *p;
    size_t nodeSize;

    nodeSize = SIZEOF_NODETYPE + sizeof(idNodeType);
    if ((p = (nodeType*)malloc(nodeSize)) == NULL)
        yyerror("out of memory");

    p->type = typeId;
    p->id.i = entry;

    return p;
}

nodeType *newId(char* i){
    symbol_entry* newEntry = (symbol_entry*)malloc(sizeof(symbol_entry));
    nodeType *p;
    size_t nodeSize;

    if(getSymbolEntry(i)!=0)
        yyerror("identifier has already been declared");
    newEntry->name = strdup(i);
    newEntry->size = 1; //this is used to count the number of symbols
    addSymbol(newEntry, lineno);

    nodeSize = SIZEOF_NODETYPE + sizeof(idNodeType);
    if ((p = (nodeType*)malloc(nodeSize)) == NULL)
        yyerror("out of memory");

    p->type = typeId;
    p->id.i = getSymbolEntry(i);

    return p;
}

nodeType *opr(int oper, int nops, ...) {
    va_list ap;
    nodeType *p;
    size_t nodeSize;
    int i;

    /* allocate node */
    nodeSize = SIZEOF_NODETYPE + sizeof(oprNodeType) +
        (nops - 1) * sizeof(nodeType*);
    if ((p = (nodeType*)malloc(nodeSize)) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type = typeOpr;
    p->opr.oper = oper;
    p->opr.nops = nops;
    va_start(ap, nops);
    for (i = 0; i < nops; i++)
        p->opr.op[i] = va_arg(ap, nodeType*);
    va_end(ap);
    return p;
}

/* setting type of declared variables to INT*/
nodeType *declareInt(nodeType *p){
    switch(p->type){
        case typeId: {
            symbol_entry *entry = p->id.i;
            entry->type = TYPE_INT;
            return p;
        }
        case typeOpr:
            switch(p->opr.oper){
                case ',': 
                    declareInt(p->opr.op[0]);
                    declareInt(p->opr.op[1]);
                    return p;
                case '=': 
                    declareInt(p->opr.op[0]);
                    return p;
        }
    }
}

/* setting type of declared variables to DOUB*/
nodeType *declareDoub(nodeType *p){
    switch(p->type){
        case typeId: {
            symbol_entry *entry = p->id.i;
            entry->type = TYPE_FLOAT;
            return p;
        }
        case typeOpr:
            switch(p->opr.oper){
                case ',': 
                    declareDoub(p->opr.op[0]);
                    declareDoub(p->opr.op[1]);
                    return p;
                case '=': 
                    declareDoub(p->opr.op[0]);
                    return p;
        }
    }
}

void freeNode(nodeType *p) {
    int i;
    if (!p) return;
    if (p->type == typeOpr) {
        for (i = 0; i < p->opr.nops; i++)
            freeNode(p->opr.op[i]);
    }
    free (p);
}

void yyerror(std::string s) {
    fprintf(stderr, "%s\n", s.c_str());
    exit(1);
}

int main(void) {
    pushSymbolTable();
    lineno = 1;
    myPStack.begin_prog();
    yyparse();
    myPStack.end_prog(getCurrentSymbolTableSize());
    myPStack.write("calc3p.apm", 1);
    return 0;
}

int ex(nodeType *p) {
    if (!p) return 0;
    switch(p->type) {
    case typeInt:       {
                            myPStack.add(I_CONSTANT);
                            myPStack.add(p->con.value);
                            
                            return typeInt;
                        }
    case typeFloat:     {
                            myPStack.add(R_CONSTANT);
                            myPStack.add(p->fl.value);
                            
                            return typeFloat;
                        }
    case typeId:        {
                        if (p->id.i->type == TYPE_INT){
                                                      
                            myPStack.add(I_VARIABLE);
                            myPStack.add(p->id.i->blk_level);
                            myPStack.add(p->id.i->offset);
			                myPStack.add(I_VALUE);
                            
                            return TYPE_INT;
                        }
                        else if (p->id.i->type == TYPE_FLOAT){
                                                      
                            myPStack.add(R_VARIABLE);
                            myPStack.add(p->id.i->blk_level);
                            myPStack.add(p->id.i->offset);
                            myPStack.add(R_VALUE);
                            return TYPE_FLOAT;
                        }
                        }
    case typeOpr:
        switch(p->opr.oper) {
        case WHILE:     {
                        ex(p->opr.op[0]);   
                        int jmpAddr = myPStack.pos();                     
                        myPStack.add(I_JMP_IF_FALSE);
                        myPStack.add(0);
                        int initAddr = myPStack.pos();
                        ex(p->opr.op[1]);
                        ex(p->opr.op[0]);
                        myPStack.add(I_JMP);
                        myPStack.add(jmpAddr);
                        myPStack.at(initAddr-1) = myPStack.pos();

                        return 0;
                        }
        case DO:        {
                        int jmpAddr = myPStack.pos();
                        ex(p->opr.op[0]);                        
                        ex(p->opr.op[1]);
                        myPStack.add(I_JMP_IF_TRUE);
                        myPStack.add(jmpAddr);
                        }

                        return 0;
        case REPEAT:    {
                        int jmpAddr = myPStack.pos();
                        ex(p->opr.op[0]);                        
                        ex(p->opr.op[1]);
                        myPStack.add(I_JMP_IF_FALSE);
                        myPStack.add(jmpAddr);
                        
                        return 0;
                        }
        case INT:       ex(p->opr.op[0]); 
                        return 0;
        case DOUB:      ex(p->opr.op[0]);  
                        return 0;
        case ',':       ex(p->opr.op[0]);
                        ex(p->opr.op[1]);
                        return 0;
        case '=':       {
			             if (p->opr.op[0]->id.i->type == TYPE_INT){
                            myPStack.add(I_VARIABLE);
			                myPStack.add(p->opr.op[0]->id.i->blk_level);
			                myPStack.add(p->opr.op[0]->id.i->offset);
			    
			                ex(p->opr.op[1]);
                                                      
                            myPStack.add(I_ASSIGN);
                            myPStack.add(1);
                           
                            return TYPE_INT;
                        }
                        else if (p->opr.op[0]->id.i->type == TYPE_FLOAT){
                            myPStack.add(R_VARIABLE);
			                myPStack.add(p->opr.op[0]->id.i->blk_level);
			                myPStack.add(p->opr.op[0]->id.i->offset);
                            
                            ex(p->opr.op[1]);                            
                            
                            myPStack.add(R_ASSIGN);
                            myPStack.add(1);
                            
                            return TYPE_FLOAT;
                        }
                        }
        case IF:        {                        
                        ex(p->opr.op[0]);
                        
                        myPStack.add(I_JMP_IF_FALSE);
                        myPStack.add(0);
                        
                        int initAddr = myPStack.pos();
                        //fprintf(stderr, "%d", initAddr);
                        ex(p->opr.op[1]);
                        
                        myPStack.at(initAddr-1) = myPStack.pos();

                        if (p->opr.nops > 2)
                            ex(p->opr.op[2]);

                        return 0;
                        }
        case PRINT:     { 
                        int valueType = ex(p->opr.op[0]); 
                                             
                        if(valueType == TYPE_INT || valueType == typeInt)
                            myPStack.add(I_WRITE);
                        else if (valueType == TYPE_FLOAT || valueType == typeFloat)
                            myPStack.add(R_WRITE);                                                 
                        
                        myPStack.add(1);
                        
                        return 0;
                        }
        case ';':       ex(p->opr.op[0]); return ex(p->opr.op[1]);
        case UMINUS:    {
                        int valueType = ex(p->opr.op[0]); 
                     
                        if(valueType == TYPE_INT || valueType == typeInt)
                            myPStack.add(I_MINUS);
                        else if (valueType == TYPE_FLOAT || valueType == typeFloat)
                            myPStack.add(R_MINUS);                                                 
                        return valueType;
                        }
        case '+':       {
                         int valueType = ex(p->opr.op[0]);
                         ex(p->opr.op[1]);   
                                                               
                         if(valueType == TYPE_INT || valueType == typeInt)
                             myPStack.add(I_ADD);
                         else if (valueType == TYPE_FLOAT || valueType == typeFloat)
                             myPStack.add(R_ADD);  

                         return valueType;
                        }
        case '-':       {
                         int valueType = ex(p->opr.op[0]);
                         ex(p->opr.op[1]);
 
                         if(p->opr.op[0]->type == typeId)            
                              valueType =p->opr.op[0]->id.i->type;
                         else{
                             valueType = p->opr.op[0]->type;
                         } 
                     
                         if(valueType == TYPE_INT || valueType == typeInt)
                             myPStack.add(I_SUBTRACT);
                         else if (valueType == TYPE_FLOAT || valueType == typeFloat)
                             myPStack.add(R_SUBTRACT);  

                         return valueType;
                         }
        case '*':       {
                         int valueType = ex(p->opr.op[0]);
                         ex(p->opr.op[1]);
    
                         if(p->opr.op[0]->type == typeId)            
                              valueType =p->opr.op[0]->id.i->type;
                         else{
                             valueType = p->opr.op[0]->type;
                         } 
                     
                         if(valueType == TYPE_INT || valueType == typeInt)
                             myPStack.add(I_MULTIPLY);
                         else if (valueType == TYPE_FLOAT || valueType == typeFloat)
                             myPStack.add(R_MULTIPLY);  

                         return valueType;
                         }
        case '/':       {
                         int valueType = ex(p->opr.op[0]);
                         ex(p->opr.op[1]);

                         if(p->opr.op[0]->type == typeId)            
                              valueType =p->opr.op[0]->id.i->type;
                         else{
                             valueType = p->opr.op[0]->type;
                         } 
                     
                         if(valueType == TYPE_INT || valueType == typeInt)
                             myPStack.add(I_DIVIDE);
                         else if (valueType == TYPE_FLOAT || valueType == typeFloat)
                             myPStack.add(R_DIVIDE);  

                         return valueType;
                         }
        case '<':       {
                         ex(p->opr.op[0]);
                         ex(p->opr.op[1]);
    
                         int valueType;
                         if(p->opr.op[0]->type == typeId)            
                              valueType =p->opr.op[0]->id.i->type;
                         else{
                             valueType = p->opr.op[0]->type;
                         } 
                     
                         if(valueType == TYPE_INT || valueType == typeInt)
                             myPStack.add(I_LESS);
                         else if (valueType == TYPE_FLOAT || valueType == typeFloat)
                             myPStack.add(R_GREATER);  

                         return 0;
                         }
        case '>':       {
                         ex(p->opr.op[0]);
                         ex(p->opr.op[1]);
    
                         int valueType;
                         if(p->opr.op[0]->type == typeId)            
                              valueType =p->opr.op[0]->id.i->type;
                         else{
                             valueType = p->opr.op[0]->type;
                         } 
                     
                         if(valueType == TYPE_INT || valueType == typeInt)
                             myPStack.add(I_GREATER);
                         else if (valueType == TYPE_FLOAT || valueType == typeFloat)
                             myPStack.add(R_GREATER);  

                         return 0;
                         }
        case GE:        {
                         ex(p->opr.op[0]);
                         ex(p->opr.op[1]);
    
                         int valueType;
                         if(p->opr.op[0]->type == typeId)            
                              valueType =p->opr.op[0]->id.i->type;
                         else{
                             valueType = p->opr.op[0]->type;
                         } 
                     
                         if(valueType == TYPE_INT || valueType == typeInt)
                             myPStack.add(I_EQUAL);
                         else if (valueType == TYPE_FLOAT || valueType == typeFloat)
                             myPStack.add(R_EQUAL);  

                         ex(p->opr.op[0]);
                         ex(p->opr.op[1]);

                         if(valueType == TYPE_INT || valueType == typeInt)
                             myPStack.add(I_GREATER);
                         else if (valueType == TYPE_FLOAT || valueType == typeFloat)
                             myPStack.add(R_GREATER);
                         
                         myPStack.add(I_OR);
                         return 0;
                        }
        case LE:        {    
                         ex(p->opr.op[0]);
                         ex(p->opr.op[1]);
    
                         int valueType;
                         if(p->opr.op[0]->type == typeId)            
                              valueType =p->opr.op[0]->id.i->type;
                         else{
                             valueType = p->opr.op[0]->type;
                         } 
                     
                         if(valueType == TYPE_INT || valueType == typeInt)
                             myPStack.add(I_EQUAL);
                         else if (valueType == TYPE_FLOAT || valueType == typeFloat)
                             myPStack.add(R_EQUAL);  

                         ex(p->opr.op[0]);
                         ex(p->opr.op[1]);

                         if(valueType == TYPE_INT || valueType == typeInt)
                             myPStack.add(I_LESS);

                         else if (valueType == TYPE_FLOAT || valueType == typeFloat)
                             myPStack.add(R_LESS);

                         myPStack.add(I_OR);
                         return 0;
                        }
        case NE:        {
                         ex(p->opr.op[0]);
                         ex(p->opr.op[1]);
    
                         int valueType;
                         if(p->opr.op[0]->type == typeId)            
                              valueType =p->opr.op[0]->id.i->type;
                         else{
                             valueType = p->opr.op[0]->type;
                         } 
                     
                         if(valueType == TYPE_INT || valueType == typeInt)
                             myPStack.add(I_EQUAL);                         
                         else if (valueType == TYPE_FLOAT || valueType == typeFloat)
                             myPStack.add(R_EQUAL);  

                         myPStack.add(I_NOT);
                         return 0;                         
                        }
        case EQ:        {
                          ex(p->opr.op[0]);
                         ex(p->opr.op[1]);
    
                         int valueType;
                         if(p->opr.op[0]->type == typeId)            
                              valueType =p->opr.op[0]->id.i->type;
                         else{
                             valueType = p->opr.op[0]->type;
                         } 
                     
                         if(valueType == TYPE_INT || valueType == typeInt)
                             myPStack.add(I_EQUAL);                         
                         else if (valueType == TYPE_FLOAT || valueType == typeFloat)
                             myPStack.add(R_EQUAL);  
                         return 0;
                         }		
        }
    }
    return 0;
}

