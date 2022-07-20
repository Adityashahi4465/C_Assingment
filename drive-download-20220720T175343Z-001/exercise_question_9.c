#include <stdio.h>
#include <conio.h>
int main()
{
    int i;
    float mark, sum = 0, avg;
    printf("Enter Marks obtained in 5 Subjects: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%f", &mark);
        sum = sum + mark;
    }
    avg = sum / 5;
    printf("\nGrade = ");
    if (avg >= 80 && avg <= 100)
        printf("disctiction");

    else if (avg >= 60 && avg < 79)
        printf("first division");

    else if (avg >= 50 && avg < 69)
        printf("second divisoin");

    else if (avg >= 40 && avg < 49)
        printf("third devision");
        
    else if (avg >= 0 && avg < 39)
        printf("fail");
    else
        printf("Invalid!");
    getch();
    return 0;
}