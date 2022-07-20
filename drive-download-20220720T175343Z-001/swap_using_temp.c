#include <stdio.h>
int main()
{

  // Swap Using helper var
  int a, b, helper;
  printf("Enter the two numbers to swap: ");
  scanf("%d %d", &a, &b);

  helper = a;

  a = b;

  b = helper;



  printf("After swapping, a and b number = %d , %d", a,b);
  return 0;
}

// Done
