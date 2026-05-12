// example of polymorphism 
#include<stdio.h>
add(int p, int q)
{
printf("Sum is %d\n",p+q);
}
add(int p, int q,int r)
{
printf("Sum is %d\n",p+q+r);
}
int main()
{
add(10,20);
add(50,50,20);
return 0;
}