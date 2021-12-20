#include <stdio.h>
void main()
{
 int a[10][10], b[10][10], i, j, m, n;
 printf("Enter the order of the matrix\n");
 scanf("%d %d", &m, &n);
 printf("Enter the elements of the matrix\n");
 for(i=0; i<m; i++)
 {
  for(j=0; j<n; j++)
  {
   scanf("%d", &a[i][j]);
  }
 }
 for(i=0; i<m; i++)
 {
  for(j=0; j<n; j++)
  {
   b[i][j]=a[j][i];
  }
 }
printf("The transpose of the sparse matrix is\n");
for(i=0; i<m; i++)
 {
  for(j=0; j<n; j++)
  {
   printf("%d ", b[i][j]);
  }
  printf("\n");
 }
}
