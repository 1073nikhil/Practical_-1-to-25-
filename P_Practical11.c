
#include <stdio.h>
#include <stdlib.h>
    void transposeMatrix(int rows, int cols, int** matrix, int** result) 
        {
            for (int i = 0; i < rows; ++i)
               {
                   for (int j = 0; j < cols; ++j)
                       {
                            result[j][i] = matrix[i][j];
                      }
              }
        }
    
    void displayMatrix(int rows, int cols, int** matrix) 

        {
            for (int i = 0; i < rows; ++i) 
                {
                  	for (int j = 0; j < cols; ++j) 
                        {
                        		printf("%d ", matrix[i][j]);
                        }
                    printf("\n");
                }
        }
    void main() 
        {
            int rows = 3;
            int cols = 4;
            int** originalMatrix = (int**)malloc(rows * sizeof(int*));


            for (int i = 0; i < rows; ++i) 
                {
                    originalMatrix[i] = (int*)malloc(cols * sizeof(int));
                }


            int count = 1;
            for (int i = 0; i < rows; ++i)
                {
            	      for (int j = 0; j < cols; ++j) 
                        {
                        	  originalMatrix[i][j] = count++;
                        }
                }
        }
