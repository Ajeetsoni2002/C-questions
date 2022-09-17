#include<stdio.h>
int main()
{
int a,n,b;
printf("enter the value of a \n");
scanf("%d",&a);
printf("enter the value of n \n");
scanf("%d",&n);
a<<=n;  //[its means a* 2^n]
b=a;
printf("the value after 2 bit left shifted %d\n",b);




    return 0;
}