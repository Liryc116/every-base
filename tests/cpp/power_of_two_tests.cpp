#include "my.h"
#include <criterion/criterion.h>

Test(power_of_2, is_defined)
{
    power_of_two(0);
}

Test(power_of_2, 0_is_1)
{
    unsigned long res;

    res = power_of_two(0);
    cr_assert_eq(1, res);
}

Test(power_of_2, 10_is_1024)
{
    unsigned long res;

    res = power_of_two(10);
    cr_assert_eq(1024, res);
}

Test(power_of_2, 7_is_128)
{
    unsigned long res;

    res = power_of_two(7);

    cr_assert_eq(128, res);
}
