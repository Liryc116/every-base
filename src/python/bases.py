# functions are in alphabetic order

def atoi(str):
    if str[0]=='-':
        return - atoui(str[1:])
    return atoui(str)

def atoui(str):
    res = 0

    for i in str:
        # 48 == ord('0')
        res = res * 10 + (ord(i)-48) 
    
    return res

def bubble_sort(L):
    n = len(L)
    while n>1:
        newn = 0
        for i in range (1, n):
            if(L[i-1]>L[i]):
                swap(L, i, i-1)
                newn = i
        n = newn

def binsearch(L, x):
    l = 0
    r = len(L)

    while l<=r:
        m = (l+r)//2

        if L[m]==x:
            return True
        elif L[m]<x:
            r = m-1
        else:
            l = m+1
    
    return False

def digit_count(n):
    if n==0:
        return 1

    res = 0

    while(n>0):
        res+=1
        n=n//10

    return res

def divisor_sum(n):
    
    if n == 0:
        return 0

    res = 1
    sqrt = int(n**0.5)
    for i in range(2, sqrt):
        if(n%i==0):
            res+= i + n//i

    if(sqrt**2==n):
        res+=sqrt

    return res

def facto(n):
    res = 1

    for i in range(2, n+1):
        res*=i

    return res

def fibo(n):

    if n == 0:
        return 0

    f1 = 0
    f2 = 1

    for _ in range(n):
        tmp = f1
        f1 = f2
        f2 += tmp

    return f2

def fizzbuzz(n):
    for i in range(n+1):
        div3 = i%3==0
        if div3:
            print("Fizz", end="")
        if i%5==0:
            print("Buzz", end="")
        elif not div3:
            print(i, end="")

        print()

def is_prime(n):

    if n%2==0 and n!=2 or n==1:
        return False

    i = 3
    sqrt = int(n**0.5)
    while i<=sqrt:
        if n%i==0:
            return False
        i+=2

    return True

def isqrt(n):
    # without **0.5 of course or **
    root = n

    while root*root>n:
        root = (root+n//root)//2

    return root

def is_sorted(L):

    for i in range(len(L)-1):
        if L[i]>L[i+1]:
            return False
    
    return True

def perfect_numbers(n):
    return divisor_sum(n)==n

def power(x, n):
    #without ** of course
    res = 1

    while n>0:
        if n%2==0:
            x*=x
            n//=2
        else:
            res*=x
            n-=1
    
    return res

def power_of_two(n):
    return 1<<n

def quick_sort(L, lo=0, hi = -2):
    if hi == -2:
        hi = len(L) - 1
    if lo<hi:
        p = __partition(L, lo, hi)

        quick_sort(L, lo, p-1)
        quick_sort(L, p+1, hi)

def __partition(L, lo, hi):
    pivot = L[hi]
    i = lo-1

    for j in range(lo, hi+1):
        if L[j]<=pivot:
            i+=1
            swap(L, i, j)
    
    return i

def swap(L, i, j):
    tmp = L[i]
    L[i]=L[j]
    L[j]=tmp