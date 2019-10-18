#ifndef UD_MATH_ARRAY_H
# define UD_MATH_ARRAY_H

// Lib
#include <ud_array.h>
#include <ud_math.h>
#include <ud_string_array.h>

// Macro
# define ud_matha_si_sort(arr)          (if (arr->type != ud_arr_type_size_t()) ud_ut_error("Input must be a size_t array"); else ud_math_merge_sort((size_t*)arr->val, 0, arr->len - 1);)

// Structures

// Prototypes
ud_arr_type                         *ud_matha_type_float(void);
ud_arr_type                         *ud_matha_type_size_t(void);
ud_arr_float_a                      *ud_matha_softmax(ud_arr_float_a* x);
ud_arr_float_a                      *ud_matha_itoa(long long n);
float                               ud_matha_mean(ud_arr_float_a *x);
float                               ud_matha_min_a(ud_arr_float_a *x);
float                               ud_matha_max_a(ud_arr_float_a *x);

#endif