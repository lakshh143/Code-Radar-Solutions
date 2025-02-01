#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int l;
    char h;
    scanf("%d",&l);
    scanf("%c",&h);
    printf("Hexadecimal: %c\n",h);
    printf("Octal: %d",l);
    return 0;
}