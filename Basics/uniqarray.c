#include<stdio.h>
#include<stdlib.h>

void printuniqarr (int *arr)
{
  int count=0;

  while (count < arr[0]){
    printf ("Element is : %d Value is : %d \n", count, arr[count+1]);
    count++;
  }
}


void printarr (int arr[], int n)
{
  int i;
  for (i =0; i<n ; i++)
  {
    printf("Elem : %d value : %d\n", i, arr[i]);
  }
}


int* unique(int *arr, int n)
{
  int *ret,i, count=0;

  ret = (int *) malloc(5 * sizeof(int *));

  for (i=0; i<n; i++)
  {
    while(arr[i]== arr[i+1] && i < n)
      i++;
    
    count++;
    ret[count]=arr[i];
  }
  ret[0]=count;
  return ret;
}


int* sort(int *arr, int n)
{
  int i,j, temp;
  for (i=0; i<n; i++)
  {
    for (j=i+1; j<n ; j++)
    {

      if (arr[j]<arr[i])
      {
        temp = arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
      }
    }
  }
  return arr;
}

int main()
{
  int n;
  printf("Print number of elem in array : \n");
  scanf("%d", &n);

  int *arr;

  int i;
  for (i =0; i<n ; i++)
  {
    scanf("%d", (arr+i));
  }

  printarr(arr, n);

  arr = sort(arr, n);

  printf("sorted \n");

  printarr(arr, n);

  arr = unique(arr, n);

  printf("unique  : %d \n", (arr[0]+1));
  printuniqarr(arr);

  return 0;
}