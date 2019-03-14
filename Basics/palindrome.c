#include <stdio.h>

int main()
{
    // Getting the input number
    int n;
    printf("Enter Num :");
    scanf("%d",&n);
    
    // Initializing the requirements
    int temp=n, rev=0, reminder;
    
    // Do thie mehtod while the actual number fully degraded
    while(n!=0)
    {
        // Getting the last number of n 
        reminder = n %10;
        
        // Update it on the current decimal of `rev`
        rev = rev * 10 + reminder;
        
        // Degrade n
        n =  n/10;
    }
    
    printf("It is ");
    if (temp != rev)
    {
        printf ("not ");
    }
    printf ("Palindrome");
    return 0;
}
