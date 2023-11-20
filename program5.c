#include <stdio.h>
#define N 50
int main()
{
  int a[N][N],b[N][N],c[N][N],i,j,k,sum,p,q,m,n;
  printf("Enter rows and columns for first matrix :");
  scanf("%d %d",&m,&n);
  printf("Enter elements of first matrix:\n");
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
  printf("\nFirst Matrix is :\n");
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        {
          printf("%d\t",a[i][j]);
        }
      printf("\n");
    }
  printf("Enter rows and columns for second matrix :");
  scanf("%d %d",&p,&q);
  printf("Enter elements of second matrix:\n");
  for(i=0;i<p;i++)
    {
      for(j=0;j<q;j++)
        {
          scanf("%d",&b[i][j]);
        }
    }
  printf("\n Second Matrix is :\n");
  for(i=0;i<p;i++)
    {
      for(j=0;j<q;j++)
        {
          printf("%d\t",b[i][j]);
        }
      printf("\n");
    }
  if(n!=p)
  {
    printf("Matrix multiplication not possible ");
  }
  else
  {
    for(i=0;i<m;i++)
      {
        sum = 0;
        for(j=0;j<q;j++)
          {
            for(k=0;k<m;k++)
              {
                sum = sum + a[i][k] * b[k][j];
              }
            c[i][j] = sum;
          }
      }
  }
  printf("Matrix Multiplication is :\n");
  for(i=0;i<m;i++)
    {
      for(j=0;j<q;j++)
        {
          printf("%d\t",c[i][j]);
        }
      printf("\n");
    }
}