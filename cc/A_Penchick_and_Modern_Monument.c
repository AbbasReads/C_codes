#include <stdio.h>
void actual()
{
    int n;
    scanf("%d", &n);
    int h[n];
    for (int i = 0; i < n; i++)
        scanf("%d", h+i);
    int mode=1;
    int freq=1;
    for (int i = 0; i < n-1; i++)
    {
        if(h[i]==h[i+1]){
        freq++;
        }
        else
         freq=1;
        if(freq>mode)
        {
            mode=freq;
        }
    }
    printf("%d\n",n-mode);
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        actual();
    }
}