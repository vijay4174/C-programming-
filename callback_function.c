#include<stdio.h>
int add(int a , int b)
{
return a+b;
}
void calculate(int(*ptr)(int,int))
{
printf("%d\n",ptr(10,20));
}
int main ()
{
calculate (add);
return 0;
}
