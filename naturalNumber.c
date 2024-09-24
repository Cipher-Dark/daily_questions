#include <stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int i =1;
    printf("Natural number up to %d are \n",num);
    while (i <= num) 
    {
        
        printf("%d  ",i);
        i++;
    }
    
}
