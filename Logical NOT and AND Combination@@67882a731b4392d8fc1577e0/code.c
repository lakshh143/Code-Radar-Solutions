#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    // Check if either a or b is not greater than zero
    // if (!(a > 0) && !(b >0)) 
    if(a<0 && b<0){
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}