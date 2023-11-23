#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void printMatrix(int a[4][5])
{
    for (int i = 0; i < 4; i++ )
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", a[i][j]);
        }
    printf("\n");
    }
}

void fillMatrix(int a[4][5])
{
    srand(time(NULL));
    for (int i = 0; i < 4; i++ )
    {
        for (int j = 0; j < 5; j++)
        {
            a[i][j] = rand() % 26;
        }
    }
}


void sum5Tasks(int a[4][5], int i)
{
    int sum = 0;
    for (int j = 0; j < 5; j++)
    {
        sum = a[i-1][j] + sum;
    }
    printf("Sum of 5 task is %d\n", sum);
}

void average5Tasks(int a[4][5])
{
    int sum = 0;
    int average = 0;
    for (int i = 0; i < 4; i++ )
    {
        for (int j = 0; j < 5; j++)
        {
            sum = a[i][j] + sum;
        }
    }
    average = sum / 5;
    printf("Average of total students is %d\n", average);

}
int main()
{
    int student;
    int matrix[4][5];
    fillMatrix(matrix);
    printf("Which student do you want?\n pick 1 - 5.\n");
    scanf("%d", &student);
    sum5Tasks(matrix,student);
    average5Tasks(matrix);
    printMatrix(matrix);
}   

