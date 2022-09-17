#include<stdio.h>
int main()
{
int n;
printf("enter the value of n\n");
scanf("%d",&n);

for(int i=0;i<=n;i++){
    printf("%d",n%10);
    n=n/10;
}




    return 0;
}