#include <stdio.h>
int sumArray(int *arr,int size)
{
int sum = 0;
for (int i=0;i<size;i++)
{
sum = sum + *(arr+i);
}
return sum;
}
int main ()
{
int arr[5]={10,20,30,40,50};
int result = sumArray(arr,3);
printf("sum=%d\n",result);
return 0;
}
