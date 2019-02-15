#include<stdio.h>

void staticcheck()
{
  int ii;
  for (ii=1; ii < 5 ; ii++)
  {
    static int mystatic = 1;
    printf("mystatic : %d\n", mystatic);
    mystatic++;
  }
}

void main(int narg, char* args[]) 
{
  // printing auto
  auto int i = 1;
  {
    auto int i = 2;
    {
      auto int i = 3;
      printf ( "%d\n", i);
    }
    printf ( "%d\n", i);
  }
  printf( "%d\n", i);

  // Prints garbage
  int a;
  register int c;
  extern int d;
  static int b;
  printf("auto a : %d \t static b: %d \t register c: %d \t extern d: %d \n", a,b,c,d);

  staticcheck();
  staticcheck();

}


int d;