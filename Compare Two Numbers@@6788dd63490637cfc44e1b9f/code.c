#include <stdio.h>

int main() {
    int a, b;
    printf("");
    scanf("%d", &a);
    printf("");
    scanf("%d", &b);

    if (a>b){
        printf("First");
    }
    else if (a==b){
        printf("Equal");
    } else{
        printf("Second");
    }
    return 0;
}