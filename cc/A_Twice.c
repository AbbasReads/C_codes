#include <stdio.h>
#include <stdlib.h>
void actual()
{
    int score = 0;
    int n;
    scanf("%d\n", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr+i);
    }
    for (int i = 0; (i < n); i++)
    {
        if(arr[i]!=0)
        {
        int freq=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                freq++;
                arr[j]=0;
            }
        }
        
        score+=freq/2;
        }
        // arr[i]=0;
    }
    printf("%d\n", score);
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