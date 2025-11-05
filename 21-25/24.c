#include <stdio.h>

int main(void) {
    float molecule = 2;
    float denominator = 1;
    float lastDenominator = 1;
    float result = 0;
    float temp = 0;

    for (int i = 1; i <= 20; i++) {
        result += molecule / denominator;
        
        if (denominator == 1) {
            molecule += denominator;
            denominator++;
        } else {
            molecule += denominator;
            temp = lastDenominator;
            lastDenominator = denominator;
            denominator += temp;
        }
    }

    printf("%f",result);

    return 0;
}
