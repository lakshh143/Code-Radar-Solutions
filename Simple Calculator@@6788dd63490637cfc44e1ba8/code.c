#include <stdio.h>

int main() {
    int a,b;
    char c;
    if(scanf("%d %c %d",&a,&c,&b) !=3){
        printf("Error");
        return 1;
    }
    if(c =='+'){
        printf("%d",a+b);
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