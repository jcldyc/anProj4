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
    Ident = 1,
    Integer = 2,
    RealConst = 3,
    Var = 11,
    Int = 12,
    Real = 13,
    Boolean = 14,
    Record = 15,
    End = 16,
    Bind = 17,
    To = 18,
    Assert = 19,
    Begin = 20,
    Loop = 21,
    Exit = 22,
    When = 23,
    If = 24,
    Then = 25,
    ElsIf = 26,
    Else = 27,
    Put = 28,
    Or = 29,
    And = 30,
    Not = 31,
    NotEq = 32,
    Div = 33,
    Mod = 34,
    Semicolon = 41,
    Colon = 42,
    ColonEq = 43,
    Lt = 44,
    Gt = 45,
    Eq = 46,
    Le = 47,
    Ge = 48,
    Plus = 49,
    Minus = 50,
    Star = 51,
    Slash = 52,
    Dot = 53,
    Comma = 54,
    LParen = 55,
    RParen = 56,
    Prog = 57,
    NoType = 61
  };
#endif
/* Tokens.  */
#define Ident 1
#define Integer 2
#define RealConst 3
#define Var 11
#define Int 12
#define Real 13
#define Boolean 14
#define Record 15
#define End 16
#define Bind 17
#define To 18
#define Assert 19
#define Begin 20
#define Loop 21
#define Exit 22
#define When 23
#define If 24
#define Then 25
#define ElsIf 26
#define Else 27
#define Put 28
#define Or 29
#define And 30
#define Not 31
#define NotEq 32
#define Div 33
#define Mod 34
#define Semicolon 41
#define Colon 42
#define ColonEq 43
#define Lt 44
#define Gt 45
#define Eq 46
#define Le 47
#define Ge 48
#define Plus 49
#define Minus 50
#define Star 51
#define Slash 52
#define Dot 53
#define Comma 54
#define LParen 55
#define RParen 56
#define Prog 57
#define NoType 61

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 21 "mT.y" /* yacc.c:1909  */
 tree p; int i; 

#line 151 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
