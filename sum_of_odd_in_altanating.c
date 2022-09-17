#include<stdio.h>
int main()
{
    int numbers[5];

    printf("enter the value of numbers\n");
    scanf("%d%d%d%d%d",&numbers[0],&numbers[1],&numbers[2],&numbers[3],&numbers[4]);
    
   int total=0;
    for(int i=0;i<5;i++){
if(numbers[i]%2!=0){
    total= total+numbers[i];
}
    }
    printf("sum of odd numbers is %d\n",total);


    return 0;
}