#include <stdio.h>
int main()
{
int a = 100;
int *p=&a;
*p=200;
printf("%d\n",a);
printf("%d\n",*p);
return 0;
}
