#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        for (int k=1; k<=n-i; k++){
            printf(" ");
        }
        int num=1;
        for (int j=1; j<=(2*i-1); j++){
            printf("%d ", num);
            num = 1 - num;
        }
        printf("\n");
    }
    return 0;
}