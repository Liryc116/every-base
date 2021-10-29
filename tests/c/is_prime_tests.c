#include "my.h"
#include <criterion/criterion.h>

Test(is_prime, is_defined)
{
    is_prime(0);
}

Test(is_prime, 0_is_0)
{
    int res;

    res = is_prime(0);
    cr_assert_eq(0, res);
}

Test(is_prime, 1_is_0)
{
    int res;

    res = is_prime(1);
    cr_assert_eq(0, res);
}

Test(is_prime, 13_is_1)
{
    unsigned long res;

    res = is_prime(13);

    cr_assert_eq(1, res);
}
