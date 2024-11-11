#include <stdio.h>
#include <math.h>
void rou(int n)
{
    int count=0;
    int l=1;
    for(int i=1;i<=n;i++)
    {
        if(i>=pow(10,l))
        l++;
        int x=i%(int)pow(10,l-1);
        if(x==0||i<10)
        count++;
    }
    printf("%d\n", count);
}
int main()
{
    int t;
    scanf("%d", &t);
    int n;
    for(int i=0;i<t;i++){
        scanf("%d", &n);
        rou(n);
    }
}