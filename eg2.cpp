// call by reference example 
#include<stdio.h>
void add_and_subtract (int p, int q, int *r,int *s)
{
*r=p+q;
*s=p-q;
}
int main ()
{
int x,y,a,b;
x=45;
y=23;
add_and_subtract(x,y,&a,&b);
printf("Total is %d\n",a);
printf("Difference is %d\n",b);
return 0;
}