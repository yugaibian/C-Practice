#include <stdio.h>

int main(void) {
    int peach = 1;

    for (int i = 1; i <= 9; i++) {
        peach = (peach+1) * 2;
    }

    printf("%d",peach);
    return 0;
} 