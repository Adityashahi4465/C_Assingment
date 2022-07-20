#include <stdio.h>
int main() {
    int num1,num2,num3,sum;
    printf("Enter 2 integers: ");
    scanf("%d%d", &num1  ,&num2);
    
  
    
    printf("Enter an 3rd integer: ");
    scanf("%d", &num3);
    
    
    sum=num1+num2+num3;
    
    
    printf("sum of 3 numbers : %d\n",sum);
    
    (sum % 2 == 0) ? printf("%d is even.", sum) : printf("%d is odd.", sum);
    return 0;
}


