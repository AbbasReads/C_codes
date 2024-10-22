#include <stdio.h>
void minsq(int a,int b)
{
if(a>b)
    {
        if(2*b<=a)
          printf("%d\n", a*a);
          else
          printf("%d\n", 4*b*b);
    }
    else
    {
        if(2*a<=b)
          printf("%d\n", b*b);
          else
          printf("%d\n", 4*a*a);
    }
}
int main(){

    int a,b,t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d",&a,&b);
        minsq(a,b);
    }
}