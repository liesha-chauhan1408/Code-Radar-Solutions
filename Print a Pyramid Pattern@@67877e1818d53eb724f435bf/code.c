#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i=1; i<=n ; i++){
        for (int k=1; k < 2*i-1; k++){
            printf(" ");
        }
        for (int j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}