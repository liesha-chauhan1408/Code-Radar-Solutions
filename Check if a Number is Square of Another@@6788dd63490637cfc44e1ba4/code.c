#include <stdio.h>

int main() {
    int a, b;
    printf("");
    scanf("%d", &a);
    printf("");
    scanf("%d", &b);
    
    if (b*b==a){
        printf("Yes");
    } else{
        printf("No");
    }
    return 0;
}