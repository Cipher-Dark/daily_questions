// Write a program to calculate sum of all even and odd numbers in array.
// Original Array =[1,2,3,4,5,6,7,8,9]
#include <stdio.h>
int main(){
    int oddSum =0, evenSum =0;
    int Arr[] ={1,2,3,4,5,6,7,8,9};
    int length = sizeof(Arr) / sizeof(Arr[0]);
    for (int  i = 0; i < length; i++)
    {
        if (Arr[i] % 2 == 0)
        {
            evenSum += Arr[i];
        }else{
            oddSum +=Arr[i];
        }
        
    }
    printf("Sum of even numbers is %d \n",evenSum);
    printf("Sum of odd numbers is %d", oddSum);
    

}