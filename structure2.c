#include<stdio.h>
struct Student 
{
int roll;
};
int main()
{
struct Student s1,s2;
s1.roll = 111;
s2.roll = 222;
printf("%d\n",s1.roll);
printf("%d\n",s2.roll);
return 0;
}
