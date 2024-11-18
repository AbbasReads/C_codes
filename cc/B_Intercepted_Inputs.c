#include <stdio.h>
void actual()
{
    int k;
    scanf("%d", &k);
    int arr[k];
    for (int i = 0; i < k; i++)
    {
        scanf("%d", arr + i);
    }
    int r = k - 2;
    for (int i = 0; i < k; i++)
    {
        if (arr[i] != 0)
        {
            if (r % arr[i] == 0)
            {
                for (int j = i + 1; j < k; j++)
                {
                    if (r / arr[i] == arr[j])
                    {
                        printf("%d %d\n", arr[i], r / arr[i]);
                        return;
                    }
                    else if (arr[j] == arr[i])
                        arr[j] == 0;
                }
            }
        }
    }
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