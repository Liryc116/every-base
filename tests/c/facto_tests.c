#include "my.h"
#include <criterion/criterion.h>

Test(facto, is_defined)
{
    facto(0);
}

Test(facto, 0_is_1)
{
    unsigned long res;

    res = facto(0);
    cr_assert_eq(1, res);
}

Test(facto, 2_is_2)
{
    unsigned long res;

    res = facto(2);
    cr_assert_eq(2, res);
}

Test(facto, 7_is_5040)
{
    unsigned long res;

    res = facto(7);

    cr_assert_eq(5040, res);
}
