#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        for(int k=i; k<n; k++){
            printf(" ");
        }
        for(int j=0; j<2*i-i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}