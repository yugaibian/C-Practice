#include <stdio.h>

int main() {
    double profit;
    printf("Please enter your profit:");
    scanf("%lf", &profit);

    if (profit <= 10) {
        printf("%lf", profit * 0.1);
    } else if (profit <= 20) {
        printf("%lf",(10 * 0.1 + (profit - 10) * 0.075));
    } else if (profit <= 40) {
        printf("%lf",(10 * 0.1 + 10 * 0.075 + (profit - 20) * 0.05));
    } else if (profit <= 60) {
        printf("%lf",(10 * 0.1 + 10 * 0.075 + 20 * 0.05 + (profit - 40) * 0.03));
    } else if (profit <= 100) {
        printf("%lf",(10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + (profit - 60) * 0.015));
    } else {
        printf("%lf",(10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + 40 * 0.015 + (profit - 100) * 0.01));
    }
    
    return 0;
}