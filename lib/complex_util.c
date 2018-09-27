//
// Created by jordao on 27/09/18.
//

#include "complex_util.h"

Exp_vector *new_exp_vector(int length) {
    Exp_vector *new = malloc(sizeof(Exp_vector));
    new->vector = malloc(sizeof(double complex *) * length);
    new->length = length;
    int i;
    for (i = 0; i < length; i++) {
        new->vector[i] = EXP_ELEMENT(i, length);
    }
    return new;
}