#include "my.h"
#include <criterion/criterion.h>

Test(power, is_defined)
{
    power(0, 0);
}

Test(power, 0p3_is_1)
{
    unsigned long res;

    res = power(0, 3);
    cr_assert_eq(1, res);
}

Test(power, 3p7_is_2187)
{
    unsigned long res;

    res = power(3, 7);
    cr_assert_eq(2187, res);
}

Test(power, 7p4_is_2401)
{
    unsigned long res;

    res = power(7, 4);

    cr_assert_eq(2401, res);
}
