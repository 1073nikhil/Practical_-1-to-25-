#include <stdio.h>

int seri (int n);
    void main()
        {
           int n ;
           n=30;
           while(n!=0)
               {
                   printf ("The term is :%d/n",seri(n));
                   n=n-1;
               }
        }
    int seri(int n)
        {
            if (n<2)
                {
                    return n;
                }
            else
                {
                    return seri(n-1)+seri(n-2);
                }
        }
