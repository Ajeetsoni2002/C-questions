#include<stdio.h>
int main()
{
  int n,num=1;
  printf("enter the number of row\n");
  scanf("%d",&n);


  for(int i=0;i<=n;i++){
for(int j=0;j<3;j++){
    printf("%d",num);
    num++;
}
printf("\n");
  }

    return 0;
}