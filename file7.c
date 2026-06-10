#include<stdio.h>
int main ()
{
FILE *fp;
fp =fopen ("tst.txt","w");
fputs("EMBEDDED SYSTEMS",fp);
fclose(fp);
return 0;
}
