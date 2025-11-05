#include <stdio.h>

int main(void) {
    for (int i = 1; i < 85; i++) {
        if (i % 2 == 0) {
            for (int j = 1; j < 85; j++) {
                if (j % 2 == 0 && i*j == 168 && i < j) {
                    int n = (i+j)/2;
                    int result = n*n-268;
                    printf("%d\n",result);
                }
            }
        }
    }
}