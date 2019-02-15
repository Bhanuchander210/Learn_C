#include <ctype.h> 
#include <stdio.h> 
  
int main() 
{ 
    int j = 0; 
    char str[50];
    printf("Enter your string :");
    scanf ("%[^\n]%*c",&str);

    while (str[j]) { 
        str[j]=tolower(str[j]);
        j++; 
    } 

    printf("%s\n", str);
  
    return 0; 
} 