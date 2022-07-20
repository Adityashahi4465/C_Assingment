#include<stdio.h>
void isPrime(int n)
{
    if (n > 1){
		
      int c =0;
   for(int i=2;i<=n/2;i++)
	{
       if(n%i==0){
		 c++;
		printf("\n%d IS NOT A PRIME NUMBER",n);
          break;  
        }
    }
    if(c==0){
		printf("\n%d IS A PRIME NUMBER",n);
    }
    }else{

            printf("\n%d IS NOT A PRIME NUMBER",n);

    }
}
int main(){
isPrime(2);
return 0;
}