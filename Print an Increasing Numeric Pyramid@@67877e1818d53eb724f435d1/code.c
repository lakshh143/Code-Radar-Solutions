#include<stdio.h>
int main(){
    int n;
    int a=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}