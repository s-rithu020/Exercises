#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int find_min()
{
    int x = 10;
    int arr[x], i;
    for (i = 0; i<x; i++){
        arr[i] = rand()%100;
    }

    for (i=0; i<x; i++){
        printf("%d ", arr[i]);
    }
}

int main()
{
    int val, i;
    int *ptr = NULL;
    
    ptr = (int*)malloc(SIZE * sizeof(int));
    for(int i=0; i<SIZE; i++){
        *(ptr+i) = rand()%SIZE + 1;
        printf("ptr[%d] = %d ", i, *(ptr+i));

        ptr[i] = rand()%SIZE + 1;
        printf("ptr[%d] = %d \n", i, ptr[i]);
    }
    free(ptr);
    return 0;
}