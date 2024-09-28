// Write a program to print  Fibonacci series 1 to n.  

#include <stdio.h>
int fab(int);
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    for (int i=1; i <=num ; i++){
        printf("%d\n",fab(i));
    }

}
int fab(int num){
    if (num ==1 || num ==2)
    {
        return 1;
    }
    return fab(num-1)+fab(num-2);
}