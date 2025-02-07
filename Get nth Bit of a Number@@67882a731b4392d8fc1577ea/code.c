#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d",&a,&b);
    c=(a>>b)&1;
    printf("%d",c);
    return 0;
}