#include <stdio.h>

int main() {
    int a,b,d;
    char c;
    scanf("%d %c %d",&a,&c,&b);
    if(c=='+'){
        printf("%d",a+b=d,d);
    }else if(c=='-'){
        printf("%d",a-b=d,d);
    }else if(c=='*'){
        printf("%d",a*b=d,d);
    }else if(c=='/'){
        
        if(b==0){
            printf("Division by Zero");

        }else{
            printf("%d",a/b=d,d);
        }
        
    }else{
        printf("Error");
    }
    return 0;
}