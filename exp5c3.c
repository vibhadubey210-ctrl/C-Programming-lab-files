//3.	WAP to read a list of integers and store it in a single dimensional array. Write a C program to find the frequency of a particular number in a list of integers.
#include <stdio.h>
int main() {
    int a[100], n, i, num, count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the number whose frequency you want to find: ");
    scanf("%d", &num);
    for (i = 0; i < n; i++) {
        if (a[i] == num)
            count++;
    }
    printf("The frequency of %d is: %d\n", num, count);
    return 0;
}
