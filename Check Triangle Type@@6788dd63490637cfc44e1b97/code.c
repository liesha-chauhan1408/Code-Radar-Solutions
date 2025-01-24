#include <stdio.h>

int main() {
    int a, b, c;
    printf("");
    scanf("%d", &a);
    printf("");
    scanf("%d", &b);
    printf("");
    scanf("%d", &c);

    if (a == b == c){
        printf("Equilateral");
    }
    else if (a != b != c){
        printf("Scalene");
    } else {
        printf("Isosceles");
    }
    return 0;
}