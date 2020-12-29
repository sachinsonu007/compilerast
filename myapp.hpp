/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_MYAPP_HPP_INCLUDED
# define YY_YY_MYAPP_HPP_INCLUDED
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
    TOKEN_CHARCONST = 258,
    TOKEN_INTCONST = 259,
    TOKEN_FLOATCONST = 260,
    TOKEN_STRINGCONST = 261,
    TOKEN_ID = 262,
    TOKEN_WHITESPACEspace = 263,
    TOKEN_WHITESPACEtab = 264,
    TOKEN_WHITESPACEnewLine = 265,
    TOKEN_ARITHMATICOP_MINUS = 266,
    TOKEN_ARITHMATICOP_DIV = 267,
    TOKEN_ARITHMATICOP_POW = 268,
    TOKEN_ARITHMATICOP_PLUS = 269,
    TOKEN_ARITHMATICOP_MULT = 270,
    TOKEN_BITWISEOP = 271,
    TOKEN_LOGICOP = 272,
    TOKEN_RELATIONOP = 273,
    TOKEN_ASSIGNOP = 274,
    TOKEN_LOGICOP_NOT = 275,
    TOKEN_LEFTPAREN = 276,
    TOKEN_RIGHTPAREN = 277,
    TOKEN_LCB = 278,
    TOKEN_RCB = 279,
    TOKEN_SEMICOLON = 280,
    TOKEN_COMMA = 281,
    TOKEN_UNTIL = 282,
    TOKEN_LB = 283,
    TOKEN_RB = 284,
    TOKEN_PRFUNC = 285,
    TOKEN_ELSECONDITION = 286,
    TOKEN_INTTYPE = 287,
    TOKEN_VOIDTYPE = 288,
    TOKEN_DOUBLETYPE = 289,
    TOKEN_FLOATTYPE = 290,
    TOKEN_CHARTYPE = 291,
    TOKEN_STRINGTYPE = 292,
    TOKEN_BREAKSTMT = 293,
    TOKEN_CONTINUESTMT = 294,
    TOKEN_MAINFUNC = 295,
    TOKEN_LOOP = 296,
    TOKEN_RETURN = 297,
    TOKEN_IFCONDITION = 298,
    TOKEN_COMMENT = 299,
    TOKEN_MOVCONDITION = 300
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 61 "Bison_Rule.y"

    int intVal;
	char chVal;
    char* string;
    float floatVal;
	struct tnode *node;

#line 111 "myapp.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYAPP_HPP_INCLUDED  */
