#include <stdio.h>

int main(void) {

    int hundreds, tens, units;

    for (int i = 101; i <= 999; i++) {
        hundreds = i / 100;
        tens = (i / 10) % 10;
        units = i % 10;
        if (hundreds*hundreds*hundreds + tens*tens*tens + units*units*units == i) {
            printf("%d ", i);
        }
    }
}