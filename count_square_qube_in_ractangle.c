#include<stdio.h>
int main()
{
int n, num=1;
printf("enter the number of rows\n");
scanf("%d",&n);

for(int i=0;i<=n;i++){
    for(int j=0;j<3;j++){
        if(j==0){
            printf("%d",num);
            num++;
            }
            if(j==1){
                printf("%d",num*num);
              
            }
            if(j==2){
                printf("%d",num*num*num);
            }
            
        }
    printf("\n");
    }




    return 0;
}