#include "ud_math_array.h"

ud_arr*   ud_matha_softmax(ud_arr* x)
{
    float sum = 0;
    ud_arr* y;

    y = ud_arr_init(sizeof(float), x->len);
    size_t y_len = y->len;
    float *y_a = (float*)y->val;
    float *x_a = (float*)x->val;
    for (size_t i = 0; i < y_len; i++)
    {
        y_a[i] = ud_math_exp(x_a[i]);
        sum += y_a[i];
    }
    for (size_t i = 0; i < y_len; i++)
        y_a[i] /= sum;
    return y;
}