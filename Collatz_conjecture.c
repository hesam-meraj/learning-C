#include <stdio.h>

int main(){
    int n;
    printf("Enter the number for n : ");
    scanf("%d",&n);

    printf("Starting with %d\n", n);
    while ( n!= 1){
        
        if (n % 2 == 0)
        {
            n = n / 2;
            printf("%d\n",n);
        }
        else {
            n = n *3 + 1;
            printf("%d\n", n);
        }        
        



    }



}