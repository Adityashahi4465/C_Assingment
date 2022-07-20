#include<stdio.h>
#include<string.h>
int main(){

    // Reversing the string
 char str[1000]= "";
    printf("Name: ");
    gets(str);

      int length = strlen(str);
 
// printf("%d"  ,length);
    int right = length - 1;
    char temp;


    for (int i=0; i < right; i++)
    {
        temp = str[i];
        str[i] = str[right];
        str[right] = temp;
        right--;
    }
    
    
    printf("%s",str);
    printf("\n");


    

return 0;
}