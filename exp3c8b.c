//5.	Ramanujan Number is the smallest number that can be expressed as the sum of two cubes in two different ways. WAP to print all such numbers up to a reasonable limit.
        #include <stdio.h>
int main() {
    int L, a, b, c, d;
    printf("Enter the limit L: ");
    scanf("%d", &L);
    printf("Ramanujan numbers upto %d are:\n", L);
    for (int num = 1; num <= L; num++) {
        int count = 0;
        for (a = 1; a * a * a < num; a++) {
            for (b = a + 1; b * b * b < num; b++) {
                if (a*a*a + b*b*b == num)
                    count++;
            }
        }
        if (count == 2)
            printf("%d ", num);
    }
    return 0;
}

