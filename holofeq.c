#include <stdio.h>
int main()
{
    char *s="Hello";
    char s1[]="Kelloggs";
    printf("%d", strcmp(s, &s1));
}