#include <stdio.h>

int main() {
    int a, b;
    printf("");
    scanf("%d", &a);
    printf("");
    scanf("%d", &b);
    if (a%b==0){
        printf("Yes");
    } else{
        printf("No");
    }
    return 0;
}