#include<stdio.h>
struct Bulb
{
int wattage;
};
int main ()
{
struct Bulb g;
g.wattage=-60;
printf("Wattage of bulb is %d\n",g.wattage);
return 0;
}