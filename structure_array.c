#include <stdio.h>
struct Student 
{
int roll;
};
int main ()
{
struct Student s[3];
s[0].roll=111;
s[1].roll=222;
s[2].roll=333;
printf("%d\n",s[0].roll);
printf("%d\n",s[1].roll);
printf("%d\n",s[2].roll);
return 0;
}
