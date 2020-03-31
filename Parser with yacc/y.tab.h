/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
    OP_OP = 258,
    OP_CP = 259,
    KW_LESS = 260,
    KW_NIL = 261,
    KW_WHILE = 262,
    KW_AND = 263,
    KW_APPEND = 264,
    KW_CONCAT = 265,
    KW_EQUAL = 266,
    KW_FALSE = 267,
    KW_LIST = 268,
    KW_NOT = 269,
    KW_OR = 270,
    KW_SET = 271,
    KW_TRUE = 272,
    KW_DEFFUN = 273,
    KW_FOR = 274,
    KW_IF = 275,
    KW_EXIT = 276,
    KW_LOAD = 277,
    KW_DISP = 278,
    STRING_VALUE = 279,
    OP_COMMA = 280,
    COMMENT = 281,
    OP_PLUS = 282,
    OP_MINUS = 283,
    OP_MULT = 284,
    OP_DIV = 285,
    OP_DBLMULT = 286,
    VALUE = 287,
    IDENTIFIER = 288
  };
#endif
/* Tokens.  */
#define OP_OP 258
#define OP_CP 259
#define KW_LESS 260
#define KW_NIL 261
#define KW_WHILE 262
#define KW_AND 263
#define KW_APPEND 264
#define KW_CONCAT 265
#define KW_EQUAL 266
#define KW_FALSE 267
#define KW_LIST 268
#define KW_NOT 269
#define KW_OR 270
#define KW_SET 271
#define KW_TRUE 272
#define KW_DEFFUN 273
#define KW_FOR 274
#define KW_IF 275
#define KW_EXIT 276
#define KW_LOAD 277
#define KW_DISP 278
#define STRING_VALUE 279
#define OP_COMMA 280
#define COMMENT 281
#define OP_PLUS 282
#define OP_MINUS 283
#define OP_MULT 284
#define OP_DIV 285
#define OP_DBLMULT 286
#define VALUE 287
#define IDENTIFIER 288

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 9 "gpp_interpreter.y" /* yacc.c:1909  */
int value; 
struct{ 
char name[256]; 
int value; 
}identi; 
int * list;

#line 128 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
