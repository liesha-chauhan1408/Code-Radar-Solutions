#include <stdio.h>

int main() {
    int a, b, c;
    printf("");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a > b && a > c || b > a && b > c || c > a && c > b){
        printf("Valid");
    } else{
        printf("Invalid");
    }
    return 0;
}