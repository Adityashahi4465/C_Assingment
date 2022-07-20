#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

   
    if(num % 2 == 0)
    
     for (int i = 1; i <= 10; ++i) 
    {
     printf("2 x %d = %d \n", i, 2 * i);
    }
    else
     for (int i = 1; i <= 10; ++i) 
    {
     printf("5 x %d = %d \n", i, 5 * i);
    }
    return 0;
}