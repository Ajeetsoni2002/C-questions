#include<stdio.h>
int main()
{
int n;
printf("enter the value of n\n");
scanf("%d",&n);

if(n>0){
    if(n%2==0){
printf("this is positive even number\n");
    }
    if(n%2!=0){
        printf("this is positive odd number\n");
    }
}





    return 0;
}