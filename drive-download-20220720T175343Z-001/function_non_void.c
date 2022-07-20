#include<stdio.h>

int cube(int num)
{
    return num*num*num;
}

float max_of_3(float a, float b, float c)
{
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int factorial (int n)
{
    int fact=1;
    for (n; n>0; n--)
    {
        fact *= n;
    }

    return fact;
}

int reverse(int n)
{
    int reverse_num = 0;

    while (n > 0)
    {
        reverse_num *= 10;
        reverse_num += n%10;
        n = n/10;
    }

    return reverse_num;

}

int main(){

printf("%d" , cube(10));
printf("%d" , max_of_3(10,20,30));
printf("%d" , factorial(10));
printf("%d" , reverse(10));


return 0;
}