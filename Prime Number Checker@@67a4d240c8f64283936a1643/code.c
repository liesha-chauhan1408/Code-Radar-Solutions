// Your code here...
int isPrime(int n);
int isPrime(int n){
    if (n<2){
        return 0;
    }
    for (int i=2; i<n-1; i++){
        if (n%i==0){
            return 0;
        } 
    }
    return 1;
}