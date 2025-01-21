#include <stdio.h>

int main() {
    char a[1000];
    int b;
    char c[1000];
    printf("");
    scanf("%s", &a);
    scanf("%d", &b);
    scanf("%s", &c);
    
    printf("Name: %s\n", a);
    printf("Age: %d\n", b);
    printf("Hobby: %s", c);
    return 0;
}