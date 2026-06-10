#include<stdio.h>
int main ()
{
FILE *fp;
fp =fopen ("tst.txt","w");
fputc('A',fp);
fputc('B',fp);
fputc('C',fp);
fclose(fp);
return 0;
}
