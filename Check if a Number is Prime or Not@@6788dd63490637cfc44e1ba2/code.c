#include <stdio.h>

int main() {
    int n, prime;
    printf("");
    scanf("%d", &n);

    if (n<=1){
        printf("Not prime");
    } else{
        if (n>1){
            for (i=2, i*i>n, i++){
                if (n%i==0){
                    printf("Not Prime");
                } else{
                    printf("Prime");
                }
            }
        } else{
            printf("Not Prime");
        }
    }
    return 0;
}