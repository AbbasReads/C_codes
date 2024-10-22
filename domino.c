#include <stdio.h>
int main()
{
    int m,n;
    scanf("%d %d", &m,&n);
    if(m%2==0||n%2==0)
    {
        printf("%d", m/2*n);
    }
    else{
        int l=m/2*2;
        int k=n/2;
        printf("%d", l+k);
    }
}
