#include <stdio.h>

int main() {
    int a, b;
    char opt;
    float divs;
    divs=a/b;
    scanf("%d %d %c", &a &b &opt);

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
        if(b==0){
            printf("error");
        }
        else{
            printf("%d",a/b);
        }
    }
    return 0;
}