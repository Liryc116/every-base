#include <iostream>

void fizzbuzz(int n)
{
    for(int i = 0; i<=n; i++)
    {
        int ndiv3;
        if((ndiv3=i%3)==0)
            std::cout << "Fizz";
        if(i%5==0)
            std::cout << "Buzz";
        else if(ndiv3)
            std::cout << i;


        std::cout << std::endl;
    }
}
