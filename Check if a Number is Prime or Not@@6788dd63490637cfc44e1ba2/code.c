#include <stdio.h>

int main() {
    int n, prime;
    prime=1;
    printf("");
    scanf("%d", &n);

    if (n<=1){
        printf("Not Prime");
    }
    for (int i=2; i*i<=n; i++){
        if (n%i==0){
            prime=0;
            break;
        }
    }
    if (prime){
        printf("Prime");
    } else{
        printf("Not Prime");
    }
    return 0;
}