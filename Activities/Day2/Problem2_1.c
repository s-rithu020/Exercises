#include <stdio.h>

int main()
{
    int arr[100], linser, i, n;
    printf("How many numbers in the array? ");
    scanf("%d", &n);
    printf("\nEnter %d numbers: ", n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("\nWhich number to search? ");
    scanf("%d", &linser);

    for (i=0; i<n; i++){
        if(arr[i] == linser){
            printf("%d is present at location %d.\n", linser, i+1);
            break;
        }
    }
    if(i == n){
        printf("%d is not present.\n", linser);
    }
}
