#include<stdio.h>
int main ()
{
FILE *fp;
char ch;
fp =fopen ("test.txt","r");
while ((ch =fgetc(fp))!=EOF)
{
printf("%c\n",ch );
}
fclose(fp);
return 0;
}
