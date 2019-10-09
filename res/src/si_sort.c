#include "ud_math_array.h"

void  ud_matha_si_sort(ud_arr *arr) 
{
    ud_merge_sort((size_t*)arr->val, 0, arr->len - 1); 
}