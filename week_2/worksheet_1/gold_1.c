#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define row 5
#define col 10

void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *blood) {
    char *inputCopy = strdup(input);
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {
        strcpy(date, token);
    }

    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(blood, token);
    }
    free(inputCopy);
}

typedef struct
{
    char date[20];
    int blood;
} BLOOD;

void organise(int bloodiron[i].blood, int a[5][col], int total)
{
    for (int i = 0; i < int total; i++)
    {
        int j = 0;
        if (bloodiron[i].blood >= 11 && bloodiron.[i] < 12)
        {
            int a[0][j] = bloodiron[i].blood;
            j++;
        } else {

            if (bloodiron[i].blood >= 12 && bloodiron.[i] < 13)
            {
                int a[1][j] = bloodiron[i].blood;
                j++;
            } else {

                if (bloodiron[i].blood >= 13 && bloodiron.[i] < 14)
                {
                    int a[2][j] = bloodiron[i].blood;
                    j++;
                } else {

                    if (bloodiron[i].blood >= 14 && bloodiron.[i] < 15)
                    {
                        int a[3][j] = bloodiron[i].blood;
                        j++;
                    } else {

                        if (bloodiron[i].blood >= 15 && bloodiron.[i] < 16)
                        {
                            int a[4][j] = bloodiron[i].blood;
                            j++;
                        }
                    }
                }
            }
        }
    }
}

void printArray(int a[5][col])
{
    for (int i = 0; i < 5; i++ )
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
    printf("\n");
    }
}

int main ()
{
    int bloodarray[5][];
    int buffer_size = 100;
    char record[buffer_size];
    int array = 0;
    BLOOD bloodiron;
    int organisedblood[5][col]

    FILE *file = fopen ("data.txt", r);
    for (fget(record, buffer_size,file) != NULL)
    {
        tokeniseRecord(record, ",", bloodiron[array].date, blood);
        bloodiron[array].blood = atoi(blood);
        array++;
    }

    organise(bloodiron[array].blood, organisedblood, array);
    printArray(organisedblood);

    fclose (file);
    return 0;
}