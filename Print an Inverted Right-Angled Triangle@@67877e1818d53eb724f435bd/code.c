#include <stdio.h>

int main() {
    int n;
    printf("");
    scanf("%d", &n);

    for(int i=1; i>=n; i--){
        for (int j=i; j<=i; j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}