#include<stdio.h>
    int main()
    {
int num[5],smallest,position;
printf("enter the value of all 5 numbers\n");
for(int i=0;i<5;i++){
    scanf("%d",&num[i]);
}
smallest=num[0];                    //ITS CAN NOT WRITTEN AS num[0]=smallest 
for(int i=0;i<5;i++){
    if(smallest>num[i]){
        smallest=num[i];
        // position=i;
    }
}
printf("the smallest value is %d\n ",smallest);



        return 0;
    }