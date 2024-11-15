#include <stdio.h>
#include <stdlib.h>
int check(int a, int b, int x, int y)
{
    if (a == x && b == y)
    {
        printf("YES\n");
        return 1;
    }
    return 0;
}
int main()
{
    int t;
    scanf("%d", &t);
    int n, a, b;
    char *ptr;
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &n, &a, &b);
        ptr = (char *)malloc((n + 1) * sizeof(char));
        scanf("%s", ptr);
        int x = 0, y = 0, flag1 = 0, flag2 = 0;
        int j = 0;
        while (flag1 != 1 && flag2 != 1)
        {
            
            char charac = *(ptr + j);
                if (charac == '\0')
                {
                j = 0;
                charac=*(ptr);
                }
            switch (charac)
            {
            case 'N':
                y++;
                break;
            case 'S':
                y--;
                break;
            case 'E':
                x++;
                break;
            case 'W':
                x--;
                break;
            }
            
            flag1 = check(a, b, x, y);
            if((x-a)+(y-b)>n||(x==0&&y==0)){
             flag2=1;
             printf("NO\n");
            }
                j++;
        }
        free(ptr);
    }
}