#include <stdio.h>

int main() {
    int a, b;
    printf("");
    scanf("%d", &a);
    scanf("%d", &b);

    if (a > 0) && (b > 0){
        printf("True");
    }
    else if (a > 0) && (b < 0){
        printf("False");
    }
    else if (a < 0) && (b > 0){
        printf("False");
    } else{
        printf("False");
    }
    return 0;
}