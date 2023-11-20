#include <stdio.h>
int main()
{
  int a[3][3],i,j,sumRow,sumCol;
  printf("Enter elements of matrix:\n");
  for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
  printf("Matrix is :\n");
  for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
        {
          printf("%d\t",a[i][j]);
        }
      printf("\n");
    }
  for(i=0;i<3;i++)
    {
      sumRow = sumCols = 0;
      for(j=0;j<3;j++)
        {
          sumRow = sumRow + a[i][j];
          sumCol = sumCol + a[j][i];
        }
      printf("\n");
    }
  printf("\nSum of row is : %d",sumRow);
  printf("\nSum of column is : %d",sumCol)
}