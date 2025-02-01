#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int l,hl;
    char h;
    scanf("%d",&l);
    scanf("%s",&h);
    printf("Hexadecimal: %s\n",h);
    hl=l+2;
    printf("Octal: %d",hl);
    return 0;
}