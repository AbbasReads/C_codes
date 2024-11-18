#include <stdio.h>
int sum(int *p,int l)
{
    
    int s=0;
    for(int i=0;i<l;i++)
    {
      s+=*(p+i);
      printf("%d\n", s);
    }
    // return s;
    // if(l==0)
    //  return 0;
    // return *p+sum(p+1,--l);
}
void sort(int *p,int l,int n)
{
    int required=0;
    for(int i=0;i<l-1;i++)
    {
        for(int j=0;j<l-1-i;j++)
        {
            if(p[j]>p[j+1])
            {

                int temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
            // required++;
            // if(required==n)
            //  return;
        }

    }
    
}
int main(){
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        int n, k;
        scanf("%d %d",&n,&k);
        int arr[k];
        int b;
        for(int j=0;j<k;j++)
        {
            scanf("%d %d", &b, &arr[j]);
        }
        if(n>=k)
         printf("%d\n", sum(arr,k));
         else{
            sort(arr,k,n);
            printf("%d\n", sum(arr+k-n,n));
         }
    }
}