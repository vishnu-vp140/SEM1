//Develop a program to calculate the sum of squares of first n odd numbers. (using for loop)

#include<stdio.h>
int main()
{
int i,n,sum;
printf("Enter the number:\n");
scanf("%d",&n);
sum=0;
for(i=1;i<n;i=i+2)
{
sum=sum+(i*i);
}
printf("The sum of squares of first %d odd numbers:\n%d",n,sum);
return 0;
}
