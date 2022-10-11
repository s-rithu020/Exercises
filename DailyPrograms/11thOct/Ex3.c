#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int len;
    printf("Size: ");
    scanf("%d", &len);
    int arr[len], i;
    for (i=0; i<len; i++){
        arr[i] = rand()%100;
    }
    
    printf("Elements:\n");
    printf("{");
    for (i=0; i<len; i++){
        //printf("Element %d is %d\n", i+1, arr[i]);
        printf("%d ", arr[i]);
    }
    printf("}\n");
    
}