#include<stdio.h>
int main(){
    int n;
    int a=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n-1;j<=i;j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}