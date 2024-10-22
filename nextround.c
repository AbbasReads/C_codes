#include <stdio.h>
int main()
{
    int n, k;
    int num=0;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (arr[k - 1] > 0)
    {
        num = k;
        for (int i = k; i < n; i++)
        {
            if (arr[i] == arr[i - 1])
                num++;
             else
              break;   
        }
    }
    printf("%d", num);
}