// 11111 
// 10001 
// 10001 
// 10001 
// 11111
// print above pattern? The value of row ask from the user?

#include <stdio.h>
int main(){
    int num;
    printf("Enter a value of row : ");
    scanf("%d",&num);
    for (int i = 0; i < num; i++)
    {
        for(int j= 0; j<num ; j++){
            if (i == num - num || i == num-1)
            {
                printf("1");
            }else{
                if (j == num - num || j == num-1)
                {
                    printf("1");
                }else{
                    printf("0");
                }
                
            }
        }
        printf("\n");
    }
    

}