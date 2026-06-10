#include<stdio.h>
int main ()
{
FILE *fp;
char data [100];
fp =fopen ("test.txt","r");
printf("%s\n",data );
fclose(fp);
return 0;
}
