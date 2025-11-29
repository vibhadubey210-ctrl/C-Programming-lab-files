//4.	According to the gregorian calendar, it was Monday on the date 01/01/01. If Any year is input through the keyboard write a program to find out what is the day on 1st January of this year.
#include <stdio.h>
int main() {
    int year, i, totalDays = 0;
    int day;
    char *days[] = {"Monday", "Tuesday", "Wednesday", 
                    "Thursday", "Friday", "Saturday", "Sunday"};
    printf("Enter the year: ");
    scanf("%d", &year);
    for (i = 1; i < year; i++) {
        if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
            totalDays += 366;
        else
            totalDays += 365;
    }
    day = totalDays % 7;
    printf("The day on 1st January %d is: %s\n", year, days[day]);
    return 0;
}
