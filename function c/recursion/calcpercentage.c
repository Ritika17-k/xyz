#include<stdio.h>

float calcPercentage(float maths, float science, float sanskrit);

int main(){
   float sc = 98.0;
    float maths = 95.0;
    float sanskrit = 99.0;

    printf("percentage is : %f",calcPercentage(sc,maths,sanskrit)); 

    
    return 0;
}

float calcPercentage(float maths, float science, float sanskrit){
    return ((maths + science + sanskrit)/3);



}