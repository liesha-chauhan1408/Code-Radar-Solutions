#include <stdio.h>

int main() {
    int a, b;
    char opt;
    
    scanf("%d", &a);
    printf("");
    scanf("%d", &b);
    printf("");
    scanf("%c", &opt);

    if (opt=='+'){
        printf("%d", a+b);
    }
    else if (opt=='-'){
        printf("%d", a-b);
    }
    else if (opt=='*'){
        printf("%d", a*b);
    }
    else if (opt=='/'){
        printf ("%d", a/b);
    }
    else{
        printf("error");

    } 
     
    return 0;
}