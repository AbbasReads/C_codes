#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, t;
    scanf("%d %d", &n, &t);
    char str[n];
    int *pos;
    scanf("%s", str);
    int k = 1;
    for (register int i = 0; i < n; i++)
    {
        if (str[i] == 'B')
        {
            pos=(int *)realloc(pos, sizeof(int) * k);
            pos[k - 1] = i;
            k++;
        }
    }
    for (register int i = 0; i < t; i++)
    {
        for (register int j = 0; j < k; j++)
        {
            if (*(pos + j) != n - 1)
            {
                if (str[*(pos + j)] == 'B' && str[*(pos + j) + 1] == 'G')
                {
                    char tmp = str[*(pos + j)];
                    str[*(pos + j)] = str[*(pos + j) + 1];
                    str[*(pos + j) + 1] = tmp;
                    *(pos + j)=*(pos + j)+1;
                }
            }
        }
    }   
    printf("%s", str);
}