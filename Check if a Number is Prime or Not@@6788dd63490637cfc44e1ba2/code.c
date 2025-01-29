#include <stdio.h>

int main() {
    int n, prime;
    printf("");
    scanf("%d", &n);

    if (n<=1){
        prime=0;
    } else{
        for (int i=2; i*i<=a; i++){
            if (n%i==0){
                prime=0;
                break;
            }
        }
    }
    if (prime){
        printf("Prime");
    } else{
        printf("Not Prime");
    }
    return 0;
}