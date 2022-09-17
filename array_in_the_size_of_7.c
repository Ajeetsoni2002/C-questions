#include<stdio.h>
int main()
{
int n[7];
printf("enter the 7 numbers \n");
for(int i=0;i<7;i++){
scanf("%d",&n[i]);
}

for(int i=0;i<7;i++)
{
    if(n[i]<0){
        printf("\nn[%d]=100",i);
    }
    else if(n[i]>0){
        printf("\nn[%d]=%d",i,n[i]);
    }
}


    return 0;
}