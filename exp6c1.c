//1.	Develop a recursive and non-recursive function FACT(num) to find the factorial of a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n) = n * FACT(n-1). Using this function, write a C program to compute the binomial coefficient. Tabulate the results for different values of n and r with suitable messages. 
#include <stdio.h>
long long fact_recursive(int n) {
    if (n == 0) 
        return 1;
    else
        return n * fact_recursive(n - 1);
}
long long fact_nonrecursive(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}
long long binomial(int n, int r) {
    return fact_recursive(n) / (fact_nonrecursive(r) * fact_nonrecursive(n - r));
}
int main() {
    int n, r;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);
    if (r > n) {
        printf("\nInvalid Input! r cannot be greater than n.\n");
        return 0;
    }
    printf("\nUsing recursive and non-recursive factorial functions:\n");
    printf("\nFactorial (recursive) of %d = %lld\n", n, fact_recursive(n));
    printf("Factorial (non-recursive) of %d = %lld\n", n, fact_nonrecursive(n));
    long long result = binomial(n, r);
    printf("\nBinomial Coefficient C(%d, %d) = %lld\n", n, r, result);
    printf("\nTable of C(n, r) for given n:\n");
    printf(" r\tC(n, r)\n");
    printf("-------------------\n");

    for (int i = 0; i <= n; i++)
        printf(" %d\t%lld\n", i, binomial(n, i));

    return 0;
}
