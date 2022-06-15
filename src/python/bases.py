# functions are in alphabetic order

def array_rot_left(L, n):
    length = len(L)
    n = n%length

    for i in range(n):
        moved = L[0]
        for k in range(length-1, 0, -1):
            tmp = L[k]
            L[k] = moved
            moved = tmp
        L[0] = moved


def array_rot_right(L, n):
    length = len(L)
    n = n%length

    for i in range(n):
        moved = L[-1]
        for k in range(0, length-1):
            tmp = L[k]
            L[k] = moved
            moved = tmp
        L[-1] = moved


def atoi(s):
    if str[0]=='-':
        return - atoui(s[1:])
    return atoui(s)


def atoui(s):
    res = 0

    for i in s:
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
    r = len(L)-1

    while l<=r:
        m = (l+r)//2

        if L[m]==x: 
            return True
        elif L[m]>x:
            r = m-1
        else:
            l = m+1
    
    return False


def char_histogram(s):
    h = [0]*26
    u_shift = 65 # ord('A')
    l_shift = 97 # ord('a')

    for c in s:
        if c>='a' and c<='z':
            h[ord(c)-l_shift]+=1
        if c>='A' and c<='Z':
            h[ord(c)-u_shift]+=1
    
    return h


def count_words(s):
    count = 0
    isSeparated = True

    for c in s:
        if((c>='a' and c<='z') or (c>='A' and c<='Z') or (c>='0'and c<='9')):
            if isSeparated:
                count+=1
                isSeparated=False
        else:
            isSeparated=True

    return count


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


def merge_sorted(a1, a2):
    len1 = len(a1)
    len2 = len(a2)
    res = [0]*(len1+len2) # More effective than appends

    i = 0
    j = 0
    k = 0

    while i<len1 or j<len2:
        if i<len1:
            if (j<len2 and a1[i]<=a2[j]) or j>=len2:
                res[k]=a1[i]
                i+=1
                k+=1
        if j<len2:
            if (i<len1 and a2[j]<=a1[i]) or i>=len1:
                res[k]=a2[j]
                j+=1
                k+=1
    return res


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


def quick_sort(L, lo = 0, hi = -2):
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


def sieve_of_eratosthenes(n): # n the max number, n>=2
    res = [True]*(n-1)

    for i in range(int(n**0.5)):
        if res[i]:
            j = (i+2)**2
            while j<=n:
                res[j-2]=False
                j+=(i+2)
    return res


def swap(L, i, j):
    tmp = L[i]
    L[i]=L[j]
    L[j]=tmp
