#include <stdio.h>

int main() {
    char n;
    scanf("%c",&n);
    if(n=='a','e','i','o','u'){
        printf("Vowel");
    }else{
        printf("Consonant");
    }
    return 0;
}