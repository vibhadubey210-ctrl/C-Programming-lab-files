//WAP a C program to convert temp from Celsius to Fahrenheit using the formula :
//F=(C*9/5)+32..
#include <stdio.h>
int main()
{
    float C,F;
    printf("Enter temp in C\n");
    scanf("%f",&C);
    F=(C*9/5)+32;
    printf("Temp in fahrenheit=%f",F);
    return 0;
}