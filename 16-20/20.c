#include <stdio.h>

int main(void) {
    double height = 100, distance = 0;

    for (int i = 1; i <= 10; i++) {
        distance += 2*height;
        height /= 2;
    }
    distance -= 100;

    printf("Realheight: %lf Distance: %lf", height, distance);
}