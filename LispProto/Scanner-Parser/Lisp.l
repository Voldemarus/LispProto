%{
    #include "LispLex.h"
%}

%%

"("       return LEFT_PAR;
")"       return RIGHT_PAR;
"'"       return APOSTROPH;
"-"       return DIFFERENCE_LISP;
"+"       return PLUS_LISP;
"*"       return TIMES_LISP;
"/"       return DIVIDE_LISP;
(?:NIL)   return NIL_LISP;
(?:T)     return T_LISP;

(?i:C[AD]+R)     return CAR_LISP;       // the whole CAR/CDR family
(?i:CONS)        return CONS_LISP;
(?i:LIST)        return LIST_LISP;
(?i:ATOM)        return ATOM_LISP;
(?i:QUOTE)       return QUOTE_LISP;
(?i:MAPC[AD]R)   return MAP_LIST;       // MAPCAR/MAPCDR
(?i:LAMBDA)      return LAMBDA_LISP;
(?:EVAL)         return EVAL_LISP;
(?:EQ)           return EQ_LISP;
(?:COND)         return COND_LISP;
(?:NULL)         return NULL_LISP;
(?:DEFUN)        return DEFUN_LISP;
(?:SETQ)         return SETQ_LISP;
(?:PROG[12N])    return PROG_LISP;
(?:READ)         return READ_LISP;
(?:PRINT)        return PRINT_LISP;
(?:GENSYM)       return GENSYM_LISP;
(?:RETURN)       return RETURN_LISP;
(?:AND)          return AND_LISP;
(?:OR)           return OR_LISP;
(?:MEMBER)       return MEMBER_LISP;
(?:NUMBERP)      return NUMBERP_LISP;
(?:NEG)          return MINUS_LISP;
(?:QUOTIENT)     return QUOTIENT_LISP;
(?:REMINDER)     return REMINDER_LISP;
(?:EXP)          return EXP_LISP;
(?:LOG[2|10]?)   return LOG_EXP;
(?:ADD1)         return ADD1_LISP;
(?:SUB1)         return SUB1_LISP;
(?:MAX)          return MAX_LISP;
(?:MIN)          return MIN_LISP;
(?:LESSP)        return LESSP_LISP;
(?GREATERP)      return GREATERP_LISP;
(?:GREQP)        return GREQP_LISP;
(?:ZEROP)        return ZEROP_LISP;
(?:ONEP)         return ONEP_LISP;
(?:MAPLIST)      return MAPLIST_LISP;
(?:PP)           return PP_LISP;

-?([0-9]+|[0-9]*\.[0-9]+([eE][-+]?[0-9]+)?)     return NUMBER;
\042.*\042              return STRING;
[ \t\n]     ;               // ignore whitespaces
[a-zA-Z]+[a-zA-Z0-9_]    return IDENTIFIER;


.       {   printf("Error\n"); return ERROR; }

%%

int yywrap()
{
    return 1;
}
