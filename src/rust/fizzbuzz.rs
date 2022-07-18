fn fizzbuzz(n: u64)
{
    for i in (0..=n)
    {
        if i%3==0 {
            print!("Fizz");
        }
        if i%5==0 {
            print!("Buzz");
        }
        else if i%3!=0 {
            print!("{}", i);
        }

        println!();
    }
}