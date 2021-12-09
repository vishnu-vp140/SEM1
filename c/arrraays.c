#include <stdio.h>
#include <math.h>
float ar(int a,int b,int c)
{
float s,area;
s = (a+b+c)/2;
area = sqrt(s*(s-a)*(s-b)*(s-c));
return area;
}
int main()
{
int a,b,c;
float area=0;
printf("ENTER SIDES OF A TRIANGLE : ");
scanf("%d %d %d",&a,&b,&c);
area=ar(a,b,c);
printf("Area of the triangle is %.2f",area);
return 0;
}
