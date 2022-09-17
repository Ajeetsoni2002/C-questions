#include<stdio.h>
int main()
{
int n;
printf("enter the value of n up to 100\n");
scanf("%d",&n);

if(n>=0 && n<=20){
    printf("Range [0,20]\n");
}
else if(n>20 && n<=40){
    printf("Range[20,40]\n");
}else if(n>40 && n<=100){
    printf("Range[40,100]\n");
}else
{
    printf("not possible range\n");
}
return 0;

}