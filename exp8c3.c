//3.	Write a function that accepts pointers as parameters. Pass variables by reference using pointers and modify their values within the function
#include <stdio.h>
void modifyValues(int *x, float *y) {
    *x = *x + 10;    
    *y = *y * 2;     
}
int main() {
    int a = 5;
    float b = 3.5;
    printf("Before function call:\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    modifyValues(&a, &b);   
    printf("\nAfter function call:\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    return 0;
}
