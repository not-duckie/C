#include <stdio.h>
 
int main()
{
  int n, i,  c, a = 1;
 
  printf("Enter the number of rows of Floyd's triangle to print\n");
  scanf("%d", &n);
 printf("\n\n\n");
 
  for (i = 1; i <= n; i++)
  {
    for (c = 1; c <= i; c++)
    {
      printf("%d ",a);
      a++;
    }
    printf("\n");
  }

  printf("\n\n\n\n");
 
  return 0;
}
