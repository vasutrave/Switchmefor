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
#line 1 "cparser.y" /* yacc.c:339  */

#include"definition.h"

int yylex();
int yyerror(char* s);
struct global my,check;
int open;
int jumpcount,returntype,returnpointer;
char returnchar[100];
int Totalerrors,funcount;
struct allFunc **ALL;
struct structure
{
	char in[100];
	int s;
}maxi[100];

#line 84 "y.tab.c" /* yacc.c:339  */

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

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    IDENTIFIER = 258,
    CONSTANT = 259,
    STRING_LITERAL = 260,
    SIZEOF = 261,
    INC_OP = 262,
    DEC_OP = 263,
    LE_OP = 264,
    GE_OP = 265,
    EQ_OP = 266,
    NE_OP = 267,
    AND_OP = 268,
    OR_OP = 269,
    FOR = 270,
    CONTINUE = 271,
    BREAK = 272,
    RETURN = 273,
    PRINT = 274,
    CHAR = 275,
    INT = 276,
    FLOAT = 277,
    VOID = 278
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define SIZEOF 261
#define INC_OP 262
#define DEC_OP 263
#define LE_OP 264
#define GE_OP 265
#define EQ_OP 266
#define NE_OP 267
#define AND_OP 268
#define OR_OP 269
#define FOR 270
#define CONTINUE 271
#define BREAK 272
#define RETURN 273
#define PRINT 274
#define CHAR 275
#define INT 276
#define FLOAT 277
#define VOID 278

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 27 "cparser.y" /* yacc.c:355  */

        struct AST *node;	//non-terminals

        struct terminal{	//terminals
                        char *text;
                        int type;
                        int line;
        } Sval;


#line 181 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 198 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   249

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  146

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   278

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,     2,     2,     2,    39,    37,     2,
      28,    29,    36,    33,    26,    34,     2,    38,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    27,
      40,    32,    41,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    24,     2,    25,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    30,    42,    31,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    83,    83,    86,    90,    97,   100,   108,   110,   111,
     118,   129,   149,   154,   155,   156,   157,   158,   159,   162,
     167,   175,   190,   210,   216,   223,   235,   240,   241,   245,
     246,   252,   268,   275,   281,   288,   289,   308,   328,   341,
     361,   362,   363,   364,   365,   368,   369,   394,   395,   407,
     420,   433,   434,   446,   463,   464,   477,   491,   503,   518,
     519,   532,   547,   548,   565,   566,   580,   581,   595,   596,
     611,   614,   615,   645,   646,   654,   664,   671,   675,   694,
     712,   713,   714,   715
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "INC_OP", "DEC_OP", "LE_OP", "GE_OP",
  "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "FOR", "CONTINUE", "BREAK",
  "RETURN", "PRINT", "CHAR", "INT", "FLOAT", "VOID", "'['", "']'", "','",
  "';'", "'('", "')'", "'{'", "'}'", "'='", "'+'", "'-'", "'!'", "'*'",
  "'&'", "'/'", "'%'", "'<'", "'>'", "'|'", "$accept", "var", "variables",
  "type", "declaration", "print", "myfunction", "statement", "istart",
  "iend", "iteration_statement", "jump_statement", "ass_operator",
  "expression_statement", "arg_list", "starting", "main_exp", "unary_op",
  "unary_exp", "mul_div_mod", "plus_minus", "lt_gt_lte_gte", "eq_neq",
  "and", "or", "andand", "oror", "conditional_exp", "expression",
  "statement_list", "openB", "closeB", "body", "function_name", "function",
  "program", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,    91,    93,    44,    59,    40,    41,
     123,   125,    61,    43,    45,    33,    42,    38,    47,    37,
      60,    62,   124
};
# endif

#define YYPACT_NINF -126

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-126)))

#define YYTABLE_NINF -79

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      21,  -126,  -126,  -126,     9,  -126,   -11,  -126,     4,   -10,
    -126,    -5,    41,  -126,  -126,  -126,    58,    43,  -126,    47,
      48,    57,  -126,  -126,   151,  -126,    59,    -9,  -126,  -126,
      61,    63,     3,    64,  -126,   212,  -126,  -126,  -126,  -126,
    -126,    43,  -126,    67,  -126,  -126,  -126,  -126,  -126,  -126,
    -126,   212,    71,    33,    42,    23,    17,    54,    65,    92,
      96,  -126,    79,    81,  -126,   109,   212,   172,   186,  -126,
    -126,    95,    21,    94,  -126,  -126,  -126,   212,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   212,   212,  -126,  -126,  -126,  -126,    99,   100,  -126,
      -3,  -126,   186,  -126,   101,  -126,  -126,  -126,  -126,  -126,
    -126,    33,    33,    42,    42,    42,    42,    23,    23,    17,
      54,    65,    92,  -126,   102,   212,  -126,   199,   125,   212,
    -126,   108,   103,   111,   104,  -126,   151,   108,  -126,  -126,
     116,   151,  -126,  -126,   116,  -126
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     8,     7,     9,     0,    80,     0,    81,     0,     2,
       5,     0,     0,     1,    82,    83,     0,     0,    10,     0,
       0,     2,     6,    75,     0,    79,     3,    31,    32,    33,
       0,     0,     0,     0,    27,     0,    40,    41,    42,    43,
      44,     0,    17,     0,    18,    73,    15,    14,    16,    35,
      45,     0,    47,    51,    54,    59,    62,    64,    66,    68,
      70,    71,     0,     0,    13,     0,     0,     0,     0,    23,
      24,     0,     0,     0,    12,    46,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,    76,    74,    77,     0,     0,    38,
       0,    29,     0,    25,     0,    34,    72,    48,    49,    50,
      47,    52,    53,    57,    58,    55,    56,    60,    61,    63,
      65,    67,    69,     4,    36,     0,    39,     0,     0,     0,
      30,     0,     0,     0,     0,    19,     0,     0,    11,    37,
       0,     0,    20,    21,     0,    22
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -126,   113,  -126,     2,     5,  -126,  -126,   -62,     8,    13,
    -126,  -126,  -126,   -59,  -126,  -126,  -126,  -126,   -31,    -2,
     -18,     0,    52,    68,    51,    56,  -126,  -126,   -32,  -125,
    -126,  -126,   140,  -126,   152,  -126
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    41,    42,    43,    44,    45,   136,   143,
      46,    47,    77,    48,   100,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      24,    96,    64,     6,     7,     8
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,    95,     4,    73,    13,     5,    27,    28,    29,   102,
       4,   140,     9,    14,    16,    66,   144,    12,   -78,    67,
      75,    17,    18,   125,     1,     2,   126,     3,    87,    88,
      70,    35,    83,    84,    98,   101,    36,    37,    38,    39,
      40,     1,     2,   127,     3,   106,    21,   107,   108,   109,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,    20,    85,    86,   113,   114,   115,   116,    78,
      19,    79,    80,    26,   104,    81,    82,    23,    95,   111,
     112,    16,    95,    65,    27,    28,    29,   117,   118,    68,
      69,    89,    72,   130,    74,   132,    30,   134,    31,    32,
      33,     1,     2,    76,     3,    91,    93,    90,    34,    35,
      92,    23,    94,    97,    36,    37,    38,    39,    40,    27,
      28,    29,   103,   105,   123,   124,   129,   128,   133,   139,
      22,    30,   137,    31,    32,    33,     1,     2,   135,     3,
     138,   119,   121,    34,    35,   141,    23,   142,   122,    36,
      37,    38,    39,    40,    27,    28,    29,   145,   120,    25,
      15,     0,     0,     0,     0,     0,    30,     0,    31,    32,
      33,     1,     2,     0,     3,    27,    28,    29,    34,    35,
       0,    23,     0,     0,    36,    37,    38,    39,    40,    27,
      28,    29,     0,     0,     0,     0,     0,     0,     0,     0,
      35,    99,    27,    28,    29,    36,    37,    38,    39,    40,
       0,     0,     0,    34,    35,    27,    28,    29,     0,    36,
      37,    38,    39,    40,     0,     0,     0,    35,   131,     0,
       0,     0,    36,    37,    38,    39,    40,     0,     0,     0,
      35,     0,     0,     0,     0,    36,    37,    38,    39,    40
};

static const yytype_int16 yycheck[] =
{
      32,    63,     0,    35,     0,     0,     3,     4,     5,    68,
       8,   136,     3,     8,    24,    24,   141,    28,    28,    28,
      51,    26,    27,    26,    20,    21,    29,    23,    11,    12,
      27,    28,     9,    10,    66,    67,    33,    34,    35,    36,
      37,    20,    21,   102,    23,    77,     3,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,     4,    40,    41,    83,    84,    85,    86,    36,
      29,    38,    39,    25,    72,    33,    34,    30,   140,    81,
      82,    24,   144,    24,     3,     4,     5,    87,    88,    28,
      27,    37,    28,   125,    27,   127,    15,   129,    17,    18,
      19,    20,    21,    32,    23,    13,    27,    42,    27,    28,
      14,    30,    31,     4,    33,    34,    35,    36,    37,     3,
       4,     5,    27,    29,    25,    25,    24,    26,     3,    25,
      17,    15,    29,    17,    18,    19,    20,    21,    30,    23,
      29,    89,    91,    27,    28,   137,    30,    31,    92,    33,
      34,    35,    36,    37,     3,     4,     5,   144,    90,    19,
       8,    -1,    -1,    -1,    -1,    -1,    15,    -1,    17,    18,
      19,    20,    21,    -1,    23,     3,     4,     5,    27,    28,
      -1,    30,    -1,    -1,    33,    34,    35,    36,    37,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,     3,     4,     5,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    27,    28,     3,     4,     5,    -1,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    28,    29,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    20,    21,    23,    46,    47,    76,    77,    78,     3,
      44,    45,    28,     0,    47,    77,    24,    26,    27,    29,
       4,     3,    44,    30,    73,    75,    25,     3,     4,     5,
      15,    17,    18,    19,    27,    28,    33,    34,    35,    36,
      37,    46,    47,    48,    49,    50,    53,    54,    56,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    75,    24,    24,    28,    28,    27,
      27,    71,    28,    71,    27,    61,    32,    55,    36,    38,
      39,    33,    34,     9,    10,    40,    41,    11,    12,    37,
      42,    13,    14,    27,    31,    50,    74,     4,    71,    29,
      57,    71,    56,    27,    46,    29,    71,    61,    61,    61,
      61,    62,    62,    63,    63,    63,    63,    64,    64,    65,
      66,    67,    68,    25,    25,    26,    29,    56,    26,    24,
      71,    29,    71,     3,    71,    30,    51,    29,    29,    25,
      72,    51,    31,    52,    72,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    44,    44,    45,    45,    46,    46,    46,
      47,    48,    49,    50,    50,    50,    50,    50,    50,    51,
      52,    53,    53,    54,    54,    54,    55,    56,    56,    57,
      57,    58,    58,    58,    58,    59,    59,    59,    59,    59,
      60,    60,    60,    60,    60,    61,    61,    62,    62,    62,
      62,    63,    63,    63,    64,    64,    64,    64,    64,    65,
      65,    65,    66,    66,    67,    67,    68,    68,    69,    69,
      70,    71,    71,    72,    72,    73,    74,    75,    76,    77,
      78,    78,    78,    78
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     4,     7,     1,     3,     1,     1,     1,
       3,     6,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     8,     9,     2,     2,     3,     1,     1,     2,     1,
       3,     1,     1,     1,     3,     1,     4,     7,     3,     4,
       1,     1,     1,     1,     1,     1,     2,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     3,     1,     2,     1,     1,     3,     2,     4,
       1,     1,     2,     2
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
        case 2:
#line 83 "cparser.y" /* yacc.c:1646  */
    {(yyval.node) = MakeNode(0); (yyval.node)->type = (yyvsp[0].Sval).type; strcpy((yyval.node)->lexeme,(yyvsp[0].Sval).text);
								(yyval.node)->array = 0;
								}
#line 1402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 87 "cparser.y" /* yacc.c:1646  */
    {(yyval.node) = MakeNode(0); (yyval.node)->type = (yyvsp[-3].Sval).type; strcpy((yyval.node)->lexeme,(yyvsp[-3].Sval).text);
								(yyval.node)->array = 1; (yyval.node)->dim1 = atoi((yyvsp[-1].Sval).text);
								}
#line 1410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 91 "cparser.y" /* yacc.c:1646  */
    {(yyval.node) = MakeNode(0); (yyval.node)->type = (yyvsp[-6].Sval).type; strcpy((yyval.node)->lexeme,(yyvsp[-6].Sval).text);
								(yyval.node)->array = 2; (yyval.node)->dim1 = atoi((yyvsp[-4].Sval).text); (yyval.node)->dim2 = atoi((yyvsp[-1].Sval).text);
							}
#line 1418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 97 "cparser.y" /* yacc.c:1646  */
    {
									(yyval.node) = (yyvsp[0].node); (yyval.node)->pointer = 0;
								}
#line 1426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 100 "cparser.y" /* yacc.c:1646  */
    {
									(yyval.node) = MakeNode(2); (yyval.node)->type = 100; strcpy((yyval.node)->lexeme,",");
									(yyval.node)->child[0] = (yyvsp[-2].node); (yyvsp[-2].node)->parent = (yyval.node); 
									(yyval.node)->child[1] = (yyvsp[0].node); (yyvsp[0].node)->parent = (yyval.node);  (yyvsp[0].node)->pointer = 0; 
							   }
#line 1436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 108 "cparser.y" /* yacc.c:1646  */
    {(yyval.node) = MakeNode(0); (yyval.node)->type = (yyvsp[0].Sval).type; strcpy((yyval.node)->lexeme,(yyvsp[0].Sval).text);}
#line 1442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 110 "cparser.y" /* yacc.c:1646  */
    {(yyval.node) = MakeNode(0); (yyval.node)->type = (yyvsp[0].Sval).type; strcpy((yyval.node)->lexeme,(yyvsp[0].Sval).text);}
#line 1448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 111 "cparser.y" /* yacc.c:1646  */
    {(yyval.node) = MakeNode(0); (yyval.node)->type = (yyvsp[0].Sval).type; strcpy((yyval.node)->lexeme,(yyvsp[0].Sval).text);}
#line 1454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 118 "cparser.y" /* yacc.c:1646  */
    {
								my.type = (yyvsp[-2].node)->type; my.struct_member = 0; addVar(my,(yyvsp[-1].node),currentT);
							}
#line 1462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 130 "cparser.y" /* yacc.c:1646  */
    {
								(yyval.node) = MakeNode(2); (yyval.node)->type = 4; strcpy((yyval.node)->lexeme,(yyvsp[-5].Sval).text);
								(yyval.node)->child[0] = (yyvsp[-3].node); (yyvsp[-3].node)->parent = (yyval.node);
								(yyval.node)->child[1] = MakeNode(0); strcpy((yyval.node)->child[1]->lexeme,(yyvsp[-1].Sval).text);
								(yyval.node)->child[1]->type = (yyvsp[-1].Sval).type;
								(yyval.node)->child[1]->parent = (yyval.node);

								check.array = 0; check.struct_member = 0; 
								struct symbolTable *temp = FindSymbol((yyvsp[-1].Sval).text,check,currentT);
								if(temp==NULL) printf("not found %s\n",(yyvsp[-1].Sval).text);	
								else if(temp->type != (yyvsp[-3].node)->type) printf("PRINT type mismatch\n");
								(yyval.node)->child[1]->where = temp;
							}
#line 1480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 149 "cparser.y" /* yacc.c:1646  */
    {
						(yyval.node) = (yyvsp[-1].node);
					}
#line 1488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 154 "cparser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 155 "cparser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 156 "cparser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 157 "cparser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 158 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=MakeNode(0); (yyval.node)->type = -1;strcpy((yyval.node)->lexeme,"dec");}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 159 "cparser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 162 "cparser.y" /* yacc.c:1646  */
    {
						jumpcount++;
						currentT = EnterScope(currentT);
					}
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 167 "cparser.y" /* yacc.c:1646  */
    {
						currentT = ExitScope(currentT);
					//	$$ = MakeNode(0); $$->type = 100; strcpy($$->lexeme,"}");
						jumpcount--;
						
					}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 176 "cparser.y" /* yacc.c:1646  */
    {
      						(yyval.node) = MakeNode(3); (yyval.node)->type = (yyvsp[-7].Sval).type; strcpy((yyval.node)->lexeme,(yyvsp[-7].Sval).text);
      						(yyval.node)->child[0] = (yyvsp[-5].node); (yyvsp[-5].node)->parent = (yyval.node); 
      						(yyval.node)->child[1] = (yyvsp[-4].node); (yyvsp[-4].node)->parent = (yyval.node);
      						(yyval.node)->child[2] = (yyvsp[-1].node); (yyvsp[-1].node)->parent = (yyval.node);
      					//	$$->child[3] = $8; $8->parent = $$;
      						(yyval.node)->array = 11;				
      					
      						(yyval.node)->scope  = (yyvsp[-1].node)->scope;
      						(yyval.node)->scopenode = (yyvsp[-1].node)->scopenode;
      						propagate((yyvsp[-5].node),(yyvsp[-1].node)->scope,(yyvsp[-1].node)->scopenode);
      						propagate((yyvsp[-4].node),(yyvsp[-1].node)->scope,(yyvsp[-1].node)->scopenode);

      					}
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 191 "cparser.y" /* yacc.c:1646  */
    {
      						(yyval.node) = MakeNode(4); (yyval.node)->type = (yyvsp[-8].Sval).type; strcpy((yyval.node)->lexeme,(yyvsp[-8].Sval).text);
      						(yyval.node)->child[0] = (yyvsp[-6].node); (yyvsp[-6].node)->parent = (yyval.node); 
      						(yyval.node)->child[1] = (yyvsp[-5].node); (yyvsp[-5].node)->parent = (yyval.node);
      						(yyval.node)->child[2] = (yyvsp[-4].node); (yyvsp[-4].node)->parent = (yyval.node);
      						(yyval.node)->child[3] = (yyvsp[-1].node); (yyvsp[-1].node)->parent = (yyval.node);
      				//		$$->child[4] = $9; $9->parent = $$;
      						(yyval.node)->array = 12;				

      						(yyval.node)->scope = (yyvsp[-1].node)->scope;
      						(yyval.node)->scopenode = (yyvsp[-1].node)->scopenode;
      						
      						propagate((yyvsp[-6].node),(yyvsp[-1].node)->scope,(yyvsp[-1].node)->scopenode);
      						propagate((yyvsp[-5].node),(yyvsp[-1].node)->scope,(yyvsp[-1].node)->scopenode);
      						propagate((yyvsp[-4].node),(yyvsp[-1].node)->scope,(yyvsp[-1].node)->scopenode);
      					}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 210 "cparser.y" /* yacc.c:1646  */
    { (yyval.node) = MakeNode(0); (yyval.node)->type = (yyvsp[-1].Sval).type; strcpy((yyval.node)->lexeme,(yyvsp[-1].Sval).text);
        								if(jumpcount<=0){
        									printf("BREAK without iteration_statement\n");
        									Totalerrors++;
        								}
        							}
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 216 "cparser.y" /* yacc.c:1646  */
    { (yyval.node) = MakeNode(0); (yyval.node)->type = (yyvsp[-1].Sval).type; strcpy((yyval.node)->lexeme,(yyvsp[-1].Sval).text);

        								if(returntype != VOID ){
        									printf("Invalid Return type\n");
        									Totalerrors++;
        								}	
        							}
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 223 "cparser.y" /* yacc.c:1646  */
    { (yyval.node) = MakeNode(1); (yyval.node)->type = (yyvsp[-2].Sval).type; strcpy((yyval.node)->lexeme,(yyvsp[-2].Sval).text);
        								(yyval.node)->child[0] = (yyvsp[-1].node); (yyvsp[-1].node)->parent = (yyval.node);

        								if(returntype != (yyvsp[-1].node)->type){
        									printf("Invalid Return type\n");
        									Totalerrors++;
        								}
        							}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 235 "cparser.y" /* yacc.c:1646  */
    { (yyval.node) = MakeNode(2); (yyval.node)->type = 100; strcpy((yyval.node)->lexeme,"=");}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 240 "cparser.y" /* yacc.c:1646  */
    {(yyval.node) = MakeNode(0); (yyval.node)->type = 100; strcpy((yyval.node)->lexeme,";");}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 241 "cparser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 245 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 246 "cparser.y" /* yacc.c:1646  */
    {(yyval.node) = MakeNode(2); (yyval.node)->type = 100; strcpy((yyval.node)->lexeme,",");
									 (yyval.node)->child[0] = (yyvsp[-2].node); (yyvsp[-2].node)->parent = (yyval.node);
									 (yyval.node)->child[1] = (yyvsp[0].node); (yyvsp[0].node)->parent = (yyval.node);}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 252 "cparser.y" /* yacc.c:1646  */
    {(yyval.node) = MakeNode(0); (yyval.node)->type = (yyvsp[0].Sval).type; strcpy((yyval.node)->lexeme,(yyvsp[0].Sval).text);

        								check.array = 0; check.struct_member = 0; 
        								//printf("parser :: %s %d\n",$1.text,$1.type);
        								struct symbolTable *temp = FindSymbol((yyvsp[0].Sval).text,check,currentT);
        								if(temp==NULL) printf("not found %s\n",(yyvsp[0].Sval).text);
        								else{
        										(yyval.node)->type = temp->type;
        										(yyval.node)->pointer = temp->pointer;
        									}
        								(yyval.node)->array = 300;	
        								(yyval.node)->where = temp;
        								(yyval.node)->lval = 1;


        							}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 268 "cparser.y" /* yacc.c:1646  */
    {(yyval.node) = MakeNode(0); (yyval.node)->type = (yyvsp[0].Sval).type; strcpy((yyval.node)->lexeme,(yyvsp[0].Sval).text);

        								(yyval.node)->type = (yyvsp[0].Sval).type;
        								(yyval.node)->pointer = 0;
        								(yyval.node)->lval = 0;
        								(yyval.node)->array  = 200;
        							}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 275 "cparser.y" /* yacc.c:1646  */
    {(yyval.node) = MakeNode(0); (yyval.node)->type = (yyvsp[0].Sval).type; strcpy((yyval.node)->lexeme,(yyvsp[0].Sval).text);

        								// not sure
        								(yyval.node)->lval = 0;
        								(yyval.node)->pointer = 0;
        							}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 281 "cparser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);

        								//$$->type = $2->type;
        							}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 288 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 289 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=MakeNode(1); (yyval.node)->type = (yyvsp[-3].Sval).type; strcpy((yyval.node)->lexeme,(yyvsp[-3].Sval).text);
										  (yyval.node)->child[0] = (yyvsp[-1].node); (yyvsp[-1].node)->parent = (yyval.node); (yyval.node)->array=1;

										  check.array = 1; check.struct_member = 0;
										  struct symbolTable *temp = FindSymbol((yyvsp[-3].Sval).text,check,currentT);
        								  if(temp==NULL) printf("not found %s\n",(yyvsp[-3].Sval).text);
        								  else{
	        								  if((yyvsp[-1].node)->type != INT){
	        								  	printf("Array index must be integer\n");
	        								  	Totalerrors++;
	        								  }
	        								  else
	        								  	(yyval.node)->type = temp->type;
	        								  	(yyval.node)->pointer = temp->pointer;
        									}
        									(yyval.node)->array = 301;
        									(yyval.node)->where = temp;
        									(yyval.node)->lval = 1;	
										}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 308 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=MakeNode(2); (yyval.node)->type = (yyvsp[-6].Sval).type; strcpy((yyval.node)->lexeme,(yyvsp[-6].Sval).text);
										  			(yyval.node)->child[0] = (yyvsp[-4].node); (yyvsp[-4].node)->parent = (yyval.node); 
										  			(yyval.node)->child[1] = (yyvsp[-1].node); (yyvsp[-1].node)->parent = (yyval.node); (yyval.node)->array=2;
										  			
										  			check.array = 2; check.struct_member = 0;
										  			struct symbolTable *temp = FindSymbol((yyvsp[-6].Sval).text,check,currentT);
        											if(temp==NULL) printf("not found %s\n",(yyvsp[-6].Sval).text);
        											else{
        											if((yyvsp[-4].node)->type != INT || (yyvsp[-1].node)->type != INT){
			        								  	printf("Array index must be integer\n");
			        								  	Totalerrors++;
			        								  }
			        								  else
			        								  	(yyval.node)->type = temp->type;
			        								  (yyval.node)->pointer = temp->pointer;
			        								}
			        								(yyval.node)->array = 302;
			        								(yyval.node)->where = temp;
			        								(yyval.node)->lval = 1;
										  		}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 328 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=MakeNode(0); (yyval.node)->type = (yyvsp[-2].Sval).type; strcpy((yyval.node)->lexeme,(yyvsp[-2].Sval).text);
										 (yyval.node)->array = 3;

										 	check.array = 3; check.struct_member = 0;
										 	struct symbolTable *temp = FindSymbol((yyvsp[-2].Sval).text,check,currentT);
        									if(temp==NULL) printf("not found %s\n",(yyvsp[-2].Sval).text);
        									else{
        										(yyval.node)->type = temp->type;
        										(yyval.node)->pointer = temp->pointer;
        									}
        									(yyval.node)->where = temp;
        									(yyval.node)->lval = 0;
										}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 341 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=MakeNode(1); (yyval.node)->type = (yyvsp[-3].Sval).type; strcpy((yyval.node)->lexeme,(yyvsp[-3].Sval).text);
										 (yyval.node)->array = 4; (yyval.node)->child[0]= (yyvsp[-1].node); (yyvsp[-1].node)->parent = (yyval.node);

										 check.array = 4; check.struct_member = 0;
										 struct symbolTable *temp = FindSymbol((yyvsp[-3].Sval).text,check,currentT);
        								 if(temp==NULL) printf("not found %s\n",(yyvsp[-3].Sval).text);

        								 else{
        										(yyval.node)->type = temp->type;
        										(yyval.node)->pointer = temp->pointer;
        									}
        									// check definition of function 
        									(yyval.node)->where = temp;
        									(yyval.node)->lval = 0;
							if(check_arg((yyvsp[-3].Sval).text,(yyvsp[-1].node))){
								printf("Argument type does not match\n");
							}	///calling parameter
										}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 361 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=MakeNode(0); (yyval.node)->type=100; strcpy((yyval.node)->lexeme,"+"); }
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 362 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=MakeNode(0); (yyval.node)->type=100; strcpy((yyval.node)->lexeme,"-"); }
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 363 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=MakeNode(0); (yyval.node)->type=100; strcpy((yyval.node)->lexeme,"!"); }
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 364 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=MakeNode(0); (yyval.node)->type=100; strcpy((yyval.node)->lexeme,"*"); }
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 365 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=MakeNode(0); (yyval.node)->type=100; strcpy((yyval.node)->lexeme,"&"); }
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 368 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 369 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=MakeNode(1); (yyval.node)->type = (yyvsp[-1].node)->type;	strcpy((yyval.node)->lexeme,(yyvsp[-1].node)->lexeme);
							 (yyval.node)->child[0]=(yyvsp[0].node); (yyvsp[0].node)->parent = (yyval.node); 
							 
							 	(yyval.node)->lval = 0;
							 	if(strcmp((yyvsp[-1].node)->lexeme,"+")==0 ||strcmp((yyvsp[-1].node)->lexeme,"-")==0||strcmp((yyvsp[-1].node)->lexeme,"!")==0)
							 		(yyval.node)->type = (yyvsp[0].node)->type;
							 	else if(strcmp((yyvsp[-1].node)->lexeme,"~")==0 && (yyvsp[0].node)->type == INT)
							 		(yyval.node)->type = INT;
							 	else if(strcmp((yyvsp[-1].node)->lexeme,"*")==0 && (yyvsp[0].node)->pointer == 1){
							 		(yyval.node)->type = (yyvsp[0].node)->type;
							 		if((yyvsp[0].node)->lval == 1)
							 			(yyval.node)->lval = 1;
							 	}
							 	else if(strcmp((yyvsp[-1].node)->lexeme,"&")==0 && (yyvsp[0].node)->lval==1){ // to be modified
							 		(yyval.node)->type = (yyvsp[0].node)->type;
							 		(yyval.node)->pointer = 1;
							 	}	
							 	else{
							 		printf("Invalid operands for %s\n",(yyvsp[-1].node)->lexeme);	
							 		Totalerrors++;
							 	}

							 	}
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 394 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 395 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=MakeNode(2); (yyval.node)->type = 100;	strcpy((yyval.node)->lexeme,"*");
							 (yyval.node)->child[0]=(yyvsp[-2].node); (yyvsp[-2].node)->parent = (yyval.node);
							 (yyval.node)->child[1]=(yyvsp[0].node); (yyvsp[0].node)->parent = (yyval.node);

							 if(((yyvsp[-2].node)->type != (yyvsp[0].node)->type)){
							 			printf("Invalid operands for *\n");
							 			Totalerrors++;
							 	}		
					 		else	
							(yyval.node)->type = (yyvsp[-2].node)->type;

							 	}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 407 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=MakeNode(2); (yyval.node)->type = 100;	strcpy((yyval.node)->lexeme,"/");
							 (yyval.node)->child[0]=(yyvsp[-2].node); (yyvsp[-2].node)->parent = (yyval.node);
							 (yyval.node)->child[1]=(yyvsp[0].node); (yyvsp[0].node)->parent = (yyval.node);

									if(((yyvsp[-2].node)->type != (yyvsp[0].node)->type)){
							 			printf("Invalid operands for /\n");
										Totalerrors++;
									}
							 		else	
									(yyval.node)->type = (yyvsp[-2].node)->type;					 


							 	}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 420 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=MakeNode(2); (yyval.node)->type = 100;	strcpy((yyval.node)->lexeme,"%");
							 (yyval.node)->child[0]=(yyvsp[-2].node); (yyvsp[-2].node)->parent = (yyval.node);
							 (yyval.node)->child[1]=(yyvsp[0].node); (yyvsp[0].node)->parent = (yyval.node);	

							 if(((yyvsp[-2].node)->type != INT || (yyvsp[0].node)->type != INT)){
						 		printf("Invalid operands for modulus");
						 		Totalerrors++;
							 }else{
							 	(yyval.node)->type = (yyvsp[-2].node)->type;
							 }
							}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 433 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 434 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=MakeNode(2); (yyval.node)->type = 100;	strcpy((yyval.node)->lexeme,"+");
							 (yyval.node)->child[0]=(yyvsp[-2].node); (yyvsp[-2].node)->parent = (yyval.node);
							 (yyval.node)->child[1]=(yyvsp[0].node); (yyvsp[0].node)->parent = (yyval.node);	

							 if((yyvsp[-2].node)->type != (yyvsp[0].node)->type)	{
							 			printf("Invalid operands for +\n");
							 			Totalerrors++;
							 		}	
							 		else	
									(yyval.node)->type = (yyvsp[-2].node)->type;

							}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 446 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=MakeNode(2); (yyval.node)->type = 100;	strcpy((yyval.node)->lexeme,"-");
							 (yyval.node)->child[0]=(yyvsp[-2].node); (yyvsp[-2].node)->parent = (yyval.node);
							 (yyval.node)->child[1]=(yyvsp[0].node); (yyvsp[0].node)->parent = (yyval.node);	

							 if((yyvsp[-2].node)->type != (yyvsp[0].node)->type){
							 			Totalerrors++;
							 			printf("Invalid operands for -\n");
							 		}	
							 		else	
									(yyval.node)->type = (yyvsp[-2].node)->type;


							}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 463 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 464 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=MakeNode(2); (yyval.node)->type = 100;	strcpy((yyval.node)->lexeme,"<");
							 (yyval.node)->child[0]=(yyvsp[-2].node); (yyvsp[-2].node)->parent = (yyval.node);
							 (yyval.node)->child[1]=(yyvsp[0].node); (yyvsp[0].node)->parent = (yyval.node);


							 if((yyvsp[-2].node)->type != (yyvsp[0].node)->type){
							 			printf("Invalid operands for <\n");
							 			Totalerrors++;
							 		}
							 		else	
									(yyval.node)->type = INT;

							 	}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 477 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=MakeNode(2); (yyval.node)->type = 100;	strcpy((yyval.node)->lexeme,">");
							 (yyval.node)->child[0]=(yyvsp[-2].node); (yyvsp[-2].node)->parent = (yyval.node);
							 (yyval.node)->child[1]=(yyvsp[0].node); (yyvsp[0].node)->parent = (yyval.node);

							 if((yyvsp[-2].node)->type != (yyvsp[0].node)->type){
							 			printf("Invalid operands for >\n");
							 		Totalerrors++;
							 		}
							 		else	
									(yyval.node)->type = INT;

							 }
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 491 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=MakeNode(2); (yyval.node)->type = (yyvsp[-1].Sval).type;	strcpy((yyval.node)->lexeme,(yyvsp[-1].Sval).text);
							 (yyval.node)->child[0]=(yyvsp[-2].node); (yyvsp[-2].node)->parent = (yyval.node);
							 (yyval.node)->child[1]=(yyvsp[0].node); (yyvsp[0].node)->parent = (yyval.node);

							 if((yyvsp[-2].node)->type != (yyvsp[0].node)->type){
							 			printf("Invalid operands for %s\n",(yyvsp[-1].Sval).text);
							 		Totalerrors++;
							 	}
							 		else	
									(yyval.node)->type = INT;

							 	}
#line 2021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 503 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=MakeNode(2); (yyval.node)->type = (yyvsp[-1].Sval).type;	strcpy((yyval.node)->lexeme,(yyvsp[-1].Sval).text);
							 (yyval.node)->child[0]=(yyvsp[-2].node); (yyvsp[-2].node)->parent = (yyval.node);
							 (yyval.node)->child[1]=(yyvsp[0].node); (yyvsp[0].node)->parent = (yyval.node);	

							 if((yyvsp[-2].node)->type != (yyvsp[0].node)->type){
							 			printf("Invalid operands for %s\n",(yyvsp[-1].Sval).text);
							 			Totalerrors++;
							 		}
							 		else	
									(yyval.node)->type = INT;

							}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 518 "cparser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 520 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=MakeNode(2); (yyval.node)->type = (yyvsp[-1].Sval).type;	strcpy((yyval.node)->lexeme,(yyvsp[-1].Sval).text);
							 (yyval.node)->child[0]=(yyvsp[-2].node); (yyvsp[-2].node)->parent = (yyval.node);
							 (yyval.node)->child[1]=(yyvsp[0].node); (yyvsp[0].node)->parent = (yyval.node);

							 	if((yyvsp[-2].node)->type != (yyvsp[0].node)->type){
							 			printf("Invalid operands for %s\n",(yyvsp[-1].Sval).text);
							 			Totalerrors++;
							 		}
							 		else	
									(yyval.node)->type = INT;

							 	}
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 533 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=MakeNode(2); (yyval.node)->type = (yyvsp[-1].Sval).type;	strcpy((yyval.node)->lexeme,(yyvsp[-1].Sval).text);
							 		(yyval.node)->child[0]=(yyvsp[-2].node); (yyvsp[-2].node)->parent = (yyval.node);
							 		(yyval.node)->child[1]=(yyvsp[0].node); (yyvsp[0].node)->parent = (yyval.node);	

							 		if((yyvsp[-2].node)->type != (yyvsp[0].node)->type){
							 			printf("Invalid operands for %s\n",(yyvsp[-1].Sval).text);
							 			Totalerrors++;
							 		}
							 		else	
									(yyval.node)->type = INT;
									 
							 	}
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 547 "cparser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 548 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=MakeNode(2); (yyval.node)->type = 100;	strcpy((yyval.node)->lexeme,"&");
							 (yyval.node)->child[0]=(yyvsp[-2].node); (yyvsp[-2].node)->parent = (yyval.node);
							 (yyval.node)->child[1]=(yyvsp[0].node); (yyvsp[0].node)->parent = (yyval.node);	

							 if((yyvsp[-2].node)->type != INT || (yyvsp[0].node)->type != INT){
							 	printf("Invalid operands for &\n");
							 	Totalerrors++;
							 }else{
							 	(yyval.node)->type = INT;
							 }


							}
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 565 "cparser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 566 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=MakeNode(2); (yyval.node)->type = 100;	strcpy((yyval.node)->lexeme,"|");
							 (yyval.node)->child[0]=(yyvsp[-2].node); (yyvsp[-2].node)->parent = (yyval.node);
							 (yyval.node)->child[1]=(yyvsp[0].node); (yyvsp[0].node)->parent = (yyval.node);	

							 if((yyvsp[-2].node)->type != INT || (yyvsp[0].node)->type != INT){
							 	printf("Invalid operands for |\n");
							 	Totalerrors++;
							 }else{
							 	(yyval.node)->type = INT;
							 }

							}
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 580 "cparser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 581 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=MakeNode(2); (yyval.node)->type = (yyvsp[-1].Sval).type;	strcpy((yyval.node)->lexeme,(yyvsp[-1].Sval).text);
							 (yyval.node)->child[0]=(yyvsp[-2].node); (yyvsp[-2].node)->parent = (yyval.node);
							 (yyval.node)->child[1]=(yyvsp[0].node); (yyvsp[0].node)->parent = (yyval.node);

							 if((yyvsp[-2].node)->type != INT || (yyvsp[0].node)->type != INT){
							 	printf("Invalid operands for %s\n",(yyvsp[-1].Sval).text);
							 	Totalerrors++;
							 }else{
							 	(yyval.node)->type = INT;
							 }

							 }
#line 2148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 595 "cparser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 596 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=MakeNode(2); (yyval.node)->type = (yyvsp[-1].Sval).type;	strcpy((yyval.node)->lexeme,(yyvsp[-1].Sval).text);
							 (yyval.node)->child[0]=(yyvsp[-2].node); (yyvsp[-2].node)->parent = (yyval.node);
							 (yyval.node)->child[1]=(yyvsp[0].node); (yyvsp[0].node)->parent = (yyval.node);	

							 if((yyvsp[-2].node)->type != INT || (yyvsp[0].node)->type != INT){
							 	printf("Invalid operands for %s\n",(yyvsp[-1].Sval).text);
							 	Totalerrors++;
							 }else{
							 	(yyval.node)->type = INT;
							 }

							}
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 611 "cparser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 614 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 615 "cparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); (yyval.node)->child[0] = (yyvsp[-2].node); (yyvsp[-2].node)->parent = (yyval.node);
											 (yyval.node)->child[1] = (yyvsp[0].node); (yyvsp[0].node)->parent = (yyval.node);

											 if((yyvsp[-2].node)->lval != 1){
											 	printf("Not an Lvalue Expression\n");
											 	Totalerrors++;
											 }else{
												if((yyvsp[-1].node)->type==100){
													if((yyvsp[-2].node)->type != (yyvsp[0].node)->type){
														printf("Invalid Operand for %s\n",(yyvsp[-1].node)->lexeme);
														Totalerrors++;
														//printf("= %d %d",$1->type,$3->type);
													}
													else
														(yyval.node)->type = (yyvsp[-2].node)->type;
												}else{

													if((yyvsp[-2].node)->type!=INT || (yyvsp[0].node)->type!=INT){
														printf("Invalid Operand for %s\n",(yyvsp[-1].node)->lexeme);
														Totalerrors++;
													}
													else
														(yyval.node)->type = (yyvsp[-2].node)->type;
												} 

											}
											(yyval.node)->lval = 0;
											}
#line 2216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 645 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 647 "cparser.y" /* yacc.c:1646  */
    { (yyval.node) = MakeNode(2); (yyval.node)->type =101; strcpy((yyval.node)->lexeme,";");
							  (yyval.node)->child[0] = (yyvsp[-1].node); if((yyvsp[-1].node) != NULL) (yyvsp[-1].node)->parent = (yyval.node);
							  (yyval.node)->child[1] = (yyvsp[0].node);  if((yyvsp[0].node) != NULL) (yyvsp[0].node)->parent = (yyval.node);
							}
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 655 "cparser.y" /* yacc.c:1646  */
    {
			if(open == 0)
				currentT = EnterScope(currentT);
			else{
				open = 0;
			}
		}
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 665 "cparser.y" /* yacc.c:1646  */
    {
			currentT = ExitScope(currentT);
		}
#line 2251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 671 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);}
#line 2257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 676 "cparser.y" /* yacc.c:1646  */
    {
								open = 1;
								my.array = 3; my.pointer = 0; my.struct_member = 0; my.type = (yyvsp[-1].node)->type;
								AddSymbol((yyvsp[0].Sval).text,my,currentT);

								currentT = EnterScope(currentT);

								(yyval.node) = MakeNode(2); (yyval.node)->type = (yyvsp[0].Sval).type; strcpy((yyval.node)->lexeme,(yyvsp[0].Sval).text);
								(yyval.node)->child[0] = (yyvsp[-1].node); (yyvsp[-1].node)->parent = (yyval.node);
								(yyval.node)->array = 50;

								returntype = (yyvsp[-1].node)->type;
								returnpointer = 0;

							}
#line 2277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 694 "cparser.y" /* yacc.c:1646  */
    {
									(yyval.node) = (yyvsp[-3].node);
									(yyval.node)->child[1] = (yyvsp[0].node); (yyvsp[0].node)->parent = (yyval.node);
									//$$->NumChild -= 1;
									(yyval.node)->array += 3;	


									ALL[funcount] = (struct allFunc *)malloc(sizeof(struct allFunc));
									strcpy(ALL[funcount]->name,(yyvsp[-3].node)->lexeme);
									ALL[funcount]->t = (yyval.node);
									ALL[funcount]->arg = NULL;
									ALL[funcount]->st = currentT->child[currentT->current - 1];		
									funcount++;						
									//printf("I am in at khali mei %s %d\n",$1->lexeme,funcount);
								}
#line 2297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 712 "cparser.y" /* yacc.c:1646  */
    {(yyval.node)=MakeNode(0); (yyval.node)->type = -1;strcpy((yyval.node)->lexeme,"dec");}
#line 2303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 713 "cparser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node); tree = (yyval.node); }
#line 2309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 714 "cparser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node); tree = (yyval.node);}
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 716 "cparser.y" /* yacc.c:1646  */
    {(yyval.node) = MakeNode(2); (yyval.node)->type=1000; strcpy((yyval.node)->lexeme,"@");
					 (yyval.node)->child[0] = (yyvsp[-1].node); (yyvsp[-1].node)->parent = (yyval.node);
					 (yyval.node)->child[1] = (yyvsp[0].node); (yyvsp[0].node)->parent = (yyval.node);
					tree = (yyval.node);	}
#line 2324 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2328 "y.tab.c" /* yacc.c:1646  */
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
#line 723 "cparser.y" /* yacc.c:1906  */

int yyerror(char* s)

{
        fflush(stdout);
		printf("Parse Error\n");
		return 0;
}
int main()
{
	open = 0;
	jumpcount=0;
	returntype=0;
	returnpointer=0;
	Totalerrors=0;
	funcount = 0;
	init();
	yyparse();
	AST_print(tree);
	depthSymbolTree(sym,1);
	//printSymbolTree(sym);
	if(Totalerrors>0)
		printf("Total semantic errors: %d\n",Totalerrors);

	
	return 0;
}
