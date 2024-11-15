#include <stdio.h>
int main()
{
    int n=0,m=0;
    scanf("%d %d", &n,&m);
    int arr[m];
    for (int i = 0; i < m;i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i < m-1;i++)
    {
        for(int j = 0; j < m-1-i;j++)
        {
            if(arr[j+1]<arr[j])
            {
            int  temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
            }
        }
    }
    int min=arr[n-1]-arr[0];
    for(int i=1;i<m-n+1;i++)
    {
        int diff=arr[i+n-1]-arr[i];
        if(diff<min)
        {
         min=diff;
        }
    }
    printf("%d", min);
}