function facto(n) {
    let result = 1;

    for(let i = 2; i<=n; result *= i, i++);
        
    return result;
}