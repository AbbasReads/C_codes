#include <stdio.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int count = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == s[i + 1])
        {
            count++;
            if (count + 1 == 7)
            {
                printf("YES");
                return 0;
            }
        }
        else
            count = 0;
        i++;
    }
    printf("NO");
}
