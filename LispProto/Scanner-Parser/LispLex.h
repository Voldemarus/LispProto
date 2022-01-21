//
//  LispLex.h
//  LispProto
//
//  Created by Водолазкий В.В. on 20.01.2022.
//

#ifndef LispLex_h
#define LispLex_h


#define ERROR       -1


#define TYPE        1
#define LEFT_PAR    3
#define RIGHT_PAR   4
#define NUMBER      5           // As NSNumber is used to sotre values
#define STRING      6
#define IDENTIFIER  7
#define APOSTROPH   8
#define NIL_LISP    9
#define T_LISP      10

// Prebuilt functions
#define     CAR_LISP         1000
#define     CONS_LISP        1002
#define     ATOM_LISP        1003
#define     LIST_LISP        1004
#define     QUOTE_LISP       1005
#define     EVAL_LISP        1006
#define     MAP_LISP         1007
#define     LAMBDA_LISP      1008
#define     DEFUN_LISP       1009
#define     EQ_LISP          1010
#define     COND_LISP        1011
#define     NULL_LISP        1012
#define     SETQ_LISP        1013
#define     PROG_LISP        1014
#define     READ_LISP        1015
#define     PRINT_LISP       1016
#define     GENSYM_LISP      1017
#define     RETURN_LISP      1018
#define     AND_LISP         1019
#define     OR_LISP          1020
#define     MEMEBER_LISP     1021
#define     NUMBERP_LISP     1022
#define     PLUS_LISP        1023
#define     MINUS_LISP       1024
#define     TIMES_LISP       1025
#define     DIFFERENCE_LISP  1026
#define     QUOTIENT_LISP    1027
#define     REMINDER_LISP    1028
#define     EXP_LISP         1029
#define     ADD1_LISP        1030
#define     SUB1_LISP        1031
#define     MAX_LISP         1032
#define     MIN_LISP         1033
#define     LESSP_LISP       1034
#define     GREATERP_LISP    1035
#define     GREQP_LISP       1036
#define     MINUSP_LISP      1037
#define     ZEROP_LISP       1038
#define     ONEP_LISP        1039
#define     MAPLIST_LISP     1040
#define     DIVIDE_LISP      1041
#define     LOG_EXP          1042
#deine      PP_LISP          1043

#endif /* LispLex_h */
