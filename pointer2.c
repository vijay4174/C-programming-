#include <stdio.h>
int main()
{
int a = 100;
int *p=&a;
printf ("before:%d\n",a);
*p=200;
printf("after:%d\n",a);
return 0;
}
