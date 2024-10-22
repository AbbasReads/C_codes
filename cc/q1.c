#include <stdio.h>
int main()
{
    int p1, p2;
    scanf("%d", &p1);

    scanf("%d", &p2);
    int a[p1], d[p2], g[p2];
    for (int i = 0; i < p1; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < p2; i++)
        scanf("%d %d", &d[i], &g[i]);
    int points=0;
    for (int i = 0; i < p1; i++)
    {
        for (int j = 0; j < p2; j++)
        {
            if (a[i] >= d[j])
            {
                points += g[j];
            }
        }
        printf("%d ", points);
        points=0;
    }
    return 0;
}