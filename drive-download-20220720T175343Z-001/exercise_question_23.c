#include <stdio.h>
int main()
{
    int k, i, a[10];
    printf("\nEnter the 10 numbers:- \n");
    for (i = 0; i < 10; i++)
    {
        printf("Enter %d no. element: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\nThe prime numbers that exist in the array are: ");
    for (k = 0; k < 10; k++)
    {
        int count = 0;
        for (i = 2; i <= a[k] / 2; i++)
        {
            if (a[k] % i == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            printf("%d  ", a[k]);
        }
    }
    return 0;
}