#include <stdio.h>

int main() {
    int a, b;
    char opt;
    printf("");
    scanf("%d", &a);
    printf("");
    scanf("%d", &b);
    printf("");
    scanf("%d", &opt);

    if (opt=="+"){
        printf("%d", a+b);
    }
    else if (opt=="-"){
        printf("%d", a-b);
    }
    else if (opt=="*"){
        printf("%d", a*b);
    }
    else if (opt=="/"){
        printf("%d", a/b);
    } else{
        printf("error");
    }
    return 0;
}