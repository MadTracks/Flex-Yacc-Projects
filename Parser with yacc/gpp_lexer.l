%{
#include <stdio.h>
#include "y.tab.h"
#include <string.h>
%}
%%
"and" {return KW_AND;}
"or" {return KW_OR;}
"not" {return KW_NOT;}
"equal" {return KW_EQUAL;}
"less" {return KW_LESS;}
"nil" {return KW_NIL;}
"list" {return KW_LIST;}
"append" {return KW_APPEND;}
"concat" {return KW_CONCAT;}
"set" {return KW_SET;}
"deffun" {return KW_DEFFUN;}
"while" {return KW_WHILE;}
"for" {return KW_FOR;}
"if" {return KW_IF;}
"exit" {return KW_EXIT;}
"load" {return KW_LOAD;}
"disp" {return KW_DISP;}
"true" {return KW_TRUE;}
"false" {return KW_FALSE;}
[+] {return OP_PLUS;}
[-] {return OP_MINUS;}
[/] {return OP_DIV;}
[*] {return OP_MULT;}
[(] {return OP_OP;}
[)] {return OP_CP;}
"**" {return OP_DBLMULT;}
["].*["] {return STRING_VALUE;}
[,] {return OP_COMMA;}
";;".* {return COMMENT;}
[1-9][0-9]+ {yylval.value = atoi(yytext); return VALUE;}
[0-9] {yylval.value = atoi(yytext); return VALUE;}
[a-zA-Z_][a-zA-Z0-9_]+ {strcpy(yylval.identi.name,yytext); return IDENTIFIER;}
[a-zA-Z_] {strcpy(yylval.identi.name,yytext); return IDENTIFIER;}
[0-9]+[a-zA-Z_0-9]+ {printf("SYNTAX_ERROR %s cannot be identifier. Identfier must not start with numbers.\n",yytext);}
[ \t\n]+ {;}
. {printf("SYNTAX_ERROR %s cannot be tokenized.\n",yytext);}
%%
int yywrap(){}
