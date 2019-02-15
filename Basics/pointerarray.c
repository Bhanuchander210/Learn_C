#include <stdio.h>

int main () {

   int  var[] = {1,2,3,4,5,6,7,8,9};
   int  *ptr;
   int dptr;

   ptr = var;
   dptr =var;
   int i;

   printf ("size : %d\n", sizeof(var) / sizeof(int));

   for ( i = 0; i < sizeof(var)/sizeof(int); i++) {
      printf("Value : %d\n", dptr );
      dptr++;
   }

   return 0;
}