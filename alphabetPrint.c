// Write a program to print all alphabet a to z also A to Z using while loop.

#include <stdio.h>
int main(){
    int a='a';
    int A='A';

    while (a <= 'z' && A <= 'Z' )
    {
        printf("Small %c, capital %c \n",a,A);
        a++;
        A++;
    }
    

}