%{
#include <stdio.h>
%}
%%
"and" {printf("KW_AND\n");}
"or" {printf("KW_OR\n");}
"not" {printf("KW_NOT\n");}
"equal" {printf("KW_EQUAL\n");}
"less" {printf("KW_LESS\n");}
"nil" {printf("KW_NIL\n");}
"list" {printf("KW_LIST\n");}
"append" {printf("KW_APPEND\n");}
"concat" {printf("KW_CONCAT\n");}
"set" {printf("KW_SET\n");}
"deffun" {printf("KW_DEFFUN\n");}
"for" {printf("KW_FOR\n");}
"if" {printf("KW_IF\n");}
"exit" {printf("KW_EXIT\n");}
"load" {printf("KW_LOAD\n");}
"disp" {printf("KW_DISP\n");}
"true" {printf("KW_TRUE\n");}
"false" {printf("KW_FALSE\n");}
[+] {printf("OP_PLUS\n");}
[-] {printf("OP_MINUS\n");}
[/] {printf("OP_DIV\n");}
[*] {printf("OP_MULT\n");}
[(] {printf("OP_OP\n");}
[)] {printf("OP_CP\n");}
"**" {printf("OP_DBLMULT\n");}
["].*["] {printf("OP_C\nSTRING_VALUE\nOP_C\n");}
[,] {printf("OP_COMMA\n");}
";;".* {printf("COMMENT\n");}
[1-9][0-9]+ {printf("VALUE\n");}
[0-9] {printf("VALUE\n");}
[a-zA-Z_][a-zA-Z0-9_]+ {printf("IDENTIFIER\n");}
[a-zA-Z_] {printf("IDENTIFIER\n");}
[0-9]+[a-zA-Z_0-9]+ {printf("SYNTAX_ERROR %s cannot be identifier. Identfier must not start with numbers.\n",yytext);}
[ \t\n]+ {;}
. {printf("SYNTAX_ERROR %s cannot be tokenized.\n",yytext);}
%%
int yywrap(){}
int main()
{
    yylex();
}