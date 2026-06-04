#include<stdio.h>
void change (int *x)
{
*x=100;
}
int main ()
{
int a =50;
change (&a);
printf("%d\n",a);
return 0;
}
