#include <stdio.h>

int main() {
    int a, b, c;
    printf("");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a + b > c){
        printf("Valid");
    } else{
        printf("Invalid");
    }
    return 0;
}