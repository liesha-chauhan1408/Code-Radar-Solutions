#include <stdio.h>

int main() {
    int a, b, c;
    printf("");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if (a>b && a>c){
        printf("%c", a);
    }
    else if (b>a && b>c){
        printf("%c", &b);
    }
    else if (c>a && c>b){
        printf("%c", c);
    }
    return 0;
}