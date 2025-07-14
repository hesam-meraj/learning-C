#include <stdio.h>

int main(){

    float a,b,c;
    printf("Enter the sides of traingle with whitespace : ");
    scanf("%f%f%f", &a,&b,&c);

    if (a + b > c && b +c > a && a +c >b){
        printf("traingle can be made with these sides");
    }
    else{


        printf("It's not possible to make a traingle with these numbers!");
    }




    return 0;
}