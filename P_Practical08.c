#include <stdio.h>
    int sum(int a[], int n) 
        {
            int s = 0;
            for (int i = 0; i < n; i++) 
                {
                    s += a[i];
                }
            return s;
        }
    
    int main() 
        {
            int arr[] = {10, 20, 30, 40, 50};
            int size = sizeof(arr) / sizeof(arr[0]);
            int total = sum(arr, size);
            printf("Sum ofelements in Your array is : %d", total);
            return 0;
        }
