#include <stdio.h>

int main()
{
	int A, B, C, max;

	printf("Enter the numbers A, B and C: ");
	scanf("%d %d %d", &A, &B, &C);

	if (A >= B && A >= C)
	{
	    max=A;
printf("%d is the largest number",A);	
}
if (B >= A && B >= C)
	{	max=B;
printf("%d is the largest number",B);
	}
	
	if (C >= A && C >= B)
	{	max=C;
printf("\n%d is the largest number",C);
   }
   
   for (int i = 1; i <= 10; ++i) {
    printf("%d * %d = %d \n", max, i, max * i);
  }
  return 0;
}