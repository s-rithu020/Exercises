#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    int first[10][10], second[10][10], add[10][10], sub[10][10];
    printf("Enter number of rows and columns of both matrices\n");
    scanf("%d%d", &rows, &cols);
    printf("Enter the elements of the first matrix: \n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter elements of second matrix: \n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d", &second[i][j]);
        }
    }

    printf("The sum is: \n");
    for (i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            add[i][j] = first[i][j] + second[i][j];
            printf("%d\t", add[i][j]);
        }
        printf("\n");
    }

    printf("The difference is: \n");
    for (i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            sub[i][j] = first[i][j] - second[i][j];
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }
}