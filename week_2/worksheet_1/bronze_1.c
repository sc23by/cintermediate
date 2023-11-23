#include <stdio.h>

void transposeMatrix(int a[2][3], int b[2][3])
{
    int i, j;

    for (j = 0; j <= 2; j++)
    {
        b [0][j] = a[1][j];
    }
    for (j = 0; j <= 2; j++)
    {
        b [1][j] = a[0][j];
    }
}



void printMatrix(int a[2][3])
{
    for (int i = 0; i <= 1; i++ )
    {
        for (int j = 0; j<= 2; j++)
        {
            printf("%d ", a[i][j]);
        }
    printf("\n");
    }
}

int main()
{
    int matrix[2][3] = {1,2,3,4,5,6};
    int matrix2 [2][3];

    printMatrix (matrix);
    transposeMatrix (matrix, matrix2);
    printMatrix (matrix2);
    return 0;
}

