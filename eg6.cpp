#include<stdio.h>
void add_two_number(int p, int q)
{
printf("The sum of two number is %d\n",p+q);
}
void add_three_number (int p,int q,int r)
{
printf("The sum of three number is %d\n",p+r+r);
}
int main ()
{
add_two_number(10,20);
add_three_number(23,34,67);
return 0;
}