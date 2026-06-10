#include<stdio.h>
struct Student 
{
int roll;
};
int main ()
{
struct Student s1;
struct Student *ptr=&s1;
ptr->roll=101;
printf("%d\n",ptr->roll);
return 0;
}
