#include <stdio.h>

int main() {
    int a, b, c;
    printf("");
    scanf("%d", &a);
    printf("");
    scanf("%d", &b);
    printf("");
    scanf("%d", &c);

    if (a == b && b == c){
        printf("Equilateral");
    }
    else if (a != b && b == c || b != a && a == c || c != a && a == b){
        printf("Isosceles");
    } else if (a != b && b != c) {
        printf("Scalene");
    }
    return 0;
}