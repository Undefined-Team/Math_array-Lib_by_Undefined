#include "ud_math_array.h"

void  ud_matha_si_sort(ud_arr *x) 
{
    if (x->type_s != sizeof(float)) ud_ut_error("Input must be a float array");
    ud_math_merge_sort((size_t*)x->val, 0, x->len - 1); 
}