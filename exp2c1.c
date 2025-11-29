//WAP a C program to calculate the area and perimeter of a ractangle based on its length and width..
#include <stdio.h>
int main()
{
    float length,width ,area, perimeter;
    printf("Enter the length of the rectangle:\n");
    scanf("%f",&length);
    printf("Enter the width of the ractangle:\n");
    scanf("%f",&width);
    area= length + width;
    perimeter=2 * (length + width);
    printf("Area of ractangle=%.2f",area);
    printf("Perimeter of ractangle=%.2f",perimeter);
    return 0;
}

