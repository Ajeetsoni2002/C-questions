#include<stdio.h>
int main()
{
int  numbers[10],total=0;
for(int j=1;j<=10;j++){
    printf("enter the values of number[%d]\n",j);
    scanf("%d",&numbers[j]);
}

for(int i=1;i<=10;i++){
if(numbers[i]%2!=0){
    printf("list of odd numbers %d\n",numbers[i]);
    total=total+numbers[i];
}

}
printf("the sum of odd numbers is :%d\n",total);





    return 0;
}