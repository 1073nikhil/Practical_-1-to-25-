#include <stdio.h>
int main()
        {
            int arr[]={1, 2, 3, 4, 5};
            int *ptr=arr; printf("Original value at *ptr: %d\n", *ptr);
            ptr++;
            printf("After incrementing, The value at *ptr: %d\n", *ptr);
            ptr--;
            printf("After decrementing,  The value at *ptr: %d\n", *ptr);
            ptr = arr; 
            printf("Original value at The *ptr: %d\n", *ptr);
            ptr=ptr+2;
            printf("After adding 2, value at The *ptr: %d\n", *ptr);
            ptr=ptr-1;
            printf("After subtracting 1, value at The *ptr: %d\n", *ptr);
            int*ptr2=arr+3;
            printf("Value at *ptr2: %d\n", *ptr2);
            printf("Difference between The ptr and ptr2: %ld\n", ptr2 - ptr);
            return 0;
        }
