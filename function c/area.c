// Write functions to calculate area of a square, a circle, and a rectangle.
#include<stdio.h>
//return type float (declaring function)
float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float l, float b);
int main(){
    float radius = 12;
    printf("area is : %f",circleArea(radius));



    return 0;
}

float squareArea(float side){
    return side * side;


}

float circleArea(float radius){
    return 3.14 * radius * radius;
}

float rectangleArea(float l, float b){
    return l * b;
}