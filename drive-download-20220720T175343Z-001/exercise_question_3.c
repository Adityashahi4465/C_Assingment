#include <stdio.h>

int main()
{

  int a, b, c;

  printf("Enter three numbers: ");
  scanf("%d %d %d", &a, &b, &c);

  int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);

  // Print the largest number
  printf("Maximum number among  %d %d %d  is : %d\n", a, b, c, max);

  return 0;
}