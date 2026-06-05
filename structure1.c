#include <stdio.h>
struct Student 
{
char name[20];
int roll;
};
int main() 
{
struct Student s1;
s1.roll = 222;
printf("enter name :");
scanf("%s",s1.name);
printf("%s\n",s1.name);
printf("%d\n",s1.roll);
return 0;
}
