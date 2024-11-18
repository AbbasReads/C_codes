#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        char str[200001];
        scanf("%s", str);
        int q;
        scanf("%d", &q);
        for(int j=0;j<q;j++)
        {
            int i;
            char v;
            scanf("%d %c", &i,&v);
            str[i-1]=v;
            if(strstr(str, "1100"))
             printf("YES\n");
             else 
             printf("NO\n");
        }
    }
}