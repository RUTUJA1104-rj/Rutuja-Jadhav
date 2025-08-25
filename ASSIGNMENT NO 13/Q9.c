//Complex (real,complex)
#include<stdio.h>
struct Complex 
{
    float real;      
    float imag;      
};

int main()
 {
    struct Complex c1, c2;

    c1.real = 3.5;
    c1.imag = 2.5;
    c2.real = 1.5;
    c2.imag = 4.5;
    printf("First Complex = real %.2f  imag %f\n", c1.real, c1.imag);
    printf("Second Complex = real %.2f  imag %f\n", c2.real, c2.imag);
    
}