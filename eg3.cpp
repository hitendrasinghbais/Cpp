// new feature in cpp
#include<stdio.h>
void do_something (int &j)
{
j=67;
}

int main ()
{
int x;
x=34;
do_something (x);
printf("The value is %d\n",x);
return 0;
}