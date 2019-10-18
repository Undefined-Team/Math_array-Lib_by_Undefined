#include "ud_math_array.h"

ud_arr_float_a  *ud_matha_itoa(long long n)
{
    size_t len;
    char *str = ud_math_itoa_l(n, &len);
    return ud_arr_tnew(ud_stra_type_char(), len, str);
}