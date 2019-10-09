#include "ud_math_array.h"

float   ud_matha_min_a(ud_arr *x)
{
    if (x->type_s != sizeof(float)) ud_ut_error("Input must be a float array");
    return ud_math_min_a((float*)x->val, x->len);
}