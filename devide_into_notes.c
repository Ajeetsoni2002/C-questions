#include<stdio.h>
int main()
{
int n;
printf("enter the amount in rupee\n");
scanf("%d",&n);
printf("there are in the amount of 4375\n  100 rupee note: %d\n 50 rupee note: %d\n 20 rupee note : %d\n 10 ruppee note:%d\n 5 rupee note: %d\n",n/100,(n%100)/50,(n%50)/20,(n%20)/10,(n%10)/5);
    return 0;
}