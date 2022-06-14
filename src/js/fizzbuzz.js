function fizzbuzz(limit) {
    for (let i = 1; i <= limit; i++) {
        let isDiv3;
        let isDiv5 = i%5==0;
        if((isDiv3 = (i%3==0)) && isDiv5)
            console.log("FizzBuzz");
        else if(isDiv3)
            console.log("Fizz");
        else if(isDiv5)
            console.log("Buzz");
        else if(!isDiv3)
            console.log(i);
        
    }
}