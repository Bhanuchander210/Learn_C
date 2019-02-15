#include <stdio.h> 
#include <stdlib.h> 
  
int main() 
{ 
    int arr[] ={1,2,3};

    int test;

    printf("Init array size : %d\n", sizeof(arr)/sizeof(int));
    
    for (test=0; test<10; test++){
        
        printf("%d\n", arr[test]);
    }
  
    int* ptr; 
    int n, i, sum = 0;

    printf("Initial size : %d\n", sizeof(ptr)/sizeof(int));
  
    n = 5; 
    printf("Enter number of elements: %d\n", n);
  
    ptr = (int*) malloc(n);

    printf("\nCurrent size : %d\n", sizeof(ptr)/sizeof(int)); 
  
    if (ptr == NULL) { 
        printf("Memory not allocated.\n"); 
        exit(0); 
    } 
    else { 
  
        printf("Memory successfully allocated using malloc.\n"); 

        for (i = 0; i < n; i++) { 
            printf("value i : %d\n", i*3);
            ptr[i] = (i + 1)*3; 
        } 
  
        printf("The elements of the array are: "); 
        for (i = 0; i < n; ++i) { 
            printf("%d, ", ptr[i]); 
        } 
    }

    free(ptr);

    printf("\nCurrent size : %d\n", sizeof(ptr)/sizeof(int)); 
  
    return 0; 
} 