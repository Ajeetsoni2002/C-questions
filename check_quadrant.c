#include<stdio.h>
int main()
{
int x,y;
printf("enter both points to check quadrant\n");
scanf("%d%d",&x,&y);

if(x>0 && y>0){
    printf("I quadrant (+,+)\n");
}
else if(x<0 && y>0){
    printf("II quadrant (-,+)\n");
}
else if(x<0 && y<0){
    printf("III quadrant (-,-)\n");
}
else if(x>0 && y<0){
    printf("IV quadrant (+,-)\n");
}


    return 0;
}