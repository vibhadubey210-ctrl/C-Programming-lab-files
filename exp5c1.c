//WAP to read a list of integers and store it in a single dimensional array. Write a C program to print the second largest integer in a list of integers
#include <stdio.h>
int main() {
    int n, i, j, temp;
    int arr[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
   }
   }
    }
    // After sorting, the second largest is at position n-2
    printf("\nThe second largest number is: %d\n", arr[n - 2]);
    return 0;
}
