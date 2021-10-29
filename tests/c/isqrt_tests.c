#include "my.h"
#include <criterion/criterion.h>

Test(isqrt, is_defined)
{
    isqrt(0);
}

Test(isqrt, 0_is_0)
{
    int res;

    res = isqrt(0);
    cr_assert_eq(0, res);
}

Test(isqrt, 9_is_3)
{
    int res;

    res = isqrt(9);
    cr_assert_eq(3, res);
}

Test(is_prime, 17_is_4)
{
    unsigned long res;

    res = isqrt(17);

    cr_assert_eq(4, res);
}
