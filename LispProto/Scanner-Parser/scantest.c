//
// Not included into LISP system,, used for flex parser only!
//


#include <stdio.h>

#include "LispLex.h"

extern int yylex();
extern int yylineno;
extern char *yytext;

int main() 
{
	int ntoken, vtoken;
	ntoken = yylex();
	while (ntoken) {
        if (ntoken == ERROR) {
            printf("Error - %s\n",yytext);
        } else {
            switch(ntoken) {
                case LEFT_PAR:  {
                    printf("(");
                    break;
                }
                case RIGHT_PAR: {
                    printf(")");
                    break;
                }
                case IDENTIFIER: {
                    printf("IDENTIFIER %s", yytext);
                    break;
                }
                case NUMBER: {
                    printf("NUMBER %s", yytext);
                    break;
                }
                case STRING: {
                    printf("STRING %s", yytext);
                    break;
               }
                case CAR_LISP: {
                    printf(" --> %s", yytext);
                }
            }
            printf(" ");
        }
		ntoken = yylex();
	}
	return 0;
}
