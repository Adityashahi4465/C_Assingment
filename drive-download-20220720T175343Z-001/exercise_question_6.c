#include <stdio.h>
int main() {
int a,b,c,d,e;
	printf("\nEnter the values of a,b,c,d,e :\n ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

	if(a<b && a<c && a<d && a<e)
	{
		printf("a is minimum");
	}
	else if(b<c && b<d && b<e)
	{
		printf("b is minimum");
	}
	else if(c<d && c<e)
	
	{
		printf("c is minimum");
	}
	else if(d<e)
	{
		printf("d is minimum");
	}
	else 
	{
		printf("e is minimum");
	}

	return 0;
}