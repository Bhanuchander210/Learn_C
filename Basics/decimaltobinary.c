#include<stdio.h>

int main()
{
  int n, c, k;
 
  printf("Enter an integer in decimal number system\n");
  scanf("%d", &n);
 
  printf("%d in binary number system is:\n", n);
 
  for (c = 3; c >= 0; c--)
  {
    k = n >> c;

    if (k & 1)
      printf("1");
    else
      printf("0");
  }

  printf("One shift: %d\n", 7 >> 1);

  printf("two shift: %d\n", 7 >> 2);
  printf("three shift: %d\n", 7 >> 3);

  printf("Bit check : %d\n", 1 & 3);

  printf("Bit check : %d\n", 1 & 3);
  

 
  printf("\n");
 
  return 0;
}