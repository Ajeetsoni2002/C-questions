#include<stdio.h>
int main()
{
int numbers[5],positive=0,negative=0,total=0;
printf("enter the 5 numbers\n");
scanf("%d%d%d%d%d",&numbers[0],&numbers[1],&numbers[2],&numbers[3],&numbers[4]);

for(int i=0;i<5;i++){
    if(numbers[i]>0)
{
total=total+numbers[i];
    positive++;
 }}
// if(numbers[i]<0){
//     negative++;
// }
// }
// printf("positive numbers is: %d\n  negative numbers is: %d\n",positive,negative);


printf("the avarage of positive numbers is %d\n",total/positive);


    return 0;
}