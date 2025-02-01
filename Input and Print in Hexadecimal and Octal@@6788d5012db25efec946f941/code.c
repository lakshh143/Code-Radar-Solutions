#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int l,hl;
    char h;
    scanf("%d",&l);
    scanf("%c",&h);
    printf("Hexadecimal: %c\n",h);
    hl=l+2;
    printf("Octal: %d",hl);
    return 0;
}