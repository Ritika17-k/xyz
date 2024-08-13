#include<stdio.h>
//declare function
void printHW(int count);
//call function

int main(){
    printHW(5);

    return 0;
}
//define function
//recursive function
void printHW(int count){
if(count==0){
    return;
}
printf("Hello World\n");
printHW(count-1);
}