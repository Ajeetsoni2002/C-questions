#include<stdio.h>
int main()
{
int x,y,total;
printf("enter the value of x and y\n");
scanf("%d%d",&x,&y);

for(int i=x;i<y;i++){
    if(i%17!=0){
        printf("%d\t",i);
      total=total+i;
    }
}
printf("the sum of this values is %d\n",total);



    return 0;
}