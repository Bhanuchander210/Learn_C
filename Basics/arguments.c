#include<stdio.h>
void main(int narg, char* args[]) 
{
  
  printf("Program Name        : %s\n", args[0]);
  printf("Number of arguments : %d\n", narg);

  if (narg < 2)
    return;

  int counter;
  printf("Arguments details   :\n");
  for(counter=1 ; counter < narg ; counter++){ 
    printf("args[%d]: %s \n", counter, args[counter]);  
  } 

}