#include<stdio.h>
#include<math.h>
int main()
{
float x,value;
printf("enter the value of x\n");
scanf("%f",&x);
if(x!=0.0){
value =sin(1/x) ;
printf("the value of sin(1/x)=%.4f\n",value);
}
else{
    printf("error!!!\n");
}



    return 0;
}