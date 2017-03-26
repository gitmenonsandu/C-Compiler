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

	#include <math.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include "symbol.cpp"
	#include "icg.c"
	#include "semantic.cpp"
	int g_addr = 100;

	extern "C" {
		int yylex();
		void yyerror(char *);
	}
	

#line 82 "y.tab.c" /* yacc.c:339  */

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
    ASSIGN = 284,
    MUL_ASSIGN = 285,
    SUB_ASSIGN = 286,
    DIV_ASSIGN = 287,
    ADD_ASSIGN = 288,
    ARRAY = 289,
    FUNCTION = 290,
    MAIN = 291,
    GT = 292,
    LT = 293,
    LE = 294,
    GE = 295,
    NE = 296,
    EQ = 297,
    AND = 298,
    OR = 299
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
#define ASSIGN 284
#define MUL_ASSIGN 285
#define SUB_ASSIGN 286
#define DIV_ASSIGN 287
#define ADD_ASSIGN 288
#define ARRAY 289
#define FUNCTION 290
#define MAIN 291
#define GT 292
#define LT 293
#define LE 294
#define GE 295
#define NE 296
#define EQ 297
#define AND 298
#define OR 299

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 42 "parser.y" /* yacc.c:355  */

 		int iValue; /* integer value */
 		char *str; /* identifier name */
	

#line 213 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 230 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   274

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  176

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

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
      52,    53,    47,    45,    50,    46,     2,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    49,
       2,    51,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,    57,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    49,    49,    50,    51,    52,    56,    60,    61,    62,
      63,    65,    66,    70,    70,    70,    71,    72,    73,    74,
      75,    78,    79,    80,    81,    82,    87,    87,    97,    98,
      99,   100,   101,   102,   105,   105,   113,   113,   121,   121,
     129,   129,   137,   141,   146,   151,   156,   157,   161,   162,
     166,   166,   171,   177,   178,   181,   182,   185,   188,   191,
     192,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   208,   209,   210,   214,   214,   214,   217,   218,
     221,   221,   222,   222,   226,   226,   226,   226,   229,   230,
     234,   234,   235,   235,   237,   237,   238,   242,   246
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
  "CONTINUE", "PRINTF", "SCANF", "STRING", "PREPROC", "ASSIGN",
  "MUL_ASSIGN", "SUB_ASSIGN", "DIV_ASSIGN", "ADD_ASSIGN", "ARRAY",
  "FUNCTION", "MAIN", "GT", "LT", "LE", "GE", "NE", "EQ", "AND", "OR",
  "'+'", "'-'", "'*'", "'/'", "';'", "','", "'='", "'('", "')'", "'['",
  "']'", "'{'", "'}'", "$accept", "start", "Declaration", "Assignment",
  "$@1", "$@2", "assign_operator", "Expr", "$@3", "RelOP", "Expression",
  "$@4", "$@5", "$@6", "$@7", "FunctionCall", "ArrayUsage", "$@8",
  "Function", "ArgListOpt", "ArgList", "Arg", "CompoundStmt", "StmtList",
  "Stmt", "Type", "WhileStmt", "$@9", "$@10", "WhileCon", "DoWhileStmt",
  "$@11", "$@12", "ForStmt", "$@13", "$@14", "$@15", "ForCon", "IfStmt",
  "$@16", "$@17", "Else", "$@18", "StructStmt", "PrintFunc", YY_NULLPTR
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
     295,   296,   297,   298,   299,    43,    45,    42,    47,    59,
      44,    61,    40,    41,    91,    93,   123,   125
};
# endif

#define YYPACT_NINF -112

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-112)))

#define YYTABLE_NINF -95

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      86,  -112,    -5,   -48,     3,  -112,  -112,  -112,    86,    19,
      86,   -24,   -15,    80,    86,    56,    14,   124,    29,    42,
      12,   124,    22,  -112,  -112,  -112,  -112,  -112,  -112,  -112,
    -112,  -112,  -112,  -112,    36,  -112,    85,    21,    87,  -112,
      53,  -112,    42,  -112,    15,  -112,    36,  -112,   144,   -32,
    -112,  -112,    36,   102,  -112,  -112,   144,  -112,  -112,  -112,
      36,    78,   124,    98,  -112,  -112,  -112,  -112,    27,    35,
    -112,    91,   102,  -112,    51,  -112,    36,    36,    36,    36,
      48,   144,  -112,    65,    93,    93,  -112,  -112,  -112,  -112,
    -112,  -112,   173,   101,  -112,     9,   107,    74,   111,   112,
     110,  -112,  -112,  -112,  -112,   124,  -112,  -112,  -112,  -112,
    -112,    36,   113,  -112,   114,   124,   225,    48,  -112,  -112,
     137,   115,   219,    36,  -112,  -112,   151,   153,   118,   117,
    -112,  -112,  -112,  -112,  -112,  -112,  -112,   122,   129,   127,
     128,   132,   225,    48,    36,  -112,    36,    36,    36,  -112,
    -112,   167,  -112,   102,   199,  -112,   140,   141,   181,  -112,
    -112,  -112,   150,   152,   155,    48,   124,  -112,  -112,  -112,
    -112,   154,   199,  -112,  -112,  -112
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    12,    13,    20,     0,    72,    73,    74,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     1,     3,     7,     8,    22,    23,
      24,    25,     9,    21,     0,     2,    13,     0,     0,    11,
      13,    17,     0,    48,     0,    14,     0,    18,     0,    45,
      43,    44,     0,    16,    47,    46,    54,     6,    10,    49,
       0,     0,     0,     0,    34,    36,    38,    40,     0,    53,
      56,     0,    15,    51,     0,    42,     0,     0,     0,     0,
       0,     0,    57,     0,    35,    37,    39,    41,    60,    52,
      55,    97,     0,     0,    75,     0,     0,    80,     0,     0,
       0,    67,    58,    63,    59,     0,    61,    62,    64,    65,
      66,     0,     0,    68,     0,     0,     0,     0,    70,    71,
       0,     0,     0,     0,    69,    84,     0,     0,     0,    90,
      32,    33,    28,    29,    30,    31,    26,     0,     0,     0,
       0,     0,     0,     0,     0,    76,     0,     0,     0,    98,
      91,    96,    93,    27,     0,    85,     0,     0,     0,    79,
      78,    77,     0,     0,     0,     0,     0,    81,    83,    95,
      86,     0,     0,    89,    88,    87
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -112,    57,    69,   -14,  -112,  -112,   186,   -96,  -112,  -112,
     -23,  -112,  -112,  -112,  -112,    16,     0,  -112,  -112,  -112,
    -112,   125,  -108,  -112,  -111,    28,  -112,  -112,  -112,  -112,
    -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,
    -112,  -112,  -112,  -112,  -112
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,   103,    11,    19,    60,    34,   121,   144,   136,
     122,    76,    77,    78,    79,    54,    55,    20,    14,    68,
      69,    70,    89,    92,   104,   105,   106,   112,   154,   161,
     107,   116,   117,   108,   138,   162,   171,   175,   109,   142,
     143,   152,   158,    16,   110
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    37,    21,    41,    44,   126,    22,    47,    13,   127,
      13,    53,    40,     3,    13,    38,    12,    42,    42,    24,
      18,    42,   -50,    61,    12,    26,    12,   137,    15,    63,
      12,   150,    40,     3,    27,   151,    15,    72,    15,    49,
      50,    51,    15,   160,   -19,    17,   159,    18,    74,   -50,
     155,   156,   157,    84,    85,    86,    87,   169,   113,    36,
       3,   174,    42,    39,   173,    23,    46,    25,    59,    10,
      57,    35,    28,    29,    30,    31,    62,    10,    48,    10,
      80,   114,    43,    10,    71,    81,    -5,     1,    52,     2,
       3,    37,    13,    33,    82,    42,     4,     5,     6,     7,
      83,   125,   -19,    17,    88,    38,   -19,   -50,    12,    71,
      28,    29,    30,    31,     8,    42,    13,    28,    29,    30,
      31,   153,    91,    64,    65,    66,    67,    40,     3,    32,
     -82,    33,    12,    73,   -19,    17,    58,    56,    33,   -50,
      66,    67,    13,    64,    65,    66,    67,    64,    65,    66,
      67,    75,   170,   111,    13,     5,     6,     7,    12,   115,
     118,   119,   120,   124,   128,   123,    42,   139,   129,   140,
      12,   141,    13,   -92,     1,   145,     2,     3,   146,   147,
     148,   149,   -94,     4,     5,     6,     7,    93,    12,    94,
      95,    96,    97,   163,   164,    98,   165,    99,   100,   166,
       1,   167,     2,     3,   168,    45,    90,   172,     0,     4,
       5,     6,     7,    93,     0,    94,    95,    96,    97,     0,
       0,    98,   101,    99,   100,     0,     1,     0,     2,     3,
     102,     0,     0,     0,     0,     4,     5,     6,     7,    93,
       0,    94,    95,    96,    97,     0,     0,    98,   101,    99,
     100,     0,     0,     0,     0,    88,   130,   131,   132,   133,
     134,   135,     0,     0,    64,    65,    66,    67,     0,     0,
       0,     0,     0,     0,   101
};

static const yytype_int16 yycheck[] =
{
       0,    15,    50,    17,    18,   116,     3,    21,     8,   117,
      10,    34,     3,     4,    14,    15,     0,    17,    18,     0,
      52,    21,    54,    46,     8,    49,    10,   123,     0,    52,
      14,   142,     3,     4,    49,   143,     8,    60,    10,     3,
       4,     5,    14,   154,    49,    50,   154,    52,    62,    54,
     146,   147,   148,    76,    77,    78,    79,   165,    49,     3,
       4,   172,    62,    49,   172,     8,    54,    10,    53,     0,
      49,    14,    30,    31,    32,    33,    48,     8,    56,    10,
      53,    95,    53,    14,    56,    50,     0,     1,    52,     3,
       4,   105,    92,    51,     3,    95,    10,    11,    12,    13,
      49,   115,    49,    50,    56,   105,    53,    54,    92,    81,
      30,    31,    32,    33,    28,   115,   116,    30,    31,    32,
      33,   144,    57,    45,    46,    47,    48,     3,     4,    49,
      56,    51,   116,    55,    49,    50,    49,    52,    51,    54,
      47,    48,   142,    45,    46,    47,    48,    45,    46,    47,
      48,    53,   166,    52,   154,    11,    12,    13,   142,    52,
      49,    49,    52,    49,    27,    52,   166,    16,    53,    16,
     154,    53,   172,    56,     1,    53,     3,     4,    49,    52,
      52,    49,    15,    10,    11,    12,    13,    14,   172,    16,
      17,    18,    19,    53,    53,    22,    15,    24,    25,    49,
       1,    49,     3,     4,    49,    19,    81,    53,    -1,    10,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    -1,
      -1,    22,    49,    24,    25,    -1,     1,    -1,     3,     4,
      57,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    22,    49,    24,
      25,    -1,    -1,    -1,    -1,    56,    37,    38,    39,    40,
      41,    42,    -1,    -1,    45,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,    10,    11,    12,    13,    28,    59,
      60,    61,    73,    74,    76,    83,   101,    50,    52,    62,
      75,    50,     3,    59,     0,    59,    49,    49,    30,    31,
      32,    33,    49,    51,    64,    59,     3,    61,    74,    49,
       3,    61,    74,    53,    61,    64,    54,    61,    56,     3,
       4,     5,    52,    68,    73,    74,    52,    49,    49,    53,
      63,    68,    83,    68,    45,    46,    47,    48,    77,    78,
      79,    83,    68,    55,    61,    53,    69,    70,    71,    72,
      53,    50,     3,    49,    68,    68,    68,    68,    56,    80,
      79,    57,    81,    14,    16,    17,    18,    19,    22,    24,
      25,    49,    57,    60,    82,    83,    84,    88,    91,    96,
     102,    52,    85,    49,    61,    52,    89,    90,    49,    49,
      52,    65,    68,    52,    49,    61,    82,    80,    27,    53,
      37,    38,    39,    40,    41,    42,    67,    65,    92,    16,
      16,    53,    97,    98,    66,    53,    49,    52,    52,    49,
      82,    80,    99,    68,    86,    65,    65,    65,   100,    80,
      82,    87,    93,    53,    53,    15,    49,    49,    49,    80,
      61,    94,    53,    80,    82,    95
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    59,    59,    59,    60,    60,    60,    60,
      60,    60,    60,    62,    63,    61,    61,    61,    61,    61,
      61,    64,    64,    64,    64,    64,    66,    65,    67,    67,
      67,    67,    67,    67,    69,    68,    70,    68,    71,    68,
      72,    68,    68,    68,    68,    68,    68,    68,    73,    73,
      75,    74,    76,    77,    77,    78,    78,    79,    80,    81,
      81,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    83,    83,    83,    85,    86,    84,    87,    87,
      89,    88,    90,    88,    92,    93,    94,    91,    95,    95,
      97,    96,    98,    96,   100,    99,    99,   101,   102
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     0,     3,     2,     2,     2,
       3,     2,     1,     0,     0,     5,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     0,     4,     1,     1,
       1,     1,     1,     1,     0,     4,     0,     4,     0,     4,
       0,     4,     3,     1,     1,     1,     1,     1,     3,     4,
       0,     5,     6,     1,     0,     3,     1,     2,     3,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       2,     2,     1,     1,     1,     0,     0,     7,     1,     1,
       0,     8,     0,     8,     0,     0,     0,    12,     1,     1,
       0,     6,     0,     6,     0,     4,     1,     7,     5
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
#line 57 "parser.y" /* yacc.c:1646  */
    { 
		insert((yyvsp[-1].str),(yyvsp[-2].iValue),g_addr); g_addr+=4;
	}
#line 1458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 63 "parser.y" /* yacc.c:1646  */
    { insert((yyvsp[-1].str),ARRAY,g_addr);
							insert((yyvsp[-1].str),(yyvsp[-2].iValue),g_addr); g_addr+=4; }
#line 1465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 70 "parser.y" /* yacc.c:1646  */
    { pushicg((yyvsp[0].str));}
#line 1471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 70 "parser.y" /* yacc.c:1646  */
    { pushicg((yyvsp[0].str)); }
#line 1477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 70 "parser.y" /* yacc.c:1646  */
    {codegen_assign();}
#line 1483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 73 "parser.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 1489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 78 "parser.y" /* yacc.c:1646  */
    { char assign[2] = "="; (yyval.str) = assign; }
#line 1495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 87 "parser.y" /* yacc.c:1646  */
    { { strcpy(tstack[++top], (yyvsp[0].str)); }}
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 88 "parser.y" /* yacc.c:1646  */
    {
		if(check((yyvsp[-3].str),(yyvsp[0].str)))
				printf("Type Mismatch %s %s \n",(yyvsp[-3].str),(yyvsp[0].str));
		else
			(yyval.str) = (yyvsp[-3].str);
		codegen();
	}
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 105 "parser.y" /* yacc.c:1646  */
    { strcpy(tstack[++top], "+"); }
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 106 "parser.y" /* yacc.c:1646  */
    { 
		if(check((yyvsp[-3].str),(yyvsp[0].str)))
			printf("Type Mismatch %s %s \n",(yyvsp[-3].str),(yyvsp[0].str));
		else
			(yyval.str) = (yyvsp[-3].str);
		codegen();
	}
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 113 "parser.y" /* yacc.c:1646  */
    { strcpy(tstack[++top], ""); }
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 114 "parser.y" /* yacc.c:1646  */
    { 
		if(check((yyvsp[-3].str),(yyvsp[0].str)))
			printf("Type Mismatch %s %s \n",(yyvsp[-3].str),(yyvsp[0].str));
		else
			(yyval.str) = (yyvsp[-3].str);
		codegen();
	}
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 121 "parser.y" /* yacc.c:1646  */
    { strcpy(tstack[++top], "*"); }
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 122 "parser.y" /* yacc.c:1646  */
    { 
		if(check((yyvsp[-3].str),(yyvsp[0].str)))
			printf("Type Mismatch %s %s \n",(yyvsp[-3].str),(yyvsp[0].str));
		else
			(yyval.str) = (yyvsp[-3].str);
		codegen();
	}
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 129 "parser.y" /* yacc.c:1646  */
    { strcpy(tstack[++top], "/"); }
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 130 "parser.y" /* yacc.c:1646  */
    { 
		if(check((yyvsp[-3].str),(yyvsp[0].str)))
			printf("Type Mismatch %s %s \n",(yyvsp[-3].str),(yyvsp[0].str));
		else
			(yyval.str) = (yyvsp[-3].str);
		codegen();
	}
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 138 "parser.y" /* yacc.c:1646  */
    { 
			(yyval.str) = (yyvsp[-1].str); 
		}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 142 "parser.y" /* yacc.c:1646  */
    { 
			(yyval.str) = (yyvsp[0].str);
			pushicg((yyvsp[0].str)); 
		}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 147 "parser.y" /* yacc.c:1646  */
    {
			(yyval.str) = (yyvsp[0].str); 
			pushicg((yyvsp[0].str)); 
		}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 152 "parser.y" /* yacc.c:1646  */
    { 
			(yyval.str) = (yyvsp[0].str); 
			pushicg((yyvsp[0].str)); 
		}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 156 "parser.y" /* yacc.c:1646  */
    { codegen_array(); }
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 166 "parser.y" /* yacc.c:1646  */
    { pushicg((yyvsp[0].str)); }
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 172 "parser.y" /* yacc.c:1646  */
    { 
		insert((yyvsp[-4].str),FUNCTION,g_addr); insert((yyvsp[-4].str),(yyvsp[-5].iValue),g_addr);g_addr+=4; 
	}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 214 "parser.y" /* yacc.c:1646  */
    { while1(); }
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 214 "parser.y" /* yacc.c:1646  */
    {while2();}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 217 "parser.y" /* yacc.c:1646  */
    {while3();}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 218 "parser.y" /* yacc.c:1646  */
    {while3();}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 221 "parser.y" /* yacc.c:1646  */
    {dowhile1();}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 221 "parser.y" /* yacc.c:1646  */
    {dowhile2();}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 222 "parser.y" /* yacc.c:1646  */
    {dowhile1();}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 222 "parser.y" /* yacc.c:1646  */
    {dowhile2();}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 226 "parser.y" /* yacc.c:1646  */
    { for1(); }
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 226 "parser.y" /* yacc.c:1646  */
    { for2(); }
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 226 "parser.y" /* yacc.c:1646  */
    { for3();}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 229 "parser.y" /* yacc.c:1646  */
    { for4(); }
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 230 "parser.y" /* yacc.c:1646  */
    { for4(); }
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 234 "parser.y" /* yacc.c:1646  */
    { if1(); }
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 234 "parser.y" /* yacc.c:1646  */
    { if3(); }
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 235 "parser.y" /* yacc.c:1646  */
    { if1(); }
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 237 "parser.y" /* yacc.c:1646  */
    {if2();}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 237 "parser.y" /* yacc.c:1646  */
    {if3();}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 238 "parser.y" /* yacc.c:1646  */
    {if3();}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 242 "parser.y" /* yacc.c:1646  */
    { insert((yyvsp[-5].str),STRUCT,g_addr); g_addr+=4; }
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1764 "y.tab.c" /* yacc.c:1646  */
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
#line 249 "parser.y" /* yacc.c:1906  */


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
