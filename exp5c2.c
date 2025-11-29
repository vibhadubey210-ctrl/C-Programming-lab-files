//2.	WAP to read a list of integers and store it in a single dimensional array. Write a C program to count and display positive, negative, odd, and even numbers in an array.
#include <stdio.h>
int main() {
    int Pos = 0, Neg = 0, Odd = 0, Even = 0;
    int a[50], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]); 
    }
    for (i = 0; i < n; i++) {
        if (a[i] >= 0)
            Pos++;
        else
            Neg++;
        if (a[i] % 2 == 0)
            Even++;
        else
            Odd++;
    }
    printf("\nPositive numbers: %d", Pos);
    printf("\nNegative numbers: %d", Neg);
    printf("\nEven numbers: %d", Even);
    printf("\nOdd numbers: %d\n", Odd);
    return 0;
}
