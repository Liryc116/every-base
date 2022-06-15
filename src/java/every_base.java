package java;


public class every_base {
    
    public static int[] array_rot_left(int[] array, int n)
    {
        n = n % array.length;

        for (int i = 0; i < n; i++) {
            int moved = array[0];
            for (int j = array.length; j > 0; j--) {
                int tmp = array[j];
                array[j] = moved;
                moved = tmp;
            }

            array[0] = moved;
        }

        return array;
    }
    
    public static int[] array_rot_right(int[] array, int n)
    {
        n = n % array.length;

        for (int i = 0; i < n; i++) {
            int moved = array[array.length-1];
            for (int j = 0; j < array.length-1; j++) {
                int tmp = array[j];
                array[j] = moved;
                moved = tmp;
            }

            array[array.length-1] = moved;
        }

        return array;
    }

    public static int atoi(String str)
    {
        char[] char_arr = str.toCharArray();

        if(char_arr[0]=='-')
            return -atoui(str);
        return atoui(str);
    }

    public static int atoui(String str)
    {
        int result = 0;
        char[] char_arr = str.toCharArray();

        for (int i = 0; i < char_arr.length && (char_arr[i]>='0' && char_arr[i]<='9'); i++) 
            result = result*10 + char_arr[i]-'0';
        

        return result;
    }

    public static int[] bubble_sort(int[] array)
    {
        int n = array.length;

        while (n>1)
        {
            int newn = 0;
            for(int i = 1; i<n; i++)
            {
                if(array[i-1]>array[i])
                {
                    int tmp = array[i-1];
                    array[i-1] = array[i];
                    array[i] = tmp;
                    newn = i;
                }
                
            }
            n = newn;
        }

        return array;
    }

    public static boolean binary_search(int[] array, int searched)
    {
        int l = 0;
        int r = array.length-1;

        while (l<=r) {
            int mid = (l+r)/2;
            if(array[mid]==searched)
                return true;
            else if(array[mid]>searched)
                r = mid-1;
            else
                l = mid+1;
        }

        return false;
    }

    public static int[] char_histogram(String str)
    {
        int[] result = new int[26];

        char[] char_arr = str.toCharArray();

        for (int i = 0; i < char_arr.length; i++) {
            if(char_arr[i]>='a' && char_arr[i]<='z')
                result[i-'a']+=1;
            else if(char_arr[i]>='A' && char_arr[i]<='Z')
                result[i-'A']+=1;
        }

        return result;
    }

    public static int count_words(String str)
    {
        int count = 0;
        boolean isSeparated = true;

        for (int i = 0; i < str.length(); i++) 
        {
            char curr_char = str.charAt(i);
            if((curr_char >= 'a' && curr_char <= 'z') || 
                (curr_char >= 'A' && curr_char <= 'Z') || 
                (curr_char >= '0' && curr_char <= '9'))
            {
                if(isSeparated)
                {
                    isSeparated=false;
                    count++;
                }
            }
            else
                isSeparated = true;
        }

        return count;
    }

    public static char digit_count(long n)
    {
        char length = 0;

        do {
            length += 1;
            n /= 10;
        } while (n!=0);

        return length;
    }

    public static long divisor_sum(long n)
    {
        long sum = 0;

        long i = 2;
        int step = 1;

        if(n%2==0)
        {
            i = 3;
            step = 2;
        }

        for(; i*i<n; i+=step)
        {
            if(n%i == 0)
                sum += i + n/i;
        }

        return sum;
    }

    public static long facto(long n)
    {
        long result = 1;

        for(long i = 2; i<=n; result*=i, i++);

        return result;
    }

    public static long fibo(long n)
    {
        long f1 = 1;
        long f0 = 0;

        for(long i = 1; i<n; i++)
        {
            long tmp = f0;
            f0 = f1;
            f1 += tmp;
        }

        return f1;
    }

    public static void fizzbuzz(long n)
    {
        for (long i = 1; i <= n; i++) {
            Boolean isDiv3;
            if(isDiv3=i%3==0)
                System.out.print("Fizz");
            if(i%5==0)
                System.out.print("Buzz");
            else if(!isDiv3)
                System.out.print(i);

            System.out.println();
        }
        
    }

    public static boolean is_prime(long n)
    {
        if((n%2==0 && n!=2)|| n==1)
            return false;

        for(long i = 3; i*i<=n; i+=2)
        {
            if(n%i==0)
                return false;
        }

        return true;
    }

    public static long isqrt(long n)
    {
        long root = n;

        while(root*root>n)
            root = ((root+n)/root)/2;

        return root;
    }

    public static boolean is_sorted(int[] array)
    {
        for (int i = 0; i < array.length-1; i++) {
            if(array[i]>array[i+1])
                return false;
        }

        return true;
    }

    public static int[] merge_sorted(int[] array1, int[] array2)
    {
        int[] result = new int[array1.length+array2.length];

        int i, j, k;
        i = j = k = 0;

        while(i<array1.length || j<array2.length)
        {
            if(i<array1.length)
            {
                if(j>=array2.length || array1[i]<array2[j])
                {
                    result[k] = array1[i];
                    k++;
                    i++;
                }
            }
            if(j<array2.length)
            {
                if(i>=array1.length || array1[i]>array2[j])
                {
                    result[k] = array2[j];
                    k++;
                    j++;
                }
            }
        }

        return result;
    }

    public static boolean perfect_number(long n)
    {
        return divisor_sum(n)==n;
    }

    public static long power(long x, long n)
    {
        long result = 1;

        while(n>0)
        {
            if(n%2==1)
            {
                result *= x;
                n--;
            }
            else
            {
                n/=2;
                x*=x;
            }
        }

        return result;
    }

    public static long power_of_two(char n)
    {
        return 1<<n;
    }

    private static int[][] partition(int[] array, int low, int high)
    {
        int pivot = array[high];
        int i = low-1;

        for(int j = low; j<=high; j++)
        {
            if(array[j]<=pivot)
            {
                i++;
                array = swap(array, i, j);
            }
        }

        int[][] result = new int[2][];
        result[1] = new int[1];
        result[1][0] = i;
        result[0] = array;
        return result;
    }

    public static int[] quick_sort(int[] array, int low, int high)
    {
        if(low<high)
        {
            int[][] pivot = partition(array, low, high);

            pivot[0] = quick_sort(pivot[0], low, pivot[1][0]-1);
            pivot[0] = quick_sort(pivot[0], pivot[1][0]+1, high);

            array = pivot[0];
        }
        return array;
    }

    public static boolean[] sieve_of_eratosthenes(int n)
    {
        n+=1;
        boolean[] result = new boolean[n];
        for (int i = 0; i < result.length; i++) 
            result[i] = true;

        for (int i = 2; i*i < n; i++) {
            for(int k = i*i; k<n; k+=i)
                result[k] = false;
        }

        return result;
    }

    public static int[] swap(int[] array, int index1, int index2)
    {
        int tmp = array[index1];
        array[index1] = array[index2];
        array[index2] = tmp;

        return array;
    }

    
}
