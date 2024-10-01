// Write a program to check the given number is strong or not?
// A strong number is a number where the sum of the factorials of each digit is equal to the original number. For example, 145 is a strong number because 1! + 4! + 5! = 1 + 24 + 120 = 145. 
#include <stdio.h>
int fact(int num);
int main (){
    int num, sum=0, temp;
    printf("Enter a number : ");
    scanf("%d", &num);
    temp = num;
    while (temp !=0)
    {
        int rem = temp %10;
        sum  += fact(rem);
        temp /= 10;
    }
    if (sum == num)
    {
        printf("%d is an strong number ", num);
    }else{
        printf("Not a strong number");
    }
}
int fact(int num){
    if (num >= 1)
        return num * fact(num-1);
    else
        return 1;
}