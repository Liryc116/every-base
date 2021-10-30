#include "my.h"
#include <criterion/criterion.h>

Test(div_sum, is_defined)
{
    divisor_sum(0);
}

Test(div_sum, 0_is_0)
{
    unsigned long res;

    res = divisor_sum(0);
    cr_assert_eq(0, res);
}

Test(div_sum, 1_is_0)
{
    unsigned long res;

    res = divisor_sum(1);
    cr_assert_eq(0, res);
}

Test(div_sum, 36_is_55)
{
    unsigned long res;

    res = divisor_sum(36);

    cr_assert_eq(55, res);
}
