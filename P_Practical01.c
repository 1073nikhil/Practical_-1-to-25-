#include <stdio.h>
        float calc_SI(float p, float r, float t) 
            {
                float i;
                i = (p * r * t) / 100;
                return i;
            }
        
        int main() 
            {
                float p, r, t, i;
                printf("Enter principal amount: ");
                scanf("%f", &p);
                printf("Enter rate of interest (ROI): ");
                scanf("%f", &r);
                printf("Enter time  (in years): ");
                scanf("%f", &t);
                i = calc_SI(p, r, t);
                printf("Simple Interest = %f", i);
                return 0;
            }
