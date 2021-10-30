#include "my.h"
#include <criterion/criterion.h>

Test(digit_count, is_defined)
{
    digit_count(0);
}

Test(digit_count, 0_is_1)
{
    char res;

    res = digit_count(0);
    cr_assert_eq(1, res);
}

Test(digit_count, 48109_is_5)
{
    char res;

    res = digit_count(48109);
    cr_assert_eq(5, res);
}
