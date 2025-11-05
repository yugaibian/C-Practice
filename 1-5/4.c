#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }
    return 0;
}


int main(void) {
    printf("Please enter your date:\n");
    int year = 0;
    int month = 0;
    int days = 0;
    int monthDays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int totalDays = 0;
    scanf("%d %d %d", &year, &month, &days);
    //Initialize the variable.

    for (int i = 0; i <= month - 2; i++) {
        totalDays += monthDays[i];
    }
    totalDays += days;
    //Add days to totaldays.

    if (isLeapYear(year) && month >= 3) {
        totalDays++;
    }
    //Handle the Leap Year

    printf("Totaldays are %d days!", totalDays);
    //Print out the results.

    return 0;
}