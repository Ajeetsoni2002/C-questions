#include<stdio.h>
int main()
{
int password;
printf("please enter the password to unlock\n");
scanf("%d",&password);

if(password==1234){
    printf("unlocked!!!!\n");
}
else{
    printf("error!! (2 attempts more)\n");
}



    return 0;
}