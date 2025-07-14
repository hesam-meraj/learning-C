#include <stdio.h>
float maximum(float arr[], int size);

int main(){
    
    float sides[3];
    float max;
    float sum = 0;
    int exclude =0;
    printf("Enter 3 sides for traingle\n");

    for (int i=0; i<3; i++){
        printf("The %d side :  ", i+1);
        scanf("%f", &sides[i]);
    }
    max = maximum(sides, 3);
    for (int i = 0; i <3; i++){
        if (sides[i]==max && exclude==0){
            exclude ++;
            continue;
        }
        sum+=sides[i];
    }   
    if (sum > max){
        printf("There can be traingle!\n");
    }
    else{
        printf("There can't be a traingle\n");
    }


}
float maximum(float arr[], int size){
    float max = arr[0];
    for (int i = 1; i<size; i++){
        if(max < arr[i]){
            max = arr[i];
        }

    }
    return max;
}
