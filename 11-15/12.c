#include <stdio.h>

int main(void) {
    for (int i = 101; i <= 200; i++) {
       for (int j = 2; j <= i / 2; j++) {
           if (i % j == 0) {
               break;
           }
           if (j == i / 2) {
               printf("%d ", i);
           }
       }
    }
}   
