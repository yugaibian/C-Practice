#include <stdio.h>

int main(void) {
    printf("Enter number of people: ");
    int amountOfPeople = 0;
    int kickAmount = 0;
    int n = 0;
    scanf("%d", &amountOfPeople);
    int people[amountOfPeople];
    for (int i = 0; i < amountOfPeople; i++) {
        people[i] = i + 1;
    }
    //Create an array of people


    while (kickAmount < amountOfPeople - 1) { //While there is more than one person left
        for (int i = 1; i <= amountOfPeople; i++) {

            n++;

            if (kickAmount >= amountOfPeople - 1) {
                break;
            }

            while (people[i - 1] == 0) {

                if (i < amountOfPeople) {
                    i++;
                }

                if (i == amountOfPeople && people[i - 1] == 0) {
                    i = 1;
                }

            }
            //The handle way to skip already kicked people
            
            

            if (n == 3) {
                people[i - 1] = 0;
                kickAmount++;
                n = 0;
            }

            if (i == amountOfPeople && people[i - 1] == 0) {
                i = 0;
            }

        }
    }



    for (int i = 0; i < amountOfPeople; i++) {
        if (people[i] != 0) {
            printf("The winner is person number is %d\n", people[i]);
        }
    }


    return 0;
}