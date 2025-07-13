#include <stdio.h>

int main(){
    
    char Unit[20];
    float temp;
    
    printf("Enter a Unit of measurments (C) or (F) ? ");
    scanf("%s", Unit);
    if (Unit[0] == 'C'|| Unit[0] == 'c'){
        printf("\n Enter a number in Celsuis : ");
        scanf("%f", &temp);
        temp = temp * (9/5) + 32;
        
        printf("The temperature in farenheit is  : %f",temp);

    }
    else if(Unit[0] == 'F'|| Unit[0] == 'f'){
        printf("\n Enter a number in Farenheit : ");
        scanf("%f", &temp);
        temp = (temp -32) * (5/9);
        printf("The temperature in celcuis is  : %f",temp);
        


    }
    else{


        printf("Not valid Unit of measurements");
    }


    return 0;
}