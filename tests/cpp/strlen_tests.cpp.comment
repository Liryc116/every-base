#include "my.h"
#include <criterion/criterion.h>

Test(my_strlen, is_defined) //Test existence
{
    my_strlen("");
}

Test(my_strlen, empty_str_0)
{
    int res;

    res = my_strlen("");
    cr_assert_eq(0, res);
}

Test(my_strlen, hellow_str_12)
{
    int res;

    res = my_strlen("Hello World!");
    cr_assert_eq(12, res);
}
