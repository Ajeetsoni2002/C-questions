#include<stdio.h>
int main()
{
int n,total=0;
printf("enter the value of n\n");
scanf("%d",&n);
for(int i=0;0<n;i++)
{
    int s=n%10;
total=total+s;
n=n/10;
}
printf("the sum of the digits is %d\n",total);




    return 0;
}
