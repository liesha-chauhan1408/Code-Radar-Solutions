#include <stdio.h>

int main() {
    char charact;
    printf("");
    scanf("%c", &charact);

    if (charact >= 'A' && charact <= 'Z'){
        printf("Uppercase");
    } else{
        printf("Lowercase");
    }
    return 0;
}