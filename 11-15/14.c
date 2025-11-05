#include <stdio.h>

int main(void) {
    int num = 0;
    printf("Please enter your number:");
    scanf("%d",&num);
    printf("%d = ",num);
    int primeIndicator = 1;

    for (int i = 2; i <= num; i++) {
        if (i == num && primeIndicator) {
            printf("This is a prime number!");
        } else {
            while (num % i == 0) {
                if (i == num) {
                    printf("%d", num);
                    return 0;
                } else {
                    printf("%d * ",i);
                    num /= i;
                    primeIndicator = 0;
                }
                
            }
        }
        
    }
}