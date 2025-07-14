#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c;
    float answer1, answer2;
    float delta;


    printf("\nEnter the coefficient for x^2 (a): " );
    scanf("%f", &a);

    printf("Enter the coefficient for x (b): " );
    scanf("%f", &b);

    printf("Enter the coefficient for x^0 (c): " );
    scanf("%f", &c);

    delta = (b*b) - (4*a*c);

    if (delta < 0){

        printf("The equation has no roots\n");

    }
    else if (delta == 0)
    {
        
        answer1 = (-b + sqrt(delta)) / (2*a);
        printf("The equation has repeated root: %.2f\n", answer1);
    }
    else
    {

        answer1 = (-b + sqrt(delta)) / (2*a);
        answer2 = (-b - sqrt(delta)) / (2*a);

        printf("First root: %.2f\n", answer1);
        printf("Second root : %.2f\n", answer2);

    }    
    return 0;
}