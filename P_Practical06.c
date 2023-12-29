#include <stdio.h>
    int main() 
        {
            int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
            int n = sizeof(arr) / sizeof(arr[0]);
            printf("Odd-indexed elements in Your array is : ");

            for (int i = 1; i < n; i += 2) 
                {
                    printf("%d ", arr[i]);
                }
           return 0;
        }
