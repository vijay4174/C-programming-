#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the number:");
    scanf("%d",&a ,&b);
    if (a>b)
        printf("given number is largest",a);
    else 
        printf("given number is largest ",b);
    return 0;
}
