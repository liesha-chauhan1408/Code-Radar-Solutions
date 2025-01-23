#include <stdio.h>

int main() {
    int a, b;
    printf("");
    scanf("%d", &a);
    scanf("%d", &b);

    if (a > b){
        printf(a);
    } else {
        printf(b);
    }
    return 0;
}