#include<stdio.h>
int main()
{
int n,total=0;
printf("enter the value of n\n");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    printf("%d\t",i*i);

    total=total+(i*i);
}
printf("sum is %d\n",total);



    return 0;
}