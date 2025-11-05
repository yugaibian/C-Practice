#include <stdio.h>

int main(void) {
    int num = 12300;
    int numInput;
    printf("Please enter your guess:");
    scanf("%d", &numInput);

    while(1) {
        if(numInput > num) {
            printf("Too high!\n");
            printf("Please enter your guess again:");
        } else if(numInput < num) {
            printf("Too low!\n");
            printf("Please enter your guess again:");
        } else {
            printf("Congratulations! You guessed it right.\n");
            break;
        }
        scanf("%d", &numInput);
    }

    return 0;
}
