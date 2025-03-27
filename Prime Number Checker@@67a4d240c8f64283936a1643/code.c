// Your code here...
int prime(int n);
int prime(int n){
    if (n<2){
        return 0;
    }
    for (int i=2; i<n-1; i++){
        if (n%i==0){
            return 0;
        } else{
            return 1;
        }
    }
}