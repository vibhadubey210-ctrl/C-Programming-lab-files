//1.	Declare different types of pointers (int, float, char) and initialize them with the addresses of variables. Print the values of both the pointers and the variables they point to.
#include <stdio.h>
int main() {
    int a = 10;
    float b = 3.14;
    char c = 'X';
    int *p1 = &a;     
    float *p2 = &b;    
    char *p3 = &c;  
    printf("Values of variables:\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n", c);
    printf("\nValues stored in pointers (addresses):\n");
    printf("p1 = %p\n", p1);
    printf("p2 = %p\n", p2);
    printf("p3 = %p\n", p3);
    printf("\nValues accessed through pointers:\n");
    printf("*p1 = %d\n", *p1);
    printf("*p2 = %.2f\n", *p2);
    printf("*p3 = %c\n", *p3);
    return 0;
}
