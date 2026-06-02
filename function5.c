#include<stdio.h>
int largest (int a,int b)
{
if (a>b)
{
return a;
}
else
{
return b;
}
}
int main()
{
int result;
result = largest(10 , 20);
printf ("largest = %d\n", result );
return 0;
}
