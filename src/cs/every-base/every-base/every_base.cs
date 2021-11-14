using System;
using System.ComponentModel.DataAnnotations;

namespace every_base
{
    public class Bases
    {
        static void Main(string[] args)
        {
            
        }

        static int[] array_rotation_left(int[] array, int n)
        {
            int len = array.Length;
            n = n % len;

            for (int i = 0; i < n; i++)
            {
                for (int k = 0; k < len-1; k++)
                    swap(ref array, k, k+1);
            }
            
            return array;
        }

        static int[] array_rotation_right(int[] array, int n)
        {
            int len = array.Length;
            n = n % len;

            for (int i = 0; i < n; i++)
            {
                for (int k = len-1; k > 0; k--)
                    swap(ref array, k, k-1);
            }
            
            return array;
        }
        
        static int my_atoi(string str)
        {
            if(str[0]=='-')
                return  - (int) my_atoui(str.Substring(1));
            return (int) my_atoui(str);
        }

        // We assume the string correct (only digits char)
        static uint my_atoui(string str)
        {
            uint res = 0;

            int len = str.Length;
            for (int i = 0; i < len; res=(uint) (str[i]-'0'+res*10), i++) ;

            return res;
        }

        static bool binsearch(int[] array, int x)
        {
            int left = 0;
            int right = array.Length;

            while (left < right)
            {
                int mid = (right + left) / 2;

                if (array[mid] == x)
                    return true;
                else if (array[mid] > x)
                    right = mid;
                else
                    left = mid + 1;
            }
            
            return false;
        }

        static void bubble_sort(ref int[] array)
        {
            int len = array.Length;

            bool changed = true;
            for (int i = 1; i < len-1 && changed; i++)
            {
                changed = false;
                
                for (int k = 0; k < len-i; k++)
                {
                    if (array[k] > array[k + 1])
                    {
                        swap(ref array, k, k + 1);
                        changed = true;
                    }
                }
            }
        }
        
        static int[] char_histogram(string str)
        {
            int[] res = new int[26];
            int len = str.Length;
            
            for (int i=0; i<len; i++)
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                    res[str[i] - 'a'] += 1;
                else if (str[i] >= 'A' && str[i] <= 'Z')
                    res[str[i] - 'A'] += 1;
            }
            
            return res;
        }

        static int count_words(string str)
        {
            int res = 0;
            int len = str.Length;
            bool separated = true;

            for (int i = 0; i < len; i++)
            {
                if ((str[i] >= 'a' && str[i] <= 'z') 
                    || (str[i] >= 'A' && str[i] <= 'Z') 
                    || (str[i] >= '0' && str[i] <= '9'))
                {
                    if (separated)
                        res += 1;
                    separated = false;
                }
                else
                    separated = true;
            }

            return res;
        }

        static int digit_count(int n)
        {
            int res = 1;

            for (; n > 9; res++, n /= 10) ;
            
            return res;
        }

        static int divisor_sum(int n)
        {
            int sum = 1;

            int i;
            for (i = 2; i * i < n; i++)
            {
                if (n % i == 0)
                    sum += i + n / i;
            }

            if (i * i == n)
                sum += i;
            
            return sum;
        }

        static int facto(int n)
        {
            int res = 1;

            for (int i = 2; i < n; res *= i, i++) ;
            
            return res;
        }

        static int fibo(int n)
        {
            if (n <= 0)
                return 0;
            
            int f0 = 0;
            int f1 = 1;

            for (int i = 1; i < n; i++)
            {
                int tmp = f1;
                f1 += f0;
                f0 = tmp;
            }

            return f1;
        }

        static void fizzbuzz(int n)
        {
            for (int i = 0; i <= n; i++)
            {
                bool div3;

                if ((div3 = (i%3==0)))
                    Console.Write("Fizz");
                if (i%5==0)
                    Console.Write("Buzz");
                else if (!div3)
                    Console.Write(i);
                    
                Console.WriteLine();
            }
        }

        static bool is_prime(int n)
        {
            if (n % 2 == 0 && n != 2)
                return false;
            
            for (int i = 3; i * i <= n; i += 2)
            {
                if (n % i == 0)
                    return false;
            }
            
            return true;
        }

        static int isqrt(int n)
        {
            int root = n;

            for (; root * root > n; root = ((root+ n)/root)/2 ) ;
            
            return root; 
        }

        static bool is_sorted(int[] array)
        {
            int len = array.Length;

            int i;
            for (i = 1; i < len && array[i] >= array[i - 1]; i++) ;
            
            return i>=len;
        }

        static int[] merge_sorted(int[] a1, int[] a2)
        {
            int len1 = a1.Length;
            int len2 = a2.Length;
            int[] res = new int[len1+len2];

            int i, j, k;
            i = j = k = 0;

            while (i < len1 || j < len2)
            {
                if (i < len1)
                {
                    if ((j < len2 && a1[i] <= a2[j]) || j >= len2)
                    {
                        res[k] = a1[i];
                        i++;
                        k++;
                    }
                }
                if (j < len2)
                {
                    if ((i < len1 && a2[j] <= a1[i]) || i >= len1)
                    {
                        res[k] = a2[j];
                        j++;
                        k++;
                    }
                }
            }

            return res;
        }

        static bool perfect_number(int n)
        {
            return divisor_sum(n) == n;
        }

        static int power(int x, int n)
        {
            if (x==1 || n==0)
                return 1;
            
            int res = 1;

            while( n > 0 )
            {
                if (n % 2 == 0)
                {
                    x *= x;
                    n /= 2;
                }
                else
                {
                    res *= x;
                    n--;
                }
            }

            return res;
        }

        static int power_of_two(int n)
        {
            return 1 << n;
        }

        static void quick_sort(ref int[] arr, int lo = 0, int hi = -2)
        {
            if (hi == -2)
                hi = arr.Length - 1;
            if (lo < hi)
            {
                int p = __partition(ref arr, hi, lo);
                
                quick_sort(ref arr, lo, p-1);
                quick_sort(ref arr, p+1, hi);
            }
        }

        static int __partition(ref int[] array, int lo, int hi)
        {
            int pivot = array[hi];
            int i = lo - 1;

            for (int j = lo; j <= hi; j++)
            {
                if (array[j] <= pivot)
                {
                    i++;
                    swap(ref array, i, j);
                }
            }

            return i;
        }

        static bool[] sieve_of_eratosthenes(int n)
        {
            bool[] res = new bool[n-1];
            
            for (int i = 0; i < n; res[i] = true, i++) ;
            
            for (int i = 0; (i + 2) * (i + 2) < n; i++)
            {
                if (res[i])
                {
                    for (int j = (i+2)*(i+2); j < n; j+=(i+2))
                        res[j - 2] = false;
                }
            }
            
            return res;
        }

        static void swap(ref int[] array, int i, int j)
        {
            int tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
        }

        static string to_lower(string str)
        {
            int len = str.Length;
            char shift = (char) ('a' - 'A');
            string res = "";

            for (int i = 0; i < len; i++)
            {
                if (str[i] >= 'A' && str[i] <= 'Z')
                    res += shift+str[i];
                else
                    res += str[i];
            }
            
            return res;
        }
        
        static string to_upper(string str)
        {
            int len = str.Length;
            char shift = unchecked((char) ('A' - 'a'));
            string res = "";

            for (int i = 0; i < len; i++)
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                    res += shift+str[i];
                else
                    res += str[i];
            }
            
            return res;
        }
    }
}
