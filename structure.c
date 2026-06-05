#include<stdio.h>
struct Student
{
int roll;
float marks;
};
int main()
{
struct Student s1;
s1.roll = 222;
s1.marks = 12.2;
printf("%d\n",s1.roll);
printf("%.1f\n",s1.marks);
return 0;
}

