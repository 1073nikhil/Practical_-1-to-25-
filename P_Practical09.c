
#include <stdio.h>

#include <limits.h>

    int main() 
        {
            long arr[] = {10, 20, 30, 40, 50};
            int size = sizeof(arr) / sizeof(arr[0]);
            long sum = 0;
            long max = LONG_MIN;
            long min = LONG_MAX;
            for (int i = 0; i < size; i++) 
                {
                  sum += arr[i];
                  if (arr[i] > max) 
                      {
                          max = arr[i];
                      }
                  if (arr[i] < min) 
                      {
                          min = arr[i];
                      }
                }

            double average = (double)sum / size;        
            printf("Average is: %.2f\n", average);
            printf("Max is: %ld\n", max);
            printf("Min is : %ld\n", min);        
            return 0;
        }
