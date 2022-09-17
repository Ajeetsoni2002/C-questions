#include<stdio.h>
int main()
{
int  marks[99],total=0;
float avrg,num=0;
printf("for terminate please enter 0\n");

    printf("enter the marks of mathematics\n");
for(int i=0; ;i++){
    
    scanf("%d",&marks[i]);
    if(marks[i]==0){
        break;}
        num++;
        total=total+marks[i];

}
printf("the avarage of this mathematics numbers is %f\n",total/num);




    return 0;
}