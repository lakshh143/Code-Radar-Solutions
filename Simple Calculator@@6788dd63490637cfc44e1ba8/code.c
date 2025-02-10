#include <stdio.h>

int main() {
    double a,b;
    char c;
    if(scanf("%d %c %d",&a,&c,&b) !=3){
        printf("error");
        return 1;
    }
    if(c =='+'){
        printf("%lh",a+b);
    }else if(c =='-'){
        printf("%d",a-b);
    }else if(c =='*'){
        printf("%d",a*b);
    }else if(c =='/'){
        
        if(b ==0){
            printf("Division by Zero");

        }else{
            printf("%d",a/b);
        }
        
    }else{
        printf("error");
    }
    
    return 0;
}