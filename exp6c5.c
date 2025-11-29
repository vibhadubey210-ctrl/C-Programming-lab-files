//5.	Develop a function REVERSE (str) that accepts a string argument. Write a C program that invokes this function to find the reverse of a given string
#include <stdio.h>
#include <string.h>
void REVERSE(char str[]) {
    int i, j;
    char temp;
    int len = strlen(str);
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str); 
    REVERSE(str);
    printf("\nReversed string: %s\n", str);
    return 0;
}
