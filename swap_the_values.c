#include<stdio.h>
int main()
{
int x=9,y=8,temp=0;

temp=x;
x=y;
y=temp;
printf("after swaping the values are\n x= %d\n y= %d\n",x,y);



    return 0;
}