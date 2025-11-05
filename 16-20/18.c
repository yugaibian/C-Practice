#include <stdio.h>

int powNum(int base, int index) {
    int total = 1;

    if (index == 0) {
        return 1;
    } else {
        for (int i = 1; i <= index; i++) {
        total *= base;
        }
        return total; 
    }
    
}


int main(void) {
    int num = 0, count = 0, totalSum = 0;
    scanf("%d %d", &num, &count);

    for (int i = 1; i <= count; i++) {
        for (int j = i-1; j >= 0; j--) {
            totalSum += powNum(10,j) * num;
        }
    }
    printf("%d\n",totalSum);
}