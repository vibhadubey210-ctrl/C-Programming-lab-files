//2.	Write a program to define a function in directives.
#include <stdio.h>
#define SQUARE(x) ((x) * (x))   
#define ADD(a, b) ((a) + (b))   
int main() {
    int num = 5;
    int a = 10, b = 20;

    printf("Square of %d = %d\n", num, SQUARE(num));
    printf("Addition of %d and %d = %d\n", a, b, ADD(a, b));

    return 0;
}
