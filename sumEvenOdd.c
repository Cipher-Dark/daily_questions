// Write a program to print the sum of all even numbers and odd number range of 1 to n. Value of n ask from the user.

#include <stdio.h>
int isEven(int);
int main(){
    int num,sumEven=0,sumOdd=0;
    printf("Enter a number :");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        if (isEven(i))
        {
            sumEven += i;
        }else{
            sumOdd +=i;
        }   
    }
    printf("Sum of even number is %d \n",sumEven);
    printf("Sum of odd number is %d",sumOdd);
}

int isEven(int num){
    if (num % 2 == 0)
    {
        return 1;
    }else{
        return 0;
    }
}