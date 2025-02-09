#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if((b**b==a)||(a**a==b)){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}