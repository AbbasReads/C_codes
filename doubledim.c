#include <stdio.h>
#include <stdlib.h>
int ** create(int r, int c)
{
    int **matrix;
    matrix=(int **)calloc(r, sizeof(r));
    for(register int i=0;i<r;i++)
    {
        *(matrix+i)=(int *)calloc(c, sizeof(c));
    }
    return matrix;
}
int ** add(int **m1, int **m2, int r,int c)
{
    int **m3=create(r,c);
    // int r=sizeof(m1)/sizeof(*m1); WIll not work
    // int c=sizeof(*m1)/sizeof(**m1); because it is in a called function

    for(register int i=0;i<r;i++)
    {
      for(register int j=0;j<c;j++)
      {
         *(m3[i]+j)=*(m1[i]+j)+*(m2[i]+j);    
      }
    }
    return m3;
}
int main()
{
    int r, c;
    scanf("%d %d", &r,&c);
    int **m1=create(r,c);
    int **m2=create(r,c);
    for(register int i=0;i<r;i++)
    {
      for(register int j=0;j<c;j++)   
        *(m1[i]+j)=i*j;
    }
    for(register int i=0;i<r;i++)
    {
      for(register int j=0;j<c;j++)   
        *(m2[i]+j)=i-j;
    }
    int **m3=add(m1,m2,r,c);
    for(register int i=0;i<r;i++)
    {
      for(register int j=0;j<c;j++)
      {
            printf("%d\t",*(m3[i]+j));
      }
      printf("\n");
    }
}