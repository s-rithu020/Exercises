#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    int first[10][10], second[10][10], prod[10][10];
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

    printf("The product is: \n");
    for (i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            prod[i][j] = first[i][j] * second[i][j];
            printf("%d\t", prod[i][j]);
        }
        printf("\n");
    }
}