#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define row 5
#define col 50

typedef struct
{
    char date[20];
    float blood;  // Change the data type to float
} BLOOD;

void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, float *blood) {
    char *inputCopy = strdup(input);
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {
        strcpy(date, token);
    }

    token = strtok(NULL, delimiter);
    if (token != NULL) {
        *blood = atof(token);  // Use atof to convert string to float
    }
    free(inputCopy);
}

void organise(BLOOD bloodiron[], float a[5][col], int total) {
    int j = 0;
    for (int i = 0; i < total; i++) {
        if (bloodiron[i].blood >= 11.0 && bloodiron[i].blood < 16.0) {
            a[(int)bloodiron[i].blood - 11][j] = bloodiron[i].blood;
            j++;
        }
    }
}

void printArray(float a[5][col]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < col; j++) {
            printf("%.2f ", a[i][j]);  // Adjust the format specifier for floats
        }
        printf("\n");
    }
}

int main() {
    BLOOD bloodiron[5];
    float organisedblood[5][col] = {0.0};  // Initialize the array with zeros

    FILE *file = fopen("data.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    char record[100];
    int array = 0;

    while (fgets(record, sizeof(record), file) != NULL && array < row) {
        char blood[10];
        tokeniseRecord(record, ",", bloodiron[array].date, &bloodiron[array].blood);
        array++;
    }

    organise(bloodiron, organisedblood, array);
    printArray(organisedblood);

    fclose(file);
    return 0;
}