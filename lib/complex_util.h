//
// Created by jordao on 27/09/18.
//

#ifndef SIGNALS_AND_SYSTEM_COMPLEX_UTIL_H
#define SIGNALS_AND_SYSTEM_COMPLEX_UTIL_H
#include <complex.h>
#include <math.h>
#include <stdlib.h>

#define EXP_ELEMENT(n, N) (cexp(I*2*M_PI*n/N))

typedef struct exp_vector{
    int length;
    double complex* vector;
}Exp_vector;


Exp_vector* new_exp_vector(int length);



#endif //SIGNALS_AND_SYSTEM_COMPLEX_UTIL_H
