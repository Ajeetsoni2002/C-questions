#include<stdio.h>
int main()
{
int nums[6],greatest=0,smallest=0;
printf("enter the value of this array\n");
for(int i=0;i<6;i++){
    scanf("%d",&nums[i]);
}
greatest=nums[0];
smallest=nums[0];

for(int i=0;i<6;i++){
    if(nums[i]>greatest){
        greatest=nums[i];
    }
    else if(nums[i]<smallest){
        smallest=nums[i];
    }
}
printf("the deffernce between greatesr and smallest %d\n",greatest-smallest);


    return 0;
}