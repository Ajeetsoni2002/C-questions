#include<stdio.h>
int main()
{
float n,x,total=0;
printf("enter the value of n\n");
scanf("%f",&n);
if(n==0){
    printf("infinity!!!\n");
}
else if(n>0){
for(float i=1;i<=n;i++){
    x=1/i;
    printf("%f\t",x);
    total=total+x;
}
printf("sum of the series is %f\n",total);
}
    return  0;
}