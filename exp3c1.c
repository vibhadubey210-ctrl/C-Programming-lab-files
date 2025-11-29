//WAP to take check if the triangle is valid or not. If the validity is established, do check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of the triangle as input from a user.
#include <stdio.h>
#include <math.h> 

int main() {
    float a, b, c;
      printf("Enter the first side\n");
      scanf("%d",&a);
      printf("Enter the 2nd side\n");
      scanf("%d",&b);
      printf("Enter the 3rd side\n");
      scanf("%d",&c);
    if (a + b > c && b + c > a && c + a > b) {
        printf("The triangle is valid.\n");
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        }
        else if (a == b || b == c || c == a) {
            printf("The triangle is Isosceles.\n");
        }
        else if (pow(a,2) == pow(b,2) + pow(c,2) ||
                 pow(b,2) == pow(a,2) + pow(c,2) ||
                 pow(c,2) == pow(a,2) + pow(b,2)) {
            printf("The triangle is Right-angled.\n");
        }
        else {
            printf("The triangle is Scalene.\n");
        }
    } 
    else {
        printf("The triangle is NOT valid.\n");
    }

    return 0;
}
