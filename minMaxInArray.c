// Write a program to find the Maximum and Minimum value from the array. The values of array asked from the user.

#include <stdio.h>
int main(){
    int size, arr[10],min,max;
    printf("enter no of elements in array :");
    scanf("%d",&size);
    arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("Max value is %d and minimum value is %d ", max, min);

    


}