#include <stdio.h>
int main()
{
 int rows,cols;
 printf("Ënter number of rows:");
 scanf("%d",&rows);
 printf("Enter number of cols:");
 scanf("%d",&cols);
 for(int i = 1; i<=rows; i++)
 {
  for(int j = 1; j<=cols; j++)
  {
   printf("(%d,%d)",i,j);
  }
  printf("\n");
 }
 return 0;
}
