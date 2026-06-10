#include<stdio.h>
int main()
{
FILE *fp;
fp=fopen("test.txt","a");
fprintf(fp,"Embedded C\n");
fclose(fp);
return 0;
}
