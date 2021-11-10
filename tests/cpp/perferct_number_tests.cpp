#include "my.h"
#include <criterion/criterion.h>

Test(perfect_number, is_defined)
{
    is_perfect_number(0);
}

Test(perfect_number, 0_is_0)
{
    int res;

    res = is_perfect_number(0);
    cr_assert_eq(0, res);
}

Test(perfect_number, 43_is_0)
{
    int res;

    res = is_perfect_number(43);
    cr_assert_eq(0, res);
}

Test(perfect_number, 496_is_1)
{
    int res;

    res = is_perfect_number(496);

    cr_assert_eq(1, res);
}
