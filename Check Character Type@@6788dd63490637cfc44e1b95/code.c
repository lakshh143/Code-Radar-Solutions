#include <stdio.h>

int main() {
    char n;
    scanf("%c",&n);
    if(n="aeiou"){
        printf("Vowel");
    }else if(n!="aeiou"){
        printf("Consonant");
    }else if(n>='0' || n<='9'){
        printf("Digit");
    }else{
        printf("Special Character");
    }
    return 0;
}