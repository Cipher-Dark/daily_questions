/* 'Write a program to find the HCF of two numbers. The numbers ask from the number.'
 */
#include <stdio.h>
int lcm(int, int);
int hcf(int, int);
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("HCF of %d and %d is %d \n", a, b, hcf(a, b));
    return 0;
}
int hcf(int a, int b)
{
    int hcf;
    for (int i = 1; i <= a || i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}
