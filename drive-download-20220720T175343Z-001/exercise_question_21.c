#include <stdio.h>
int main() {
    int num, a, b, i, j, pro;
    printf("Enter an integer: ");
    scanf("%d", &num);

   
    if(num % 2 == 0)
     {  	

        for(a=2;a<=20;a++)
	     {
		      for(b=1;b<=10;b++)
		    {
			   pro = a*b;
			   printf("%d x %d = %d\n", a, b, pro);
		      }
		     printf("\n");
	    }
     } 
    else
     {   	 
         for(int i=20;i>=2;i--)
	        {
    		  for( int j=1;j<=10;j++)
    		  {
    			   pro = i*j;
    			   printf("%d x %d = %d\n", i, j, pro);
    		  }
    		  printf("\n");
	        }
    }
    return 0;
}
