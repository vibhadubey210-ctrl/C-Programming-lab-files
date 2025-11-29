//2.	Perform pointer arithmetic (increment and decrement) on pointers of different data types. Observe how the memory addresses change and the effects on data access.
#include <stdio.h>
int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';
    int *ip = &a;
    float *fp = &b;
    char *cp = &c;
    printf("Original addresses:\n");
    printf("ip = %p\n", ip);
    printf("fp = %p\n", fp);
    printf("cp = %p\n", cp);
    ip++;   
    fp++;   
    cp++;   
    printf("\nAfter increment:\n");
    printf("ip = %p\n", ip);
    printf("fp = %p\n", fp);
    printf("cp = %p\n", cp);

    return 0;
}
