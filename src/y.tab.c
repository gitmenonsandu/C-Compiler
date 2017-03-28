/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

	#include <bits/stdc++.h>
	#include <math.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include "symbol.cpp" // Symbol Table
	#include "icg.c" // ICG Phase
	#include "semantic.cpp" // Semantic Phase
	int g_addr = 100;
	stack<float> values;

	extern "C" {
		int yylex();
		void yyerror(char *);
	}

	int scope_val;
	char null[2] = " ";

#line 86 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    NUM = 259,
    REAL = 260,
    SIZEOF = 261,
    PTR = 262,
    DOT = 263,
    TYPEDEF = 264,
    STRUCT = 265,
    INT = 266,
    FLOAT = 267,
    VOID = 268,
    IF = 269,
    ELSE = 270,
    WHILE = 271,
    RETURN = 272,
    FOR = 273,
    DO = 274,
    SWITCH = 275,
    CASE = 276,
    BREAK = 277,
    DEFAULT = 278,
    CONTINUE = 279,
    PRINTF = 280,
    SCANF = 281,
    STRING = 282,
    PREPROC = 283,
    MUL_ASSIGN = 284,
    SUB_ASSIGN = 285,
    DIV_ASSIGN = 286,
    ADD_ASSIGN = 287,
    ARRAY = 288,
    FUNCTION = 289,
    MAIN = 290,
    GT = 291,
    LT = 292,
    LE = 293,
    GE = 294,
    NE = 295,
    EQ = 296,
    AND = 297,
    OR = 298
  };
#endif
/* Tokens.  */
#define ID 258
#define NUM 259
#define REAL 260
#define SIZEOF 261
#define PTR 262
#define DOT 263
#define TYPEDEF 264
#define STRUCT 265
#define INT 266
#define FLOAT 267
#define VOID 268
#define IF 269
#define ELSE 270
#define WHILE 271
#define RETURN 272
#define FOR 273
#define DO 274
#define SWITCH 275
#define CASE 276
#define BREAK 277
#define DEFAULT 278
#define CONTINUE 279
#define PRINTF 280
#define SCANF 281
#define STRING 282
#define PREPROC 283
#define MUL_ASSIGN 284
#define SUB_ASSIGN 285
#define DIV_ASSIGN 286
#define ADD_ASSIGN 287
#define ARRAY 288
#define FUNCTION 289
#define MAIN 290
#define GT 291
#define LT 292
#define LE 293
#define GE 294
#define NE 295
#define EQ 296
#define AND 297
#define OR 298

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 45 "parser.y" /* yacc.c:355  */

 		int iValue; /* integer value */
 		char *str; /* identifier name */
	

#line 215 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 232 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   238

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  164

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      51,    52,    46,    44,    49,    45,     2,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    48,
       2,    50,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,    56,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    53,    54,    55,    59,    72,    89,    90,
      91,    92,    93,    97,    97,    97,   111,   112,   121,   122,
     123,   126,   127,   128,   129,   130,   135,   135,   145,   146,
     147,   148,   149,   150,   153,   153,   161,   161,   169,   169,
     177,   177,   185,   189,   194,   199,   213,   214,   218,   219,
     223,   223,   228,   271,   272,   275,   276,   279,   284,   284,
     289,   290,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   308,   309,   310,   314,   314,   314,
     317,   317,   321,   321,   321,   321,   325,   325,   327,   327,
     328,   332,   336
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NUM", "REAL", "SIZEOF", "PTR",
  "DOT", "TYPEDEF", "STRUCT", "INT", "FLOAT", "VOID", "IF", "ELSE",
  "WHILE", "RETURN", "FOR", "DO", "SWITCH", "CASE", "BREAK", "DEFAULT",
  "CONTINUE", "PRINTF", "SCANF", "STRING", "PREPROC", "MUL_ASSIGN",
  "SUB_ASSIGN", "DIV_ASSIGN", "ADD_ASSIGN", "ARRAY", "FUNCTION", "MAIN",
  "GT", "LT", "LE", "GE", "NE", "EQ", "AND", "OR", "'+'", "'-'", "'*'",
  "'/'", "';'", "','", "'='", "'('", "')'", "'['", "']'", "'{'", "'}'",
  "$accept", "start", "Declaration", "Assignment", "$@1", "$@2",
  "assign_operator", "Expr", "$@3", "RelOP", "Expression", "$@4", "$@5",
  "$@6", "$@7", "FunctionCall", "ArrayUsage", "$@8", "Function",
  "ArgListOpt", "ArgList", "Arg", "CompoundStmt", "$@9", "StmtList",
  "Stmt", "Type", "WhileStmt", "$@10", "$@11", "DoWhileStmt", "$@12",
  "ForStmt", "$@13", "$@14", "$@15", "IfStmt", "$@16", "Else", "$@17",
  "StructStmt", "PrintFunc", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,    43,    45,    42,    47,    59,    44,
      61,    40,    41,    91,    93,   123,   125
};
# endif

#define YYPACT_NINF -100

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-100)))

#define YYTABLE_NINF -51

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     203,  -100,   115,  -100,  -100,     7,  -100,  -100,  -100,   203,
      20,   203,   -31,   -19,    39,   203,    55,   -17,    81,    31,
      68,   -16,   -12,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,    37,  -100,   122,    -1,    80,  -100,
     185,  -100,    68,  -100,    10,  -100,    37,   102,   -46,  -100,
    -100,    37,   139,  -100,  -100,   102,  -100,  -100,  -100,    37,
      28,    81,   106,  -100,  -100,  -100,  -100,    25,     3,  -100,
      78,   139,  -100,    42,  -100,    37,    37,    37,    37,    41,
     102,  -100,    38,    19,    19,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,   121,    51,  -100,    45,    52,  -100,    57,    60,
      72,  -100,  -100,  -100,  -100,  -100,    81,  -100,  -100,  -100,
    -100,  -100,    37,    76,  -100,    71,    81,   177,  -100,  -100,
     109,    89,   182,    37,  -100,  -100,   128,    95,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,    97,   107,   103,   108,
      41,    37,  -100,    37,    37,  -100,   144,   139,   177,  -100,
     113,  -100,  -100,  -100,   119,   124,    41,    81,  -100,  -100,
    -100,   127,   177,  -100
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    12,    13,    19,    20,     0,    74,    75,    76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     1,     3,     7,     8,    22,    23,
      24,    25,     9,    21,     0,     2,    13,     0,     0,    11,
      13,    17,     0,    48,     0,    14,     0,     0,    45,    43,
      44,     0,    16,    47,    46,    54,     6,    10,    49,     0,
       0,     0,     0,    34,    36,    38,    40,     0,    53,    56,
       0,    15,    51,     0,    42,     0,     0,     0,     0,     0,
       0,    57,     0,    35,    37,    39,    41,    58,    52,    55,
      91,    61,     0,     0,    77,     0,     0,    80,     0,     0,
       0,    68,    59,    64,    73,    60,     0,    62,    63,    65,
      66,    67,     0,     0,    69,     0,     0,     0,    71,    72,
       0,     0,     0,     0,    70,    82,     0,     0,    86,    32,
      33,    28,    29,    30,    31,    26,     0,     0,     0,     0,
       0,     0,    78,     0,     0,    92,    90,    27,     0,    83,
       0,    88,    87,    79,     0,     0,     0,     0,    81,    89,
      84,     0,     0,    85
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -100,    17,   -84,   -15,  -100,  -100,   141,   -99,  -100,  -100,
     -21,  -100,  -100,  -100,  -100,    12,     0,  -100,  -100,  -100,
    -100,   112,   -77,  -100,  -100,   -95,   -41,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    12,    20,    59,    34,   121,   141,   135,
     122,    75,    76,    77,    78,    53,    54,    21,    15,    67,
      68,    69,   104,    91,    92,   105,    16,   107,   113,   148,
     108,   117,   109,   137,   154,   161,   110,   140,   152,   156,
      17,   111
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      14,    37,    88,    41,    44,    19,    61,   -50,   103,    14,
      22,    14,    13,    52,    70,    14,    38,    26,    42,    42,
      24,    13,   126,    13,   136,    60,    23,    13,    25,    27,
      62,    39,    35,   103,    40,     3,     4,    46,    71,    70,
      48,    49,    50,    47,   149,   150,    73,    56,    40,     3,
       4,   106,    80,   153,    83,    84,    85,    86,    36,     3,
       4,    42,    58,   146,   103,    65,    66,   163,    28,    29,
      30,    31,    63,    64,    65,    66,   106,    79,   103,   159,
     115,    81,    72,    43,    40,     3,     4,    32,    51,    33,
      82,    37,    14,   114,    90,    42,    87,    28,    29,    30,
      31,   125,   112,   116,    13,   118,    38,   106,   119,    28,
      29,    30,    31,     6,     7,     8,    42,    14,    33,   124,
     147,   106,     1,   120,     2,     3,     4,   123,    57,    13,
      33,     5,     6,     7,     8,    93,   127,    94,    95,    96,
      97,   128,   160,    98,   138,    99,   100,   139,    14,   142,
      63,    64,    65,    66,   144,   143,   145,    42,    74,   151,
      13,    45,    14,   -18,    18,   155,    19,   157,   -50,   101,
     -18,    18,   158,    55,    13,   -50,    87,   102,     1,   162,
       2,     3,     4,    63,    64,    65,    66,     5,     6,     7,
       8,    93,    89,    94,    95,    96,    97,     0,     0,    98,
       0,    99,   100,    -5,     1,     0,     2,     3,     4,     0,
       0,     0,     0,     5,     6,     7,     8,     0,   129,   130,
     131,   132,   133,   134,     0,   101,    63,    64,    65,    66,
       0,     9,    87,   -18,    18,     0,     0,   -18,   -50
};

static const yytype_int16 yycheck[] =
{
       0,    16,    79,    18,    19,    51,    47,    53,    92,     9,
       3,    11,     0,    34,    55,    15,    16,    48,    18,    19,
       0,     9,   117,    11,   123,    46,     9,    15,    11,    48,
      51,    48,    15,   117,     3,     4,     5,    53,    59,    80,
       3,     4,     5,    55,   143,   144,    61,    48,     3,     4,
       5,    92,    49,   148,    75,    76,    77,    78,     3,     4,
       5,    61,    52,   140,   148,    46,    47,   162,    29,    30,
      31,    32,    44,    45,    46,    47,   117,    52,   162,   156,
      95,     3,    54,    52,     3,     4,     5,    48,    51,    50,
      48,   106,    92,    48,    56,    95,    55,    29,    30,    31,
      32,   116,    51,    51,    92,    48,   106,   148,    48,    29,
      30,    31,    32,    11,    12,    13,   116,   117,    50,    48,
     141,   162,     1,    51,     3,     4,     5,    51,    48,   117,
      50,    10,    11,    12,    13,    14,    27,    16,    17,    18,
      19,    52,   157,    22,    16,    24,    25,    52,   148,    52,
      44,    45,    46,    47,    51,    48,    48,   157,    52,    15,
     148,    20,   162,    48,    49,    52,    51,    48,    53,    48,
      48,    49,    48,    51,   162,    53,    55,    56,     1,    52,
       3,     4,     5,    44,    45,    46,    47,    10,    11,    12,
      13,    14,    80,    16,    17,    18,    19,    -1,    -1,    22,
      -1,    24,    25,     0,     1,    -1,     3,     4,     5,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    -1,    36,    37,
      38,    39,    40,    41,    -1,    48,    44,    45,    46,    47,
      -1,    28,    55,    48,    49,    -1,    -1,    52,    53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,    10,    11,    12,    13,    28,
      58,    59,    60,    72,    73,    75,    83,    97,    49,    51,
      61,    74,     3,    58,     0,    58,    48,    48,    29,    30,
      31,    32,    48,    50,    63,    58,     3,    60,    73,    48,
       3,    60,    73,    52,    60,    63,    53,    55,     3,     4,
       5,    51,    67,    72,    73,    51,    48,    48,    52,    62,
      67,    83,    67,    44,    45,    46,    47,    76,    77,    78,
      83,    67,    54,    60,    52,    68,    69,    70,    71,    52,
      49,     3,    48,    67,    67,    67,    67,    55,    79,    78,
      56,    80,    81,    14,    16,    17,    18,    19,    22,    24,
      25,    48,    56,    59,    79,    82,    83,    84,    87,    89,
      93,    98,    51,    85,    48,    60,    51,    88,    48,    48,
      51,    64,    67,    51,    48,    60,    82,    27,    52,    36,
      37,    38,    39,    40,    41,    66,    64,    90,    16,    52,
      94,    65,    52,    48,    51,    48,    79,    67,    86,    64,
      64,    15,    95,    82,    91,    52,    96,    48,    48,    79,
      60,    92,    52,    82
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    58,    58,    58,    59,    59,    59,    59,
      59,    59,    59,    61,    62,    60,    60,    60,    60,    60,
      60,    63,    63,    63,    63,    63,    65,    64,    66,    66,
      66,    66,    66,    66,    68,    67,    69,    67,    70,    67,
      71,    67,    67,    67,    67,    67,    67,    67,    72,    72,
      74,    73,    75,    76,    76,    77,    77,    78,    80,    79,
      81,    81,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    83,    83,    83,    85,    86,    84,
      88,    87,    90,    91,    92,    89,    94,    93,    96,    95,
      95,    97,    98
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     0,     3,     2,     2,     2,
       3,     2,     1,     0,     0,     5,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     4,     1,     1,
       1,     1,     1,     1,     0,     4,     0,     4,     0,     4,
       0,     4,     3,     1,     1,     1,     1,     1,     3,     4,
       0,     5,     6,     1,     0,     3,     1,     2,     0,     4,
       2,     0,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     2,     2,     1,     1,     1,     1,     0,     0,     7,
       0,     8,     0,     0,     0,    12,     0,     7,     0,     3,
       0,     7,     5
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
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

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
      yychar = yylex ();
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:
#line 60 "parser.y" /* yacc.c:1646  */
    { 
		if( check1((yyvsp[-1].str)) )
		{
			insert((yyvsp[-1].str),(yyvsp[-2].iValue),g_addr,cscope.top(),values.top(),0); 
			g_addr+=4;
			values.pop();
		}
		else
		{
			printf("Redeclaration of variable : %s \n",(yyvsp[-1].str));
		}
	}
#line 1458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 73 "parser.y" /* yacc.c:1646  */
    {
		int scope_check = check2((yyvsp[-1].str));
		if( scope_check == -1)
		{
			printf("Undeclared variable : %s \n",(yyvsp[-1].str));
		}
		else if( scope_check == 0)
		{
			printf("Variable out of scope : %s \n", (yyvsp[-1].str));
		}
		else
		{
			update((yyvsp[-1].str), scope_check, values.top());
			values.pop();
		}
	}
#line 1479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 91 "parser.y" /* yacc.c:1646  */
    { insert((yyvsp[-1].str),(yyvsp[-2].iValue),g_addr,scope,0.0,ARRAY); g_addr+=4; }
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 97 "parser.y" /* yacc.c:1646  */
    { pushicg((yyvsp[0].str));}
#line 1491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 97 "parser.y" /* yacc.c:1646  */
    { pushicg((yyvsp[0].str)); }
#line 1497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 98 "parser.y" /* yacc.c:1646  */
    {
		string a((yyvsp[0].str));
		if(isnum(a)!=2)
		{
			values.push(atof((yyvsp[0].str)));
		}
		else
		{
			values.push(0.0);
		}
		(yyval.str) = (yyvsp[-4].str);
		codegen_assign();
	}
#line 1515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 113 "parser.y" /* yacc.c:1646  */
    {
		char ass[100];
		strcpy(ass, (yyvsp[0].str));
		strcat(ass, "&");
		strcat(ass, (yyvsp[-2].str));
		values.push(0.0);
		(yyval.str) = ass;
	}
#line 1528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 121 "parser.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); values.push(0.0); }
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 126 "parser.y" /* yacc.c:1646  */
    { char assign[2] = "="; (yyval.str) = assign; }
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 135 "parser.y" /* yacc.c:1646  */
    { { strcpy(tstack[++top], (yyvsp[0].str)); }}
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 136 "parser.y" /* yacc.c:1646  */
    {
		if(check((yyvsp[-3].str),(yyvsp[0].str)))
				printf("Type Mismatch %s %s \n",(yyvsp[-3].str),(yyvsp[0].str));
		else
			(yyval.str) = (yyvsp[-3].str);
		codegen();
	}
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 153 "parser.y" /* yacc.c:1646  */
    { strcpy(tstack[++top], "+"); }
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 154 "parser.y" /* yacc.c:1646  */
    { 
		if(check((yyvsp[-3].str),(yyvsp[0].str)))
			printf("Type Mismatch %s %s \n",(yyvsp[-3].str),(yyvsp[0].str));
		else
			(yyval.str) = (yyvsp[-3].str);
		codegen();
	}
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 161 "parser.y" /* yacc.c:1646  */
    { strcpy(tstack[++top], ""); }
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 162 "parser.y" /* yacc.c:1646  */
    { 
		if(check((yyvsp[-3].str),(yyvsp[0].str)))
			printf("Type Mismatch %s %s \n",(yyvsp[-3].str),(yyvsp[0].str));
		else
			(yyval.str) = (yyvsp[-3].str);
		codegen();
	}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 169 "parser.y" /* yacc.c:1646  */
    { strcpy(tstack[++top], "*"); }
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 170 "parser.y" /* yacc.c:1646  */
    { 
		if(check((yyvsp[-3].str),(yyvsp[0].str)))
			printf("Type Mismatch %s %s \n",(yyvsp[-3].str),(yyvsp[0].str));
		else
			(yyval.str) = (yyvsp[-3].str);
		codegen();
	}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 177 "parser.y" /* yacc.c:1646  */
    { strcpy(tstack[++top], "/"); }
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 178 "parser.y" /* yacc.c:1646  */
    { 
		if(check((yyvsp[-3].str),(yyvsp[0].str)))
			printf("Type Mismatch %s %s \n",(yyvsp[-3].str),(yyvsp[0].str));
		else
			(yyval.str) = (yyvsp[-3].str);
		codegen();
	}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 186 "parser.y" /* yacc.c:1646  */
    { 
			(yyval.str) = (yyvsp[-1].str); 
		}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 190 "parser.y" /* yacc.c:1646  */
    { 
			(yyval.str) = (yyvsp[0].str);
			pushicg((yyvsp[0].str)); 
		}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 195 "parser.y" /* yacc.c:1646  */
    {
			(yyval.str) = (yyvsp[0].str); 
			pushicg((yyvsp[0].str)); 
		}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 200 "parser.y" /* yacc.c:1646  */
    { 
			int scope_check = check2((yyvsp[0].str));
			if( scope_check == -1)
			{
				printf("Undeclared variable : %s \n",(yyvsp[0].str));
			}
			else if( scope_check == 0)
			{
				printf("Variable out of scope : %s \n", (yyvsp[0].str));
			}
			(yyval.str) = (yyvsp[0].str); 
			pushicg((yyvsp[0].str)); 
		}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 213 "parser.y" /* yacc.c:1646  */
    { codegen_array(); }
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 223 "parser.y" /* yacc.c:1646  */
    { pushicg((yyvsp[0].str)); }
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 229 "parser.y" /* yacc.c:1646  */
    { 
		if(function_check((yyvsp[-4].str)))
		{
			printf("Type Mismatch in function name: %s\n", (yyvsp[-4].str));
		}
		else
		{
			int num_check = isnum((yyvsp[0].str));
			if(num_check == 0)
			{
				if((yyvsp[-5].iValue) != INT)
					printf("Return Type Mismatch in function name: %s ( INT required )\n", (yyvsp[-4].str));
				else
					insert((yyvsp[-4].str),(yyvsp[-5].iValue),g_addr,0,0,FUNCTION);g_addr+=4;
			}
			else if(num_check == 1 && (yyvsp[-5].iValue) != FLOAT)
			{
				if((yyvsp[-5].iValue) != FLOAT)
					printf("Return Type Mismatch in function name: %s ( FLOAT required )\n", (yyvsp[-4].str));
				else
					insert((yyvsp[-4].str),(yyvsp[-5].iValue),g_addr,0,0,FUNCTION);g_addr+=4;			
			}
			else
			{
				string a((yyvsp[0].str));
				cscope.push(scope_val);
				flag_function = true;
				if(type_of(a) != (yyvsp[-5].iValue))
				{
					printf("Return Type Mismatch in function name: %s\n", (yyvsp[-4].str));		
				}
				else
				{
					insert((yyvsp[-4].str),(yyvsp[-5].iValue),g_addr,0,0,FUNCTION);g_addr+=4;
				}
				flag_function = false;
				cscope.pop();
			}
		} 
	}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 284 "parser.y" /* yacc.c:1646  */
    { scope++; cscope.push(scope); }
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 286 "parser.y" /* yacc.c:1646  */
    { scope_val = cscope.top(); ef[cscope.top()] = 1; cscope.pop(); (yyval.str) = (yyvsp[-1].str); }
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 289 "parser.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 290 "parser.y" /* yacc.c:1646  */
    { (yyval.str) = null; }
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 293 "parser.y" /* yacc.c:1646  */
    { (yyval.str) = null; }
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 294 "parser.y" /* yacc.c:1646  */
    { (yyval.str) = null; }
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 295 "parser.y" /* yacc.c:1646  */
    { (yyval.str) = null; }
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 296 "parser.y" /* yacc.c:1646  */
    { (yyval.str) = null; }
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 297 "parser.y" /* yacc.c:1646  */
    { (yyval.str) = null; }
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 298 "parser.y" /* yacc.c:1646  */
    { (yyval.str) = null; }
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 299 "parser.y" /* yacc.c:1646  */
    { (yyval.str) = null; }
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 300 "parser.y" /* yacc.c:1646  */
    { (yyval.str) = null; }
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 301 "parser.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[-1].str); }
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 302 "parser.y" /* yacc.c:1646  */
    { (yyval.str) = null; }
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 303 "parser.y" /* yacc.c:1646  */
    { (yyval.str) = null; }
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 304 "parser.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 314 "parser.y" /* yacc.c:1646  */
    { while1(); }
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 314 "parser.y" /* yacc.c:1646  */
    {while2();}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 314 "parser.y" /* yacc.c:1646  */
    {while3();}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 317 "parser.y" /* yacc.c:1646  */
    {dowhile1();}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 317 "parser.y" /* yacc.c:1646  */
    {dowhile2();}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 321 "parser.y" /* yacc.c:1646  */
    { for1(); }
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 321 "parser.y" /* yacc.c:1646  */
    { for2(); }
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 321 "parser.y" /* yacc.c:1646  */
    { for3();}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 321 "parser.y" /* yacc.c:1646  */
    { for4(); }
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 325 "parser.y" /* yacc.c:1646  */
    { if1(); }
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 325 "parser.y" /* yacc.c:1646  */
    { if3(); }
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 327 "parser.y" /* yacc.c:1646  */
    {if2();}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 332 "parser.y" /* yacc.c:1646  */
    { insert((yyvsp[-5].str),STRUCT,g_addr,0,0,(yyvsp[-3].iValue)); g_addr+=4; }
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1909 "y.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 339 "parser.y" /* yacc.c:1906  */


#include "lex.yy.c"
#include "ctype.h"

int main(int argc,char *argv[])
{
	FILE *file;
		file = fopen(argv[1], "r");
		if (!file)
		{
			fprintf(stderr, "Could not open %s\n", argv[1]);
			exit(1);
		}
		yyin = file;
	cscope.push(0);
	if(!yyparse())
		{
		printf("\nParsing done\n");
		printsym();
		}
	else
		printf("\nParsing failed\n");

	fclose(yyin);
	clearsym();
	return 0;
}

void yyerror(char *s)
{
	printf("%d 	:	%s  %s \n",yylineno,s,yytext);
	return;
}
