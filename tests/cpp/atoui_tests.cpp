#include "my.h"
#include <string>
#include <criterion/criterion.h>

Test(atoui, is_defined) //Test existence
{
    std::string str = "";
    my_atoui(str);
}

Test(atoui, empty_str_0)
{
    unsigned int res;

    res = my_atoui("");
    cr_assert_eq(0, res);
}

Test(atoui, invalid_is_0)
{
    unsigned int res;
    std::string str = "Hello World!";

    res = my_atoui(str);
    cr_assert_eq(0, res);
}

Test(atoui, 123_is_123)
{
    unsigned int res;

    res = my_atoui("123");
    cr_assert_eq(123, res);
}

Test(atoui, 0123_is_123)
{
    unsigned int res;

    res = my_atoui("0123");
    cr_assert_eq(123, res);
}
