// Write a program to compute the sum of the specified number of prime numbers.
// For example, when n = 7,
// Then Sum = 2+3+5+7+11+13+17 = 58.
#include <stdio.h>
int isPrime(int num);
int main(){
    int num, sum =0, i =2, count =0;
    printf("enter a number :");
    scanf("%d", &num);
    while (count != num)
    {
        if (isPrime(i))
        {
            sum += i;
            count++;
        }
        i++;
        
    }
    printf("The total sum of primes is %d", sum);

    
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