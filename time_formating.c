#include <stdio.h>

int main(){
    int seconds;
    int days,hours,minutes,second;
    
    printf("\nEnter input as seconds :  ");
    scanf("%d", &seconds);

    days = seconds / (24 * 60 * 60);
    seconds = seconds % (24 * 60 * 60);
    
    hours = seconds / (60 *60);
    seconds = seconds % (60 * 60);

    minutes = seconds / 60;
    second = seconds % 60;

    printf("\nConverted version : %d:%d:%d:%d\n",days,hours,minutes,second);

    return 0;
}