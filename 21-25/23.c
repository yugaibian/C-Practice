#include <stdio.h>

int main(void) {
    int n = 0;
    printf("Please enter line number:(odd)");
    scanf("%d",&n);
    int max = (n-1)/2+1;

    for (int m = 1; m <= n; m++) {
        if (m < max) {
        for (int j = 1; j <= max-m; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2*m-1; j++) {
            printf("*");
        }
        printf("\n");

        } else if (m == max) {
            for (int j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");

        } else {
            for (int j = 1; j <= m-max; j++) {
            printf(" ");
        }
        for (int j = 1; j <= n-2*m+2*max; j++) {
            printf("*");
        }
        printf("\n");
        }
    }
}
