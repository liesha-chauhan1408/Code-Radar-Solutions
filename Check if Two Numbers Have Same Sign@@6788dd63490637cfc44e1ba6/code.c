#include <stdio.h>

int main() {
    int a, b;
    printf("");
    scanf("%d", &a);
    printf("");
    scanf("%d", &b);

    if (a>0 && b>0 || a<0 && b<0){
        printf("Same sign");
    }
    else if (a<0 && b>0 || a>0 && b<0){
        printf("Different sign")
    }
    return 0;
}