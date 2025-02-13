#include <stdio.h>
#include<stdint.h>

int main() {
    int n;
    printf("");
    scanf("%d", &n);

    if (n&0x80000000000){
        printf("Set");
    } else{
        printf("Not Set");
    }
    return 0;
}