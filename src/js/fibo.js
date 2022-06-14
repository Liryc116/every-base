function fibo(n) {
    
    if(n==0)
        return 0;
    
    let f0 = 0;
    let f1 = 1;
    
    
    for(let i = 1; i<n; i++)
    {
        let tmp = f0;
        f0 = f1;
        f1 += tmp;
    }
        
    return f1;
}