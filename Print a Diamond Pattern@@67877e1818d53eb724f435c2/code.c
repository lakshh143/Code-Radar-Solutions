#include<stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a=n/2+1;
            if(i==a || j==a){
                printf(" ");
            }else{
                printf("*");
            }
    }
        }
    return 0;
}