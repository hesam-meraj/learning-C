#include <stdio.h>

int main(){
    int n, remainder;
    int bills_counter = 0;
    
    int bills[6] = {50, 20, 10, 5, 2, 1};
    printf("Enter the number dollars : ");
    scanf("%d", &n);
    for (int i = 0; i<6;i++){
        bills_counter += n / bills[i];
        n = n % bills[i];

    }
    printf("The number of bills : %d\n", bills_counter);



    return 0;
}