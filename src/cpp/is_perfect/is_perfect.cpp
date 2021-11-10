#include "../divisor_sum/divisor_sum.h"

int is_perfect_number(unsigned long n)
{
    if(!n)
        return 0;
    return divisor_sum(n)==n;
}
