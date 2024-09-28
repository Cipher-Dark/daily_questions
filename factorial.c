// Write a program to find the factorial of given number.
#include <stdio.h>
int main(){
    int num,fact=1;
    printf("Enter a number :");
    scanf("%d",&num);
    for (int i = 1 ; i <= num; i++){
        fact *= i;
    }

    printf("factorail of %d is %d.",num,fact);
    

}