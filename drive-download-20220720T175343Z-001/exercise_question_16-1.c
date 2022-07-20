#include <stdio.h>

int main()
{
  int A, B, m;

  printf("Enter the numbers A and B : ");
  scanf("%d %d", &A, &B);

  m = A * B;

  for (int i = 1; i <= 10; ++i)
  {
    printf("%d x %d = %d \n", m, i, m * i);
  }
  return 0;
}