//4.	Create a union containing 6 strings: name, home_address, hostel_address, city, state and zip. Write a C program to display your present address. 
#include <stdio.h>

struct address {
    char name[30];
    char home_address[50];
    char hostel_address[50];
    char city[30];
    char state[30];
    char zip[10];
};

int main() {

    struct address a = {
        "Vibha Dubey",
        "Belwai",
        "Bidholi, Dehradun",
        "Sultanpur",
        "Uttar Pradesh",
        "228171"
    };

    printf("Present Address:\n");
    printf("%s\n", a.home_address);
    printf("%s\n", a.city);
    printf("%s\n", a.state);
    printf("%s\n", a.zip);

    return 0;
}
 