#include<stdio.h>
#define DEBUG 
int main()
{
#ifdef DEBUG
printf("debug mode is ON \n");
#endif
printf("program running \n");
return 0;
}

