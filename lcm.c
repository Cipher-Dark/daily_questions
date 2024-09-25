
/* 'Write a program to find the LCM of two numbers. The numbers ask from the number.'
 */
#include <stdio.h>
int lcm(int, int);
int hcf(int, int);
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("LCM of %d and %d is %d", a, b, lcm(a, b));
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
int lcm(int a, int b)
{
    return (a * b) / hcf(a, b);
}