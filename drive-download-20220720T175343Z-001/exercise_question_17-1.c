#include<stdio.h>
#include<conio.h>

int main()
{
	 int i, j, pro;
	
	
	 for(i=20;i>=2;i--)
	 {
		  for(j=1;j<=10;j++)
		  {
			   pro = i*j;
			   printf("%d x %d = %d\n", i, j, pro);
		  }
		  printf("\n");
	 }
	 getch();
	 return(0);
}