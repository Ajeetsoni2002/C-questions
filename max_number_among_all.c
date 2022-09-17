#include<stdio.h>
 
int main()
{
int numbers[5],max=0,position=0;
printf("enter any 5 values:\n");
scanf("%d%d%d%d%d",&numbers[0],&numbers[1],&numbers[2],&numbers[3],&numbers[4]);

max=numbers[0];    //its can not written like numbers[0]=max

for(int i=0;i<5;i++){
    if(numbers[i]>max){
        max=numbers[i];
        position=i;
        
    }
}
printf("greatest value is : %d\n and position is:%d\n",max,position+1);



    return 0;
}