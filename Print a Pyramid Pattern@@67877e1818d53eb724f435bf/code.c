#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i=1; i<=n ; i++){
        for (int k=1; k < 2*i-1; k++){
            printf(" ");
        }
        for (int j=1; j<n; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}