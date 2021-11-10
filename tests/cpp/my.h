#ifndef __MY_H__
#define __MY_H__

#include <stdlib.h>
#include <string>

unsigned int my_atoui(std::string str);

int my_atoi(std::string str);

unsigned char digit_count(unsigned long n);

unsigned long divisor_sum(unsigned long n);

unsigned long facto(unsigned long n);

unsigned long fibo(unsigned long n);

void fizzbuzz(unsigned long n);

int is_prime(unsigned long n);

int is_sorted(int* array, size_t length);

unsigned long isqrt(unsigned long n);

int is_perfect_number(unsigned long n);

unsigned long power(unsigned long x, char n);

unsigned long power_of_two(unsigned long n);

int my_strlen(char* str);


#endif
