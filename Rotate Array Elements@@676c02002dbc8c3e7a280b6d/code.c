#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    for(int i=b;i>0;i--){
        printf("%d\n",a[n-i]);
    }
    for(int i=0;i<n-b;i++){
        printf("%d\n",a[i]);
    }
}