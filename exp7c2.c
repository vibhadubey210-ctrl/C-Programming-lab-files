//2.	Write a C program to compute the monthly pay of 100 employees using each employee‗s name, basic pay. The DA is computed as 52% of the basic pay. 
#include <stdio.h>
struct emp {
    char name[50];
    float basic_pay;
    float da;
    float gross_sal;
};
int main() {
    struct emp a[100];
    for(int i = 0; i < 3; i++) {
        printf("Enter name of employee %d: ", i+1);
        scanf("%s", a[i].name);
        printf("Enter basic pay of employee %d: ", i+1);
        scanf("%f", &a[i].basic_pay);
        a[i].da = 0.52 * a[i].basic_pay;                  
        a[i].gross_sal = a[i].basic_pay + a[i].da;       
    }
    printf("\n--- Employee Salary Details ---\n");
    for(int i = 0; i < 3; i++) {
        printf("\nEmployee %d\n", i+1);
        printf("Name       : %s\n", a[i].name);
        printf("Basic Pay  : %.2f\n", a[i].basic_pay);
        printf("DA (52%%)   : %.2f\n", a[i].da);
        printf("Gross Pay  : %.2f\n", a[i].gross_sal);
    }
    return 0;
}
