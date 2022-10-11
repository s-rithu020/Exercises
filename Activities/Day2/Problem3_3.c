#include <stdio.h>

int main()
{
    int rows, cols, i, j, trace = 0;
    int first[10][10], second[10][10], prod[10][10];
    printf("Enter number of rows and columns of matrix\n");
    scanf("%d%d", &rows, &cols);
    int traceArr[rows][cols];

    printf("Enter the elements of the matrix: \n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d", &traceArr[i][j]);
        }
    }

    for (i=0; i<rows; i++){
        for (j=0; j<cols; j++){
            if(i == j){
                trace = trace + traceArr[i][j];
            }
        }
    }
    printf("Trace of given matrix is %d\n", trace);
}