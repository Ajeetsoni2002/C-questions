#include<stdio.h>
int main()
{
int seconds;
printf("enter the seconds which you want to convert into HH:MM:SS\n");
scanf("%d",&seconds);

printf("given seconds in HH:MM:SS = %d:%d:%d",seconds/3600,(seconds%3600)/60,seconds%60);




    return 0;
}