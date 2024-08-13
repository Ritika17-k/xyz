//Sum of first n natural numbers.
#include<stdio.h>

int sum (int n);

int main(){
    printf("sum is : %d",sum(10));

    return 0;

}
//recursive
int sum(int n){
    if(n == 1){
        return 1;
    }
    int sumNm1 = sum(n-1);//sum of 1 to n // 1 to n-1 tak ka sum calculate karke dega aur sumNm1 me save karega.
    int sumN = sumNm1 + n;
    return sumN;
    
    }