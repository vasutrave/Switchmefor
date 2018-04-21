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
#line 1 "project.y" /* yacc.c:339  */

	#include<stdio.h>
	#include "symtab.h"
	#include <string.h> 
	#include <stdlib.h>
	#include "for.h"
	#include "switch.h"
	int yylex(void);
	int yyerror(const char *s);
	int success = 1;
	int tcnt = 1;
	extern int bal_brack;

	int close_brack = 0;
	extern int yylineno;
	void initEntry(char* sym);
	int ifPresent(char* sym);
	char st[1000][10];
	void insert(int type,char* text,char* toktype);
	char buf[100];
	int top=0;
	int flag = 0;
	int arr=1;
	int size(char* text);
	char tempo[2]="t";

	int label[200];
	int lnum=0;
	int ltop=0;
	int switch_stack[1000];
	int stop=0;
	char type[10];

	void push(char* text);
	void codegen_logical();
	void codegen_algebric();
	void intermediateCode();
	void codegen_assign();
	void codegen_unary();

	char switch_exp[100];//to copy switch expression
	int last_label=0;
	int is_for_or_switch = 0;
	int break_found = 0;
	
	FILE* f1;
	int i =0;



#line 117 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
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
    char_const = 258,
    id = 259,
    string = 260,
    type_const = 261,
    DEFINE = 262,
    int_const = 263,
    float_const = 264,
    FOR = 265,
    BREAK = 266,
    SWITCH = 267,
    CONTINUE = 268,
    RETURN = 269,
    CASE = 270,
    DEFAULT = 271,
    or_const = 272,
    and_const = 273,
    eq_const = 274,
    rel_const = 275,
    inc_const = 276,
    point_const = 277,
    param_const = 278,
    ELSE = 279,
    HEADER = 280
  };
#endif
/* Tokens.  */
#define char_const 258
#define id 259
#define string 260
#define type_const 261
#define DEFINE 262
#define int_const 263
#define float_const 264
#define FOR 265
#define BREAK 266
#define SWITCH 267
#define CONTINUE 268
#define RETURN 269
#define CASE 270
#define DEFAULT 271
#define or_const 272
#define and_const 273
#define eq_const 274
#define rel_const 275
#define inc_const 276
#define point_const 277
#define param_const 278
#define ELSE 279
#define HEADER 280

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 52 "project.y" /* yacc.c:355  */

	char* txt;


#line 212 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 229 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  25
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   394

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  147
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  231

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   280

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    35,    29,     2,
      41,    42,    33,    31,    40,    32,     2,    34,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    45,    37,
      27,    36,    26,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    43,     2,    44,    30,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    38,    28,    39,     2,     2,     2,     2,
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
      25
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    71,    71,    72,    73,    75,    76,    78,    79,    81,
      82,    83,    84,    86,    87,    89,    90,    92,    93,    96,
     100,   101,   104,   105,   110,   112,   113,   114,   115,   116,
     117,   118,   121,   122,   124,   125,   127,   128,   129,   131,
     132,   134,   135,   136,   138,   139,   142,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   155,   156,   159,   160,
     161,   162,   163,   164,   166,   167,   167,   168,   168,   171,
     172,   173,   174,   177,   177,   181,   181,   181,   181,   183,
     184,   191,   192,   195,   196,   200,   201,   202,   205,   206,
     206,   206,   209,   211,   213,   214,   214,   216,   217,   217,
     219,   220,   220,   222,   223,   223,   225,   226,   226,   228,
     229,   229,   231,   232,   232,   233,   233,   234,   234,   237,
     238,   238,   239,   239,   241,   242,   242,   243,   243,   244,
     244,   247,   248,   248,   251,   252,   253,   254,   255,   257,
     258,   259,   260,   262,   263,   265,   266,   267
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "char_const", "id", "string",
  "type_const", "DEFINE", "int_const", "float_const", "FOR", "BREAK",
  "SWITCH", "CONTINUE", "RETURN", "CASE", "DEFAULT", "or_const",
  "and_const", "eq_const", "rel_const", "inc_const", "point_const",
  "param_const", "ELSE", "HEADER", "'>'", "'<'", "'|'", "'&'", "'^'",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'='", "';'", "'{'", "'}'", "','",
  "'('", "')'", "'['", "']'", "':'", "$accept", "program_unit",
  "translation_unit", "external_decl", "function_definition", "decl",
  "decl_list", "decl_specs", "type_spec", "init_declarator_list",
  "init_declarator", "declarator", "direct_declarator", "param_type_list",
  "param_list", "param_decl", "id_list", "initializer", "initializer_list",
  "abstract_declarator", "direct_abstract_declarator", "stat_list", "stat",
  "labeled_stat", "$@1", "$@2", "compound_stat", "selection_stat", "$@3",
  "iteration_stat", "$@4", "$@5", "$@6", "jump_stat", "exp_stat", "exp",
  "assignment_exp", "$@7", "$@8", "conditional_exp", "const_exp",
  "logical_or_exp", "$@9", "logical_and_exp", "$@10", "inclusive_or_exp",
  "$@11", "exclusive_or_exp", "$@12", "and_exp", "$@13", "equality_exp",
  "$@14", "relational_exp", "$@15", "$@16", "$@17", "additive_exp", "$@18",
  "$@19", "mult_exp", "$@20", "$@21", "$@22", "unary_exp", "$@23",
  "postfix_exp", "primary_exp", "argument_exp_list", "consts", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,    62,    60,   124,    38,
      94,    43,    45,    42,    47,    37,    61,    59,   123,   125,
      44,    40,    41,    91,    93,    58
};
# endif

#define YYPACT_NINF -123

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-123)))

#define YYTABLE_NINF -90

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     174,  -123,  -123,    95,   174,    39,    16,   102,  -123,  -123,
    -123,    27,    29,    12,    49,  -123,  -123,  -123,  -123,  -123,
      21,   174,  -123,  -123,   -21,  -123,  -123,  -123,    94,  -123,
     147,  -123,   208,  -123,    12,    27,  -123,    42,   124,  -123,
     155,  -123,  -123,    19,    33,    41,    58,    65,    78,   164,
      -4,   116,    75,   145,  -123,  -123,  -123,  -123,    39,   328,
      12,  -123,    85,    98,   121,   118,   130,   339,    21,   127,
    -123,  -123,   222,   261,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,   101,  -123,  -123,   141,  -123,  -123,    15,   156,   149,
    -123,   199,  -123,  -123,   159,  -123,    21,    21,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,   168,  -123,    68,    21,  -123,   328,  -123,
    -123,  -123,   314,   353,  -123,    21,  -123,  -123,   139,   161,
    -123,  -123,   275,  -123,  -123,  -123,    11,   152,  -123,  -123,
     151,  -123,   185,   205,  -123,  -123,  -123,  -123,    21,    21,
      21,    21,    21,    21,    21,    21,    21,    21,    21,    21,
      21,    21,  -123,  -123,  -123,   200,    47,  -123,    35,  -123,
    -123,   210,  -123,  -123,   314,  -123,  -123,   202,   206,  -123,
     207,    43,   166,  -123,  -123,    33,    41,    58,    65,    78,
     164,    -4,    -4,    -4,   116,   116,  -123,  -123,  -123,    21,
      21,  -123,  -123,  -123,   300,   353,  -123,   314,  -123,  -123,
    -123,  -123,  -123,   211,  -123,   212,  -123,  -123,  -123,  -123,
    -123,   314,  -123,  -123,  -123,    21,  -123,   214,   213,   314,
    -123
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    25,    19,     0,     0,     0,     0,     4,     5,     7,
       8,     0,    18,     0,    24,   146,   139,   141,   145,   147,
      87,     0,   140,     2,     0,     1,     6,    14,     0,    20,
      22,    17,    87,    15,     0,     0,    12,     0,     0,   132,
       0,    85,    88,    92,    94,    97,   100,   103,   106,   109,
     112,   119,   124,   131,   134,     3,    26,    13,     0,     0,
       0,    11,   139,     0,     0,     0,     0,    87,     0,     0,
      84,    72,    87,    87,    56,    58,    60,    61,    62,    63,
      59,     0,    16,    10,    22,    39,    31,    38,     0,    32,
      34,     0,    28,    93,     0,   124,     0,     0,   142,    95,
      98,   101,   104,   107,   110,   117,   115,   113,   120,   122,
     125,   127,   129,     0,   138,     0,    87,    21,     0,    23,
      41,     9,    87,    87,    80,    87,    79,    82,     0,     0,
      67,    71,    87,    70,    57,    83,     0,     0,    36,    37,
      46,    29,    35,     0,    30,    27,   133,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    90,   137,   143,     0,     0,    44,     0,    64,
      75,     0,    81,    65,    87,    69,    55,     0,     0,    51,
       0,     0,     0,    33,    40,    96,    99,   102,   105,   108,
     111,   118,   116,   114,   121,   123,   126,   128,   130,     0,
       0,   136,   135,    42,     0,    87,    73,    87,    68,    53,
      47,    49,    54,     0,    50,     0,    91,   144,    43,    45,
      76,    87,    66,    52,    48,    87,    74,    77,     0,    87,
      78
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -123,    57,  -123,   250,  -123,     7,   112,     1,  -123,  -123,
     204,    -1,  -123,  -122,  -123,  -123,  -123,  -109,  -123,   122,
    -123,   195,   -67,  -123,  -123,  -123,    10,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -112,   -20,   -52,  -123,  -123,   -35,
     -56,  -123,  -123,   120,  -123,   132,  -123,   142,  -123,   143,
    -123,   154,  -123,   140,  -123,  -123,  -123,    46,  -123,  -123,
     -75,  -123,  -123,  -123,   -36,  -123,  -123,   292,  -123,  -123
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    10,    34,    35,    12,    28,
      29,    13,    14,    88,    89,    90,    91,   119,   168,   139,
     140,    73,    74,    75,   207,   174,    76,    77,   221,    78,
     205,   225,   228,    79,    80,    81,    41,   113,   199,    42,
      94,    43,   148,    44,   149,    45,   150,    46,   151,    47,
     152,    48,   153,    49,   156,   155,   154,    50,   157,   158,
      51,   159,   160,   161,    52,    96,    53,    54,   165,    22
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,    11,    95,    93,    24,    11,   134,   120,    11,   167,
      30,   170,   129,    31,   177,     1,    25,     2,     2,     1,
      33,    56,    11,    36,    15,    16,    17,   108,   109,    18,
      19,     1,    95,    93,    84,     2,    99,    33,    87,    33,
      61,    82,    39,     1,    83,   147,    85,   128,     2,     2,
      32,   100,   136,   176,   137,   169,   136,    84,   137,   213,
     146,    23,    20,   164,    27,   134,   120,    82,     5,   101,
     121,    15,    16,    17,   203,   204,    18,    19,    55,    82,
       5,   180,   194,   195,    86,   212,   138,    97,   102,    39,
      37,   202,    38,   220,   103,   219,   166,   104,    15,    16,
      17,    95,    93,    18,    19,   171,     1,   208,     2,    20,
     163,   -89,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,   196,   197,   198,   215,    15,    16,    17,
     122,    57,    18,    19,    58,    24,    20,    87,   135,   123,
     222,    97,    60,     5,    72,    39,    95,    93,   217,   110,
     111,   112,   120,     2,   226,    15,    16,    17,   124,   125,
      18,    19,   230,    95,   216,    20,   114,   126,    92,    15,
      16,    17,   130,    39,    18,    19,   172,    59,     1,    97,
       2,     3,    87,    59,   105,    32,   115,    39,   116,   142,
     106,   107,   181,    20,   182,    97,   179,    98,   141,     4,
     191,   192,   193,   145,   162,   227,   173,    20,   183,   184,
     214,    15,    62,    17,     2,     5,    18,    19,    63,    64,
      65,    66,    67,    68,    69,    15,    62,    17,     2,    39,
      18,    19,    63,    64,    65,    66,    67,    68,    69,   143,
     200,   144,   201,    39,   209,    70,    32,    71,   210,    20,
      97,   211,   206,   223,    97,   229,   224,    26,   178,    70,
      32,   131,   117,    20,    15,    62,    17,   132,   185,    18,
      19,    63,    64,    65,    66,    67,    68,    69,    15,    62,
      17,   186,    39,    18,    19,    63,    64,    65,    66,    67,
      68,    69,   187,   190,   188,    21,    39,     0,    70,    32,
     133,     0,    20,    15,    16,    17,   189,     0,    18,    19,
       0,     0,    70,    32,   175,     0,    20,    15,    62,    17,
       0,    39,    18,    19,    63,    64,    65,    66,    67,    68,
      69,    15,    16,    17,     0,    39,    18,    19,   118,   218,
       0,    20,    15,    16,    17,     0,     0,    18,    19,    39,
       0,    70,    32,     0,     0,    20,    15,    16,    17,     0,
      39,    18,    19,     0,     0,     0,   118,     0,     0,    20,
       0,     0,     0,     0,    39,     0,   127,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      70,     0,     0,     0,    20
};

static const yytype_int16 yycheck[] =
{
      20,     0,    38,    38,     5,     4,    73,    59,     7,   118,
      11,   123,    68,    12,   136,     4,     0,     6,     6,     4,
      13,    42,    21,    13,     3,     4,     5,    31,    32,     8,
       9,     4,    68,    68,    35,     6,    17,    30,    37,    32,
      30,    34,    21,     4,    34,    97,     4,    67,     6,     6,
      38,    18,    41,    42,    43,   122,    41,    58,    43,   181,
      96,     4,    41,   115,    37,   132,   118,    60,    41,    28,
      60,     3,     4,     5,    39,    40,     8,     9,    21,    72,
      41,   137,   157,   158,    42,    42,    87,    40,    30,    21,
      41,    44,    43,   205,    29,   204,   116,    19,     3,     4,
       5,   137,   137,     8,     9,   125,     4,   174,     6,    41,
      42,    36,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   182,     3,     4,     5,
      45,    37,     8,     9,    40,   136,    41,   136,    37,    41,
     207,    40,    30,    41,    32,    21,   182,   182,   200,    33,
      34,    35,   204,     6,   221,     3,     4,     5,    37,    41,
       8,     9,   229,   199,   199,    41,    21,    37,    44,     3,
       4,     5,    45,    21,     8,     9,    37,    36,     4,    40,
       6,     7,   181,    36,    20,    38,    41,    21,    43,    40,
      26,    27,    41,    41,    43,    40,    44,    42,    42,    25,
     154,   155,   156,    44,    36,   225,    45,    41,    23,     4,
      44,     3,     4,     5,     6,    41,     8,     9,    10,    11,
      12,    13,    14,    15,    16,     3,     4,     5,     6,    21,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    40,
      40,    42,    42,    21,    42,    37,    38,    39,    42,    41,
      40,    44,    42,    42,    40,    42,    44,     7,   136,    37,
      38,    39,    58,    41,     3,     4,     5,    72,   148,     8,
       9,    10,    11,    12,    13,    14,    15,    16,     3,     4,
       5,   149,    21,     8,     9,    10,    11,    12,    13,    14,
      15,    16,   150,   153,   151,     3,    21,    -1,    37,    38,
      39,    -1,    41,     3,     4,     5,   152,    -1,     8,     9,
      -1,    -1,    37,    38,    39,    -1,    41,     3,     4,     5,
      -1,    21,     8,     9,    10,    11,    12,    13,    14,    15,
      16,     3,     4,     5,    -1,    21,     8,     9,    38,    39,
      -1,    41,     3,     4,     5,    -1,    -1,     8,     9,    21,
      -1,    37,    38,    -1,    -1,    41,     3,     4,     5,    -1,
      21,     8,     9,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    21,    -1,    37,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     6,     7,    25,    41,    47,    48,    49,    50,
      51,    53,    54,    57,    58,     3,     4,     5,     8,     9,
      41,   113,   115,    47,    57,     0,    49,    37,    55,    56,
      57,    53,    38,    51,    52,    53,    72,    41,    43,    21,
      81,    82,    85,    87,    89,    91,    93,    95,    97,    99,
     103,   106,   110,   112,   113,    47,    42,    37,    40,    36,
      52,    72,     4,    10,    11,    12,    13,    14,    15,    16,
      37,    39,    52,    67,    68,    69,    72,    73,    75,    79,
      80,    81,    51,    72,    57,     4,    42,    53,    59,    60,
      61,    62,    44,    85,    86,   110,   111,    40,    42,    17,
      18,    28,    30,    29,    19,    20,    26,    27,    31,    32,
      33,    34,    35,    83,    21,    41,    43,    56,    38,    63,
      82,    72,    45,    41,    37,    41,    37,    37,    81,    86,
      45,    39,    67,    39,    68,    37,    41,    43,    57,    65,
      66,    42,    40,    40,    42,    44,   110,    82,    88,    90,
      92,    94,    96,    98,   102,   101,   100,   104,   105,   107,
     108,   109,    36,    42,    82,   114,    81,    63,    64,    68,
      80,    81,    37,    45,    71,    39,    42,    59,    65,    44,
      86,    41,    43,    23,     4,    89,    91,    93,    95,    97,
      99,   103,   103,   103,   106,   106,   110,   110,   110,    84,
      40,    42,    44,    39,    40,    76,    42,    70,    68,    42,
      42,    44,    42,    59,    44,    86,    85,    82,    39,    63,
      80,    74,    68,    42,    44,    77,    68,    81,    78,    42,
      68
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    47,    47,    48,    48,    49,    49,    50,
      50,    50,    50,    51,    51,    52,    52,    53,    53,    54,
      55,    55,    56,    56,    57,    58,    58,    58,    58,    58,
      58,    58,    59,    59,    60,    60,    61,    61,    61,    62,
      62,    63,    63,    63,    64,    64,    65,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    67,    67,    68,    68,
      68,    68,    68,    68,    69,    70,    69,    71,    69,    72,
      72,    72,    72,    74,    73,    76,    77,    78,    75,    79,
      79,    79,    79,    80,    80,    81,    81,    81,    82,    83,
      84,    82,    85,    86,    87,    88,    87,    89,    90,    89,
      91,    92,    91,    93,    94,    93,    95,    96,    95,    97,
      98,    97,    99,   100,    99,   101,    99,   102,    99,   103,
     104,   103,   105,   103,   106,   107,   106,   108,   106,   109,
     106,   110,   111,   110,   112,   112,   112,   112,   112,   113,
     113,   113,   113,   114,   114,   115,   115,   115
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     1,     2,     1,     1,     4,
       3,     3,     2,     3,     2,     1,     2,     2,     1,     1,
       1,     3,     1,     3,     1,     1,     3,     4,     3,     4,
       4,     3,     1,     3,     1,     2,     2,     2,     1,     1,
       3,     1,     3,     4,     1,     3,     1,     3,     4,     3,
       3,     2,     4,     3,     3,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     3,     0,     5,     0,     4,     4,
       3,     3,     2,     0,     6,     0,     0,     0,    10,     2,
       2,     3,     2,     2,     1,     1,     3,     0,     1,     0,
       0,     5,     1,     1,     1,     0,     4,     1,     0,     4,
       1,     0,     4,     1,     0,     4,     1,     0,     4,     1,
       0,     4,     1,     0,     4,     0,     4,     0,     4,     1,
       0,     4,     0,     4,     1,     0,     4,     0,     4,     0,
       4,     1,     0,     3,     1,     4,     4,     3,     2,     1,
       1,     1,     3,     1,     3,     1,     1,     1
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
        case 4:
#line 74 "project.y" /* yacc.c:1646  */
    {YYACCEPT;}
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 86 "project.y" /* yacc.c:1646  */
    {printf("CHECK THIS OUT: %s~~%s###%s\n",(yyvsp[-2].txt),(yyvsp[-1].txt),buf);insert(2,buf,(yyvsp[-2].txt));strcpy(buf,"");flag = 0;}
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 89 "project.y" /* yacc.c:1646  */
    {(yyval.txt) = (yyvsp[0].txt);}
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 90 "project.y" /* yacc.c:1646  */
    {(yyval.txt) = (yyvsp[-1].txt);}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 92 "project.y" /* yacc.c:1646  */
    {(yyval.txt) = (yyvsp[-1].txt);}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 93 "project.y" /* yacc.c:1646  */
    {(yyval.txt) = (yyvsp[0].txt);}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 96 "project.y" /* yacc.c:1646  */
    { insert(1,(yyvsp[0].txt),"Keyword");
										  (yyval.txt) = (yyvsp[0].txt);}
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 100 "project.y" /* yacc.c:1646  */
    {(yyval.txt) = (yyvsp[0].txt);}
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 101 "project.y" /* yacc.c:1646  */
    {(yyval.txt) = (yyvsp[-2].txt);}
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 104 "project.y" /* yacc.c:1646  */
    {(yyval.txt) = (yyvsp[0].txt);}
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 105 "project.y" /* yacc.c:1646  */
    {(yyval.txt) = (yyvsp[-2].txt);}
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 110 "project.y" /* yacc.c:1646  */
    {(yyval.txt) = (yyvsp[0].txt);}
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 112 "project.y" /* yacc.c:1646  */
    {(yyval.txt) = (yyvsp[0].txt);strcat(buf,(yyvsp[0].txt));strcat(buf,"~");}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 113 "project.y" /* yacc.c:1646  */
    {(yyval.txt) = (yyvsp[-1].txt);}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 114 "project.y" /* yacc.c:1646  */
    {flag = 2;arr = arr * atoi((yyvsp[-1].txt));}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 118 "project.y" /* yacc.c:1646  */
    {flag = 1;}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 167 "project.y" /* yacc.c:1646  */
    {break_found=0;switch_case((yyvsp[-1].txt));}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 167 "project.y" /* yacc.c:1646  */
    {insert(1,(yyvsp[-4].txt),"Keyword");}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 168 "project.y" /* yacc.c:1646  */
    {switch_default();}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 168 "project.y" /* yacc.c:1646  */
    {insert(1,(yyvsp[-3].txt),"Keyword");}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 177 "project.y" /* yacc.c:1646  */
    {  strcpy(switch_exp,(yyvsp[-1].txt));
								is_for_or_switch = 2;switch_start();}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 178 "project.y" /* yacc.c:1646  */
    {insert(1,(yyvsp[-5].txt),"Keyword");switch_end();}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 181 "project.y" /* yacc.c:1646  */
    {is_for_or_switch = 1;for_cond_num=0;for_start((yyvsp[0].txt));}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 181 "project.y" /* yacc.c:1646  */
    {if(strlen((yyvsp[-2].txt))==1)for_cond_num++;for_rep();}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 181 "project.y" /* yacc.c:1646  */
    {for_inc();}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 181 "project.y" /* yacc.c:1646  */
    {insert(1,(yyvsp[-9].txt),"Keyword");for_end();}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 183 "project.y" /* yacc.c:1646  */
    {insert(1,(yyvsp[-1].txt),"Keyword");}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 184 "project.y" /* yacc.c:1646  */
    {	break_found=1;insert(1,(yyvsp[-1].txt),"Keyword");
									if(is_for_or_switch == 1)
										end_loop();
									else if(is_for_or_switch ==2)
										switch_break();
									
								   }
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 191 "project.y" /* yacc.c:1646  */
    {insert(1,(yyvsp[-2].txt),"Keyword");}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 192 "project.y" /* yacc.c:1646  */
    {insert(1,(yyvsp[-1].txt),"Keyword");}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 206 "project.y" /* yacc.c:1646  */
    {push((yyvsp[0].txt));}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 206 "project.y" /* yacc.c:1646  */
    {push("=");}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 206 "project.y" /* yacc.c:1646  */
    {codegen_assign();}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 214 "project.y" /* yacc.c:1646  */
    {push((yyvsp[0].txt));}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 214 "project.y" /* yacc.c:1646  */
    {codegen_logical();}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 217 "project.y" /* yacc.c:1646  */
    {push((yyvsp[0].txt));}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 217 "project.y" /* yacc.c:1646  */
    {codegen_logical();}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 220 "project.y" /* yacc.c:1646  */
    {push((yyvsp[0].txt));}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 220 "project.y" /* yacc.c:1646  */
    {codegen_logical();}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 223 "project.y" /* yacc.c:1646  */
    {push((yyvsp[0].txt));}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 223 "project.y" /* yacc.c:1646  */
    {codegen_logical();}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 226 "project.y" /* yacc.c:1646  */
    {push((yyvsp[0].txt));}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 226 "project.y" /* yacc.c:1646  */
    {codegen_logical();}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 229 "project.y" /* yacc.c:1646  */
    {push((yyvsp[0].txt));}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 229 "project.y" /* yacc.c:1646  */
    {codegen_logical();}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 232 "project.y" /* yacc.c:1646  */
    {push((yyvsp[0].txt));}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 232 "project.y" /* yacc.c:1646  */
    {codegen_logical();}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 233 "project.y" /* yacc.c:1646  */
    {push((yyvsp[0].txt));}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 233 "project.y" /* yacc.c:1646  */
    {codegen_logical();}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 234 "project.y" /* yacc.c:1646  */
    {push((yyvsp[0].txt));}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 234 "project.y" /* yacc.c:1646  */
    {codegen_logical();}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 238 "project.y" /* yacc.c:1646  */
    {push((yyvsp[0].txt));}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 238 "project.y" /* yacc.c:1646  */
    {codegen_algebric();}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 239 "project.y" /* yacc.c:1646  */
    {push((yyvsp[0].txt));}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 239 "project.y" /* yacc.c:1646  */
    {codegen_algebric();}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 242 "project.y" /* yacc.c:1646  */
    {push((yyvsp[0].txt));}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 242 "project.y" /* yacc.c:1646  */
    {codegen_algebric();}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 243 "project.y" /* yacc.c:1646  */
    {push((yyvsp[0].txt));}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 243 "project.y" /* yacc.c:1646  */
    {codegen_algebric();}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 244 "project.y" /* yacc.c:1646  */
    {push((yyvsp[0].txt));}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 244 "project.y" /* yacc.c:1646  */
    {codegen_algebric();}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 248 "project.y" /* yacc.c:1646  */
    {push((yyvsp[0].txt));}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 248 "project.y" /* yacc.c:1646  */
    {codegen_unary();}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 255 "project.y" /* yacc.c:1646  */
    {push((yyvsp[0].txt));codegen_unary();}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 257 "project.y" /* yacc.c:1646  */
    {(yyval.txt) = (yyvsp[0].txt);insert(1,(yyvsp[0].txt),"Id");push((yyvsp[0].txt));}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 258 "project.y" /* yacc.c:1646  */
    {(yyval.txt) = (yyvsp[0].txt);push((yyvsp[0].txt));}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 259 "project.y" /* yacc.c:1646  */
    {(yyval.txt) = (yyvsp[0].txt);}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 260 "project.y" /* yacc.c:1646  */
    {(yyval.txt) = (yyvsp[-1].txt);}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 265 "project.y" /* yacc.c:1646  */
    {(yyval.txt) = (yyvsp[0].txt);}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 266 "project.y" /* yacc.c:1646  */
    {(yyval.txt) = (yyvsp[0].txt);}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 267 "project.y" /* yacc.c:1646  */
    {(yyval.txt) = (yyvsp[0].txt);}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1952 "y.tab.c" /* yacc.c:1646  */
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
#line 269 "project.y" /* yacc.c:1906  */



int ifPresent(char* sym){
  		int i;
		//printf("sym = %s\n",sym);
  		for(i = 1; i < tcnt ; i ++)
   		{
			if(strcmp(symtab[i].type,"Keyword"))
      			{
					if(!strcmp(sym,symtab[i].symbol) && symtab[i].scope_num == bal_brack)
        				return 1;
				}
			else{
				      				
					if(!strcmp(sym,symtab[i].symbol))
        				return 1;
				}
				
    		}
		return 0;
	}
	
void initEntry(char* sym)
	{

		if(!ifPresent(sym)){
			symtab[tcnt].tok_num = tcnt;
			symtab[tcnt].scope_num = bal_brack;
			strcpy(symtab[tcnt].symbol,sym);
			symtab[tcnt].lineno = yylineno;
		}

	}

void insert(int type,char* text, char* toktype)
	{
		char var_name[10];
		char temp[10];
		int var_len = 0;
		switch(type){
			case 1:
					initEntry(text);
					strcpy(symtab[tcnt].type,toktype);
					tcnt++;
				    break;
			case 2:
				for(int i = 0; i < strlen(text);i++)
				{
					if(text[i] != '~'){
						var_name[var_len] = text[i];
						var_len++;
					
					}

					else if(text[i] == '~'){
						var_name[var_len]='\0';
						initEntry(var_name);
						if(strcmp(var_name,"main")==0)
						{
							
							strcpy(temp,toktype);
							strcat(toktype,"-func");
							strcpy(symtab[tcnt].type,toktype);
							strcpy(toktype,temp);
							flag = 0;
						}
						else if(flag == 2)
						{
							
							strcpy(temp,toktype);
							strcat(toktype,"-arr");
							strcpy(symtab[tcnt].type,toktype);
							strcpy(toktype,temp);
							symtab[tcnt].size = size(toktype)*arr;
							arr = 1;
							flag = 0;

						}
						else 
							{strcpy(symtab[tcnt].type,toktype);
							symtab[tcnt].size = size(toktype);}
						tcnt++;
						strcpy(var_name,"");
						var_len = 0;
					}
					
				   

				}
				 break;
		}
										
	}

void end_loop()
{
		fprintf(f1,"\tgoto $L%d\n",lnum-2);	
}

void for_end_iri()
{
	int x,y;
	y=label[ltop--];
	//x=label[ltop--];
	fprintf(f1,"\t\tgoto $L%d\n",y);
	//fprintf(f1,"$L%d: \n",y);
	top--;
}

void for_inc()
{
		//fprintf(f1,"\nfor_inc() prints:\n");
		fprintf(f1,"\tgoto $L%d\n",lnum-3);
		fprintf(f1,"$L%d:\n",lnum-1);
}
	
void for_start(char* text)
{
		//fprintf(f1,"\nfor_start()\ntext = %s\n",text);
		//fprintf(f1,"Len = %d\n",strlen(text));
		if(strlen(text)==1 && strcmp(text,";")==0){
			for_cond_num++;
		}
		lnum++;
		label[++ltop]=lnum;
		fprintf(f1,"$L%d:\n",lnum);
}

void for_rep()
{
	//fprintf(f1,"\nfor_rep() prints:\n");
	lnum++;
	if(for_cond_num < 2){
	
 		fprintf(f1,"if( not %s)",st[top]);
 		fprintf(f1,"\tgoto $L%d\n",lnum);
	}
 	label[++ltop]=lnum;
 	lnum++;
 	fprintf(f1,"\tgoto $L%d\n",lnum);
 	label[++ltop]=lnum;
 	lnum++;
	label[++ltop]=lnum;
	fprintf(f1,"$L%d:\n",lnum);
	//}
	/*if(for_cond_num == 2)//if both init and test exp not there
	{
		
	}*/
}

void for_end()
{
	//fprintf(f1,"\nfor_end() prints:\n");
	int x,y;
	y=label[ltop--];
	x=label[ltop-1];
	ltop = ltop - 2;
	fprintf(f1,"\t\tgoto $L%d\n",y);
	fprintf(f1,"$L%d: \n",x);
	ltop--;
}

int size(char* text)
	{
		if(!strcmp(text,"int"))
			return(sizeof(int));
	        if(!strcmp(text,"double"))
			return(sizeof(double));
		if(!strcmp(text,"float"))
			return(sizeof(float));
		if(!strcmp(text,"char"))
			return(sizeof(char));
		if(!strcmp(text,"long"))
			return(sizeof(long));
		else 
			return 0;

	}
void switch_start()
{
	//fprintf(f1,"\nswitch start\n");
	lnum++;
	label[++ltop]=lnum;
	last_label = lnum;
	lnum++;
	//fprintf(f1,"$L%d:\n",lnum);
	//fprintf(f1,"\n----------------------\n");
}

void switch_case(char* text)
{
	//fprintf(f1,"\nSwitch_case\n");
	fprintf(f1,"\n$L%d:\n",lnum);
	lnum++;
	//fprintf(f1,"lnum = %d\n",lnum);
 	fprintf(f1,"if(%s != %s)",switch_exp,text);
 	fprintf(f1,"\tgoto $L%d\n",lnum);
	//fprintf(f1,"\n----------------------\n");

}

void switch_end()
{
	//fprintf(f1,"\nSwitch_end\n");
	fprintf(f1,"\n$L%d:\n",lnum);
	fprintf(f1,"$L%d:\n",last_label);
	//top--;
	//stop--;
	//fprintf(f1,"\n----------------------\n");
}

void switch_default()
{
	//fprintf(f1,"\nSwitch_default\n");
	//int x=label[ltop--];
	fprintf(f1,"\n$L%d:\n",lnum);
	lnum++;
}

void switch_break()
{
	//fprintf(f1,"\nSwitch_break\n");
	//switch_stack[++stop]=1;
	fprintf(f1,"\t\tgoto $L%d\n",last_label);
	//fprintf(f1,"\n----------------------\n");
}

void switch_nobreak()
{
	fprintf(f1,"\nSwitch_nobreak\n");
	switch_stack[++stop]=2;
	lnum++;
	label[++ltop]=lnum;
	fprintf(f1,"\t\tgoto $L%d\n",label[ltop]);
	//fprintf(f1,"\n----------------------\n");

}

void push(char* text)
{
	printf(">PUSHING: %s\n<",text);
  	strcpy(st[++top],text);
}

void codegen_unary()
{
 	sprintf(tempo,"$t%d",i);
 	if(strcmp(st[top],"++") == 0 || strcmp(st[top],"--") == 0)
  	{	
  		fprintf(f1,"%s\t=\t%s\t%c\t1\n",tempo,st[top-1],st[top][1]);
  		fprintf(f1,"%s\t=\t%s\n",st[top-1],tempo);
  		top-=2;
  	}
  	else{
  		fprintf(f1,"%s\t=\t%s\t%c\t1\n",tempo,st[top],st[top-1][1]);
  		fprintf(f1,"%s\t=\t%s\n",st[top],tempo);
  		top-=2;

  	}
  
  	
 	strcpy(st[top],tempo);
 	i++;
}
void codegen_logical()
{
 	sprintf(tempo,"$t%d",i);
  	fprintf(f1,"%s\t=\t%s\t%s\t%s\n",tempo,st[top-2],st[top-1],st[top]);
  	top-=2;
 	strcpy(st[top],tempo);
 	i++;
}
void codegen_algebric()
{
 	sprintf(tempo,"$t%d",i); // converts temp to reqd format
  	fprintf(f1,"%s\t=\t%s\t%s\t%s\n",tempo,st[top-2],st[top-1],st[top]);
  	top-=2;
 	strcpy(st[top],tempo);
 	i++;
}
void codegen_assign()
{
 	fprintf(f1,"%s\t=\t%s\n",st[top-2],st[top]);
 	top-=3;
}
void intermediateCode()
{
	int Labels[100000];
	char buf[100];
	f1=fopen("output","r");
	int flag=0,lineno=1;
	memset(Labels,0,sizeof(Labels));
	while(fgets(buf,sizeof(buf),f1)!=NULL)
	{
		//printf(" %s",buf);
		if(buf[0]=='$'&&buf[1]=='$'&&buf[2]=='L')
		{
			int k=atoi(&buf[3]);
			//printf("hi %d\n",k);
			Labels[k]=lineno;
		}
		else
		{
			lineno++;
		}
	}
	fclose(f1);
	f1=fopen("output","r");
	lineno=0;

	printf("\n\n\n*********************InterMediate Code***************************\n\n");
	while(fgets(buf,sizeof(buf),f1)!=NULL)
	{
		//printf("%s",buf);
		if(buf[0]=='$'&&buf[1]=='$'&&buf[2]=='L')
		{
			;
		}
		else
		{
			flag=0;
			lineno++;
			printf("%3d:\t",lineno);
			int len=strlen(buf),i,flag1=0;
			for(i=len-3;i>=0;i--)
			{
				if(buf[i]=='$'&&buf[i+1]=='$'&&buf[i+2]=='L')
				{
					flag1=1;
					break;
				}
			}
			if(flag1)
			{
				buf[i]=='\0';
				int k=atoi(&buf[i+3]),j;
				//printf("%s",buf);
				for(j=0;j<i;j++)
					printf("%c",buf[j]);
				printf(" %d\n",Labels[k]);
			}
			else printf("%s",buf);
		}
	}
	printf("%3d:\tend\n",++lineno);
	fclose(f1);
}

int main()
{
	f1=fopen("output","w");
    printf("\nCode After Stripping off Comments:");
    printf("\n-------------------------------------------------------------------------------------------------\n");
    yyparse();
    fclose(f1);
    printf("\n-------------------------------------------------------------------------------------------------\n");
    if(success)
    	printf("\n\t\t\t\t\tParsing Successful!\n\n");
			int i = 0;
		printf("\n\t\t\t\t\tSYMBOL TABLE\n\n");
		printf("Scope_Num\tTok_Num\t\t Symbol\t\t\tTypeOfToken\t\tLine Number\tSize\n");
		printf("----------------------------------------------------------------------------------------------\n");
		for(i = 0; i < tcnt; i ++)
		{
			if(symtab[i].tok_num != 0)
				printf("%5d\t\t%5d\t\t%8s\t\t%8s\t\t%5d\t\t%5d\n",symtab[i].scope_num,symtab[i].tok_num,symtab[i].symbol,symtab[i].type,symtab[i].lineno,symtab[i].size);
		}
		printf("Total number of tokens : %d\n",tcnt);
		int present_flag=0;
		int redeclare_flag=0;
		for(int i = 0; i < tcnt; i ++)
		{
			if(symtab[i].tok_num != 0)
			{
				if(!strcmp(symtab[i].type, "Id"))
				{
					
					for(int j=0;j<tcnt;j++)
					{
						if(!strcmp(symtab[j].symbol, symtab[i].symbol)&& strcmp(symtab[j].type, "Id"))
						{

							present_flag = 1;
							break;
						
						}
					}
					if(present_flag == 0)
						printf("Undefined variable at %d\n", symtab[i].lineno);
					present_flag=0;
				}
		    }
	    }

		for(int i = 0; i < tcnt; i ++)
		{
			if(symtab[i].tok_num != 0)
			{
				if(strcmp(symtab[i].symbol, "printf") && strcmp(symtab[i].symbol, "main"))
				{
					for(int j=0;j<tcnt;j++)
					{
						if(!strcmp(symtab[j].symbol, symtab[i].symbol)&& strcmp(symtab[j].type, "Id"))
						{
							if(symtab[j].tok_num < symtab[i].tok_num && strcmp(symtab[i].type, "Id"))
							{
								redeclare_flag = 1;
								break;
							}
						}
					}
					if(redeclare_flag==1)
						printf("Redeclaration of variable at %d\n", symtab[i].lineno);
					redeclare_flag=0;
				}
			}			
		}

	intermediateCode();
    return 0;
}

int yyerror(const char *msg)
{
	extern int yylineno;
	printf("Parsing Failed\nLine Number: %d %s\n",yylineno,msg);
	success = 0;
	return 0;
}
