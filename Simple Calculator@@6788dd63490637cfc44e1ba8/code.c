#include <stdio.h>

int main() {
    int a, b;
    char opt;
    printf("");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%c", &opt);

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
    }
    return 0;
}