#include <stdio.h>

int main() {
    float a, b, c, avg;
    printf("");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    avg= (a + b + c)/3;
    printf("Average: %.2f", avg);
    return 0;
}