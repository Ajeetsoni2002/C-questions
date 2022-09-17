#include <stdio.h>
int main()
{
    int n[5], total = 0, count = 0, position1 = 0, position2 = 0, max = 0, min = 0;
    printf("enter the 5 values of array\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
    }
    max = n[0];
    min = n[0];
    for (int i = 0; i < 5; i++)
    {
        if (n[i] > 0)
        {
            count++;
        }
        if (n[i] > max)
        {
            max = n[i];
            position1 = i;
        }
        else if (n[i] < min)
        {
            min = n[i];
            position2 = i;
        }
    }
    printf("the count of positive  numbers  is %d\n ", count);
    printf("greatest value is %d\n position is %d\n", max, position1 + 1);
    printf("smallest value is %d\n position is %d\n", min, position2 + 1);

    return 0;
}