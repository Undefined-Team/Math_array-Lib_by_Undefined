#include "ud_math_array.h"

ud_arr_float_a  *ud_matha_softmax(ud_arr_float_a* x)
{
    if (x->type != ud_matha_type_float()) ud_ut_error("Input must be a float array");
    float *new_val = ud_math_softmax((float*)x->val, x->len);
    return ud_arr_tnew(ud_matha_type_float(), x->len, new_val);
}