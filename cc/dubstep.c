#include <stdio.h>
#include <string.h>
int main()
{
    char str[201], str2[201];
    scanf("%s", str);
    const int l = strlen(str);
    int i = 0, j = 0;
    int flag = 0;
    while (i < l)
    {
        if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')
        {
            i += 3;
            if (flag == 1)
            {
                str2[j++] = ' ';
                flag=0;
            }
            else
            continue;
        }
        else
        {
            flag = 1;
            str2[j] = str[i];
            i++, j++;
        }
    }
        if (str2[--j] == ' ')
            str2[j] = '\0';
    printf("%s", str2);
}