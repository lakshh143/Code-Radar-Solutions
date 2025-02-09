#include <stdio.h>

int main() {
    char n;
    scanf("%c",&n);
    if(n='a','e','i','o','u'){
        printf("Vowel");
    }else if(n!='a','e','i','o','u'){
        printf("Consonant");
    }else if(n='1234567890'){
        printf("Digit")
    }else{
        printf("Special Character");
    }
    return 0;
}