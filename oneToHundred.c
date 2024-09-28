/*
    Write a program to print number 1 to 100.
print "Fizz" if divisible by 3
print "Buzz" if divisible by 5
print "FizzBuzz" if divisible by 3 and 5.
*/
#include <stdio.h>
int main(){
    int i =1;
    while (i<=100)
    {
        if (i % 3 ==0 && i %5 ==0)
        {
            printf("%d FizzBuzz\n",i);
        }
        else if (i %3 ==0)
        {
            printf("%d Fizz\n",i);
        }else if (i % 5 == 0)
        {
            printf("%d Buzz\n",i);
        }
        i++;
    }    
}