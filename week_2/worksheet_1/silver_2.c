#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void printMatrix(int a[2][3][4])
{
    for (int i = 0; i < 2; i++ )
    {
        printf("Semester %d:\n", i+1);
        for (int j = 0; j < 3; j++)
        {
            printf("Student %d: ", j+1);
            for (int k = 0; k < 4; k++)
            {
                printf("%d ", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

}

void fillMatrix(int a[2][3][4])
{
    srand(time(NULL));
    for (int i = 0; i < 2; i++ )
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                a[i][j][k] = rand() % (100-70) + 70;
            }
        }
    }
}


int main()
{
    int student;
    int matrix[2][3][4];
    fillMatrix(matrix);
    printMatrix(matrix);
}   

