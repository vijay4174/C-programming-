#include<stdio.h>
int main()
{
int arr[5]={100,55,200,75,150};
int largest = arr[0];
for (int i=1;i<5;i++)
{
if (arr[i]>largest)
{
largest = arr[i];
}
}
printf("largest = %d\n",largest);
return 0;
}
