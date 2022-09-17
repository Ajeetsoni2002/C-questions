#include<stdio.h>
int main()
{
int n[5];
    printf("enter the all 5 values of this array\n");
for(int i=0;i<5;i++){
    scanf("%d",&n[i]);
}
printf("\nn[0]=%d",n[0]);
for(int i=1;i<5;i++){
    printf("\nn[%d]=%d",i,n[i-1]*3);
    
}



    return 0;
}