// Write a program to print all prime number 1 to n. Value of n ask from the user.
#include <stdio.h>
int isPrime(int);
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    for (int i = 0; i < num; i++)
    {
        if (isPrime(i+1))
        {
            printf("%d is prime\n",i+1);
        }
    }
    
}
int isPrime(int num){
    for (int i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}