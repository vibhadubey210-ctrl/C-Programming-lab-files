//1.	Write a program to define some constant variable in preprocessor.
#include <stdio.h>
#define PI 3.14
#define MAX 100
#define COUNTRY "India"

int main() {
    printf("Value of PI = %.2f\n", PI);
    printf("Maximum Limit = %d\n", MAX);
    printf("Country = %s\n", COUNTRY);

    return 0;
}
