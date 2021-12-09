#include<stdio.h>
#include<math.h>
float avg(int a,int b);
int main()
{
    int x,y;
    float average;
    printf("\n Enter the first number :");
    scanf("%d",&x);
    printf("\n Enter the second number:");
    scanf("%d",&y);
    printf("x=%d ,y=%d",x,y);
    average=avg(x,y);
    return 0;
}
float avg(int a ,int b)
{
    float avg;
    avg = (float)(a+b)/2;
    printf("\n The average of the two numbers is %f",avg);
    return avg;
}
