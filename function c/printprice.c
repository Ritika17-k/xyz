#include<stdio.h>
//declare function
void calculatePrice(float value );
//calling function
int main(){
float value=100.0;
calculatePrice(value ); // argument
printf("value is : %f",value);

return 0;

}
//define function
void calculatePrice(float value){     // change in parameter will not reflect in argument.
    value = value+(0.18*value);
    printf("final price is : %f \n",value);


}