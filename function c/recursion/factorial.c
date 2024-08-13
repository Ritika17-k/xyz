#include<stdio.h>
// 5!= 1*2*3*4*5 i.e 4!*5
// base series 1!
// recursive function: fact(n)=fact(n-1)*n
int fact(int n);

int main(){
    printf("factorial is : %d",fact(5));

}

int fact(int n){
    if(n==0){
        return 1;
    }
int factNm1 = fact(n-1);
int factN = factNm1*n;
return factN;

}