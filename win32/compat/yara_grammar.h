/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

#ifndef YY_YARA_YY_C_USERS_MICASNYD_WORKSPACE_CLAMAV_MICASNYD_BUILD_LIBCLAMAV_YARA_GRAMMAR_H_INCLUDED
# define YY_YARA_YY_C_USERS_MICASNYD_WORKSPACE_CLAMAV_MICASNYD_BUILD_LIBCLAMAV_YARA_GRAMMAR_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yara_yydebug;
#endif
/* "%code requires" blocks.  */
/* Line 2058 of yacc.c  */
#line 39 "yara_grammar.y"

#include "yara_compiler.h"


/* Line 2058 of yacc.c  */
#line 51 "C:/Users/micasnyd/workspace/clamav-micasnyd/build/libclamav/yara_grammar.h"

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     _RULE_ = 258,
     _PRIVATE_ = 259,
     _GLOBAL_ = 260,
     _META_ = 261,
     _STRINGS_ = 262,
     _CONDITION_ = 263,
     _IDENTIFIER_ = 264,
     _STRING_IDENTIFIER_ = 265,
     _STRING_COUNT_ = 266,
     _STRING_OFFSET_ = 267,
     _STRING_IDENTIFIER_WITH_WILDCARD_ = 268,
     _NUMBER_ = 269,
     _TEXT_STRING_ = 270,
     _HEX_STRING_ = 271,
     _REGEXP_ = 272,
     _ASCII_ = 273,
     _WIDE_ = 274,
     _NOCASE_ = 275,
     _FULLWORD_ = 276,
     _AT_ = 277,
     _FILESIZE_ = 278,
     _ENTRYPOINT_ = 279,
     _ALL_ = 280,
     _ANY_ = 281,
     _IN_ = 282,
     _OF_ = 283,
     _FOR_ = 284,
     _THEM_ = 285,
     _INT8_ = 286,
     _INT16_ = 287,
     _INT32_ = 288,
     _UINT8_ = 289,
     _UINT16_ = 290,
     _UINT32_ = 291,
     _MATCHES_ = 292,
     _CONTAINS_ = 293,
     _IMPORT_ = 294,
     _TRUE_ = 295,
     _FALSE_ = 296,
     _OR_ = 297,
     _AND_ = 298,
     _IS_ = 299,
     _NEQ_ = 300,
     _EQ_ = 301,
     _GE_ = 302,
     _GT_ = 303,
     _LE_ = 304,
     _LT_ = 305,
     _SHIFT_RIGHT_ = 306,
     _SHIFT_LEFT_ = 307,
     _NOT_ = 308
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 218 "yara_grammar.y"

  SIZED_STRING*   sized_string;
  char*           c_string;
  int8_t          expression_type;
  int64_t         integer;
  YR_STRING*      string;
  YR_META*        meta;
  YR_OBJECT*      object;


/* Line 2058 of yacc.c  */
#line 130 "C:/Users/micasnyd/workspace/clamav-micasnyd/build/libclamav/yara_grammar.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yara_yyparse (void *YYPARSE_PARAM);
#else
int yara_yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yara_yyparse (void *yyscanner, YR_COMPILER* compiler);
#else
int yara_yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YARA_YY_C_USERS_MICASNYD_WORKSPACE_CLAMAV_MICASNYD_BUILD_LIBCLAMAV_YARA_GRAMMAR_H_INCLUDED  */
