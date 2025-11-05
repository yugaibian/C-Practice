#include <stdio.h>

int main(void) {
    int exchange = 0;
    int totalNums = 1;
    int lastNums = 1;

    for (int i = 3; i <= 40; i++) {
        exchange = totalNums;
        totalNums += lastNums;
        lastNums = exchange;
        printf("%d\n", totalNums);
    }

    
}