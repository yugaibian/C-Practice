#include <stdio.h>

int main(void) {
    int a,b,r,m,n,multiple;
    printf("Please enter your numbers: (a > b)");
    scanf("%d %d",&a,&b);
    multiple = a * b;
    r = a % b;

    if (r == 0) {
        printf("The max common factor is %d !", b);
        printf("The min common multiple is %d !", a);
    } else {
        while (r != 0) {
            a = b;
            b = r;
            r = a % b;
        }
        printf("The max common factor is %d !", b);
        printf("The min common multiple is %d !", multiple / b);
    }

    return 0;
}