#include "ud_math_array.h"

ud_arr  *ud_matha_itoa(long long n)
{
    size_t len;
    char *str = ud_math_itoa_l(n, &len);
    return ud_arr_new(sizeof(char), len, str);
}