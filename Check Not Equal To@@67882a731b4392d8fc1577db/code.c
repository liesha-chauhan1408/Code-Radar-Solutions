#include <stdio.h>

int main() {
    int a, b;
    printf("");
    scanf("%d", &a);
    scanf("%f", &b);

    if (a != b){
        printf("True");
    } else{
        printf("False");
    }
    return 0;
}