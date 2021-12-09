#include<stdio.h>
int difference(int a, int b);
int main()
{
    int x,y,diff=0;
    printf("\n Enter the first number:");
    scanf("%d",&x);
    printf("\n Enter the second number:");
    scanf("%d",&y);
    printf("x=%d,y=%d",x,y);
    diff = difference(x,y);
    return 0;
}
int difference(int a, int b)
{
    int diff;
    diff = (a-b);
    printf("\n The difference is %d",diff);
    return diff;
}

