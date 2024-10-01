// Write a program to convert decimal to binary number system.
#include <stdio.h>
int main(){
    int num,i =0;
    int arr[32];
    printf("Enter a number : ");
    scanf("%d",&num);
    while (num > 0)
    {
        arr[i] = num % 2;
        num /=2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", arr[j]);
}