#include<stdio.h>
#include<stdlib.h>
int add (int a , int b)
{
return a+b;
}
int main()
{
int (*ptr)(int,int);
ptr = add;
printf("%d\n",ptr(10,20));
return 0;
}
