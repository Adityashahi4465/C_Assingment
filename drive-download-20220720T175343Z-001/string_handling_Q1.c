#include<stdio.h>
#include<string.h>
int main(){
  char str1[50], str2[50];
    printf("String1: ");
    gets(str1);

    printf("String2: ");
    gets(str2);

    int lenstr1 = strlen(str1), lenstr2 = strlen(str2);

   

    if (lenstr1 == lenstr2)
    {
        printf("\nequal length.\n");
        
    }
    else if (lenstr1 < lenstr2)
    {
        printf("\nLength of %s is the greatest.\n", str2);
    }
    else
    {
        printf("\nLength of %s is large.\n", str1);
    }
return 0;
}