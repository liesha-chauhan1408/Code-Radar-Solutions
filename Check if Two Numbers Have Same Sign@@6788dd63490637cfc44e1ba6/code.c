#include <stdio.h>

int main() {
    int a, b;
    printf("");
    scanf("%d", &a);
    printf("");
    scanf("%d", &b);

    if (a>0 && b>0 || a<0 && b<0){
        printf("Same Sign");
    }
    else if (a<0 && b>0 || a>0 && b<0){
        printf("Different Sign");
    }
    return 0;
}