#ifndef UD_MATH_ARRAY_H
# define UD_MATH_ARRAY_H

// Lib
#include <ud_array.h>
#include <ud_math.h>

// Macro
# define ud_matha_si_sort(arr)      ud_math_merge_sort((size_t*)arr->val, 0, arr->len - 1)

// Structures

// Prototypes

ud_arr*                             ud_matha_softmax(ud_arr* x);
ud_arr                              *ud_matha_itoa(int n);
float                               ud_matha_mean(ud_arr *x);
float                               ud_matha_min_a(ud_arr *x);
float                               ud_matha_max_a(ud_arr *x);

#endif