#include<stdio.h>
int main ()
{
int x;
int &j=x;
x=56;
printf("The value of x is %d\n",x);
j=99;
printf("The value of x is %d\n",x);
return 0;
}