#include<stdio.h>
    int main()
    {
        
float k,n,total=0;
for(n=1;n<=50;n++){
k=1/n;
printf("%f\t",k);
// printf("%f\t",k);
total =total+k;
}
printf("the total value of this series is %f\n",total);


        return 0;
    }