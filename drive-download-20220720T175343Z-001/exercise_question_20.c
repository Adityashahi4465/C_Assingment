#include<stdio.h>
#include<conio.h>

int main()
{
	 int i, j, pro;
     
     int A, B, min, max;

	printf("Enter the numbers A and B: ");
	scanf("%d %d", &A, &B);

	if (A >= B)
	{
	    max=A;
        min=B;
}
 else if (B >= A)
	{	
	    max=B;
        min=A;
	}
	
	 for(i=min;i<=max;i++)
	 {
		  for(j=1;j<=10;j++)
		  {
			   pro = i*j;
			   printf("%d x %d = %d\n", i, j, pro);
		  }
		  printf("\n");
	 }
	 
	 return(0);
}
















	

   
  