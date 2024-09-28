//Write a program to check that given number is prime or not.
#include <stdio.h>
int isPrime(int);
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if (isPrime(num))
    {
        printf("%d is Prime number.",num);
    }else{
        printf("%s is not a prime number.", num);
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