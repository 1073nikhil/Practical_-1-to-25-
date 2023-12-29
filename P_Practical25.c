#include <stdio.h>

    int sumOfDiagonal(int matrix[10][10], int size)
        {
            int sum = 0;
            for (int i = 0; i < size; i++)
                {
                    sum += matrix[i][i]; 
                }
            return sum;
        }
    
      int main() 
          {
              int matrix[10][10];
              int size;
              printf("Enter size of the square matrix: ");
              scanf("%d", &size);
              printf("Enter elements for  square matrix:\n");
              for (int i = 0; i < size; i++) 
                  {
                      for (int j = 0; j < size; j++) 
                          {
                          printf("Enter element at The position (%d, %d): ", i + 1, j + 1);
                          scanf("%d", &matrix[i][j]);
                          }
                  }
            printf("\n The entered matrix is:\n");
            for (int i = 0; i < size; i++)
                {
                    for (int j = 0; j < size; j++) 
                        {
                            printf("%d\t", matrix[i][j]);
                        }
                    printf("\n");
              }
            int diagonalSum = sumOfDiagonal(matrix, size);
            printf("\n sum of diagonal elements is: %d\n", diagonalSum);
            return 0;
        }
