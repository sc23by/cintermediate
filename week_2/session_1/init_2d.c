#include <stdio.h>

void printArray(int a[][3] ){
  for (size_t i = 0; i <= 2; ++i) {
     for (size_t j = 0; j <= 2; ++j) {
        printf("%d ", a[i][j]);
     }
     printf("\n"); // start new line of output 
     }
}

//first [] is the number of rows next [] is number of columns
int main() {
  int array1[3][3] = {{1, 2,3}, {4,5,6}, {7,8,9}};
  printf("Values in array1 by row are:\n");
  printArray(array1);

  int array2[3][3] = {1, 2, 3, 4, 5, 6, 7, 8};
  printf("Values in array2 by row are:\n");
  printArray(array2);


  int array3[3][3] = {{1, 2,3}, {4 ,5,6}};
  printf("Values in array3 by row are:\n");
  printArray(array3);
  
  return 0;
}