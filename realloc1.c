#include<stdio.h>
#include<stdlib.h>
int main ()
{
int *ptr;
ptr = (int*)malloc(5 * sizeof (int));
ptr[0]=10;
ptr[1]=20;
ptr = (int*) realloc(ptr,10*sizeof(int));
ptr[5]=60;
printf("%d\n",ptr[5]);
free(ptr);
return 0;
}
