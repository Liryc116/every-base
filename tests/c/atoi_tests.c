#include "my.h"
#include <criterion/criterion.h>

Test(atoi, is_defined) //Test existence
{
    my_atoi("");
}

Test(atoi, empty_str_0)
{
    unsigned int res;

    res = my_atoi("");
    cr_assert_eq(0, res);
}

Test(atoi, invalid_is_0)
{
    unsigned int res;

    res = my_atoi("Hello World!");
    cr_assert_eq(0, res);
}

Test(atoi, 123_is_123)
{
    unsigned int res;

    res = my_atoi("123");
    cr_assert_eq(123, res);
}

Test(atoi, m0123_is_m123)
{
    unsigned int res;

    res = my_atoi("-0123");
    cr_assert_eq(-123, res);
}
