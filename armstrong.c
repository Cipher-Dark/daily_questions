/*
    Write a program to print armstrong number between 1 to n. The value of n asked from the user.
*/

#include <stdio.h>
#include <math.h>
int isArmstrong(int);
int main()
{
    int num;
    printf("Enter a numer : ");
    scanf("%d",&num);

    for (int i =1; i<= num ; i++){
        if (isArmstrong(i))
        {
            printf("%d is Armstrong number\n",i);
        }
    }
}

int isArmstrong(int num){
    // something new to learn to find the length of num
    int length = (int)log10(num) + 1;
    int digitSum =0, temp = num;
    while (temp != 0)
    {
        int oneDigit = temp%10;
        digitSum += pow(oneDigit,length);
        temp /= 10;
    }
    if (digitSum == num)
    {
        return 1;
    }else{
        return 0;
    }
    
    
    
    


}