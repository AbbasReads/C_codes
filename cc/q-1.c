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
    int points = 0;
    int i = 0;
    int j = -1;
    while (i < p1)
    {
        j++;
        if (j == p2)
        {
            printf("%d ", points);
            points = 0;
            j=-1;
            i++;
            continue;
        }
        if(a[i] >= d[j])
        {
            points += g[j];
        }
        
    }
    return 0;
}
