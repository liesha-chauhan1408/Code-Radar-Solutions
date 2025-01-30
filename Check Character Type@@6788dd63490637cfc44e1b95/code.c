#include <stdio.h>

int main() {
    char cht;
    printf("");
    scanf("%c", &cht);

    if(cht>='A' && cht<='Z' || cht>='a' && cht<='z'){
        if(cht=='a' || cht=='e' || cht=='i' || cht=='o' || cht=='u'){
            printf("Vowel");
        } else{
            printf("Consonant");
        }
    }
    else if (cht>=1 && cht<=9){
        printf("Digit");
    } else{
        printf("Special Character");
    }
    return 0;
}