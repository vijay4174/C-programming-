#include <stdio.h>
int main ()
{
int a = 10;
int *p=&a;
int **pp = &p;
**pp=99;
printf("%d\n",a);
printf("%d\n",*p);
printf("%d\n",**pp);
return 0;
}
