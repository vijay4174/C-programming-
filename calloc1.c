#include<stdio.h>
#include<stdlib.h>
int main ()
{
int *ptr;
ptr = (int *) calloc(5,sizeof(int));
printf("%d\n",ptr[0]);
printf("%d\n",ptr[1]);
printf("%d\n",ptr[2]);
free(ptr);
return 0;
}
