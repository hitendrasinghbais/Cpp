// call by value example
#include<stdio.h>

void add (int p, int q)
{
printf("Total is :%d\n",p+q);
}
int main ()
{
int x=23,y=45;
add(x,y);
return 0;
}

