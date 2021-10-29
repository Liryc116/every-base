#include "my.h"
#include <criterion/criterion.h>

Test(fibo, is_defined)
{
    fibo(0);
}

Test(fibo, 0_is_0)
{
    unsigned long res;

    res = fibo(0);
    cr_assert_eq(0, res);
}

Test(fibo, 1_is_1)
{
    unsigned long res;

    res = fibo(1);
    cr_assert_eq(1, res);
}

Test(fibo, 7_is_21)
{
    unsigned long res;

    res = fibo(7);

    cr_assert_eq(13, res);
}
