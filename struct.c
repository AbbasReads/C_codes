#include <stdio.h>
struct stud
{
   char name[23];
   int age;
   int score;
};
int main()
{
    struct stud s1 = {"Abbas", 19, 28};
    printf("%d %d", s1.age, s1.score );
}   
