#include <stdio.h>
float geometric(float a0,float d,  int n);

int main(){
    float a0,answer,d;
    int n;
    printf("Enter a0 d n in order : ");
    scanf("%f%f%d",&a0,&d,&n);
    answer = geometric(a0,d,n);

    printf("The answer is : %.2f", answer);
    return 0;
}

float geometric(float a0, float d, int n){
    float answer = a0;
    for (int i; i<n-1;i++){
        answer = answer *d;
    }

    return answer;


}