#include<stdio.h>
#include<math.h>

int main  ()
{
float a,b,c,t;
printf("enter the value of a\n");
scanf("%f",&a);
printf("enter the value of b\n");
scanf("%f",&b);
printf("enter the value of c\n");
scanf("%f",&c);
 t=(b*b)-(4*a*c);

 if(t>0 && a!=0){

float r,s;
t= sqrt(t);
r=(-b+t)/(2*a);
s=(-b-t)/(2*a);
printf("the first root is %f\n",r);
printf("second root is %f\n",s);


 }



    return 0;
}