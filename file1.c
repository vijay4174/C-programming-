#include<stdio.h>
int main()
{
FILE *fp;
fp=fopen("test.txt","w");
fprintf(fp,"hello vijay\n");
fclose(fp);
printf("data written to file \n");
return 0;
}

