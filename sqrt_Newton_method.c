#include <stdio.h>

int main(){
    
    double eps = 0.0000001;
    double a, y, x, k;
    
    
    printf("\nEnter the number you want squar root of : ");
    scanf("%lf",&a);
    x = a;
    y = (x+ (a / x))/2;

    while (x - y > eps)
    {
        x = y;
        y = (x+ (a / x))/2;
        printf("x : %lf\t y : %lf\n", x,y);
        
    }
    printf("%lf",y);



    return 0;
}