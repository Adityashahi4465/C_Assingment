#include<stdio.h>
#include<conio.h>

int main()
{
	 int i, j, pro;
	int a;

printf("enter any number:");
scanf("%d",&a);
	
	 for(i=a;i<=20;i++)
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