#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d", &n);
    }
    for(int k=0;k<t;k++)
    {
        int a[n];
        for(int j = 0; j < n; j++){
            scanf("%d", &a[j]);
        }
        int check = 1;
        for(int k = 0; k < n - 1; k++){
            if (a[k] != a[k+1]){
                check = 0;
                break;
            }
        }
        if (check == 1){
            printf("%d", n);
        }
        else{
            printf("1");
        }
    }
    
    return 0;
}