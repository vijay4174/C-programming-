#include<stdio.h>
int main ()
{
FILE *fp;
char ch;
fp =fopen ("test.txt","r");
ch = fgetc(fp);
printf("%c\n",ch );
fclose(fp);
return 0;
}
