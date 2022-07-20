# include<stdio.h>
# include<string.h>

int main(){
    char str1[50], str2[50];
    printf("String1: ");
    gets(str1);

    printf("String2: ");
    gets(str2);

    int lenstr1, lenstr2;


   if (strcmp(str1, str2)==0) 
printf("\n    The given strings are equal"); 
else 
printf("\n    The given strings are not equal");
  
    return 0;
}