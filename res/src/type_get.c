#include "ud_math_array.h"

ud_arr_type    *ud_matha_type_float(void)
{
    static ud_arr_type *type_float = NULL;
    if (!type_float) type_float = ud_arr_type_get(float);
    return type_float;
}

ud_arr_type    *ud_matha_type_size_t(void)
{
    static ud_arr_type *type_size_t = NULL;
    if (!type_size_t) type_size_t = ud_arr_type_get(size_t);
    return type_size_t;
}