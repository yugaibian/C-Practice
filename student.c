#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[50];
    float score;
} Student;
Student students[50];

int counter = 0;

void clear_screen() {
#ifdef _WIN32
    system("cls");  // Windows
#else
    system("clear");  // Linux / macOS
#endif
}


void addStudent() {
    printf("Enter ID, Name, and Score for student:");
    scanf("%d %s %f", &students[counter].id, students[counter].name, &students[counter].score);
    counter++;
    printf("Student added successfully.\n");
}

void displayStudents() {
    for (int i = 0; i < counter; i++) {
        printf("ID: %d, Name: %s, Score: %.2f\n", students[i].id, students[i].name, students[i].score);
    }
}


void searchStudentByName() {
    int indicator = 0;
    char name[50];
    printf("Enter Student Name to search: ");
    scanf("%s", name);
    for (int i = 0; i < counter; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("ID: %d, Name: %s, Score: %.2f\n", students[i].id, students[i].name, students[i].score);
            indicator = 1;
        }
    }
    if (indicator == 0) {
        printf("Student with name %s not found.\n", name);
    }
}

void averageScore() {
    float total = 0;
    for (int i = 0; i < counter; i++) {
        total += students[i].score;
    }
    printf("Average Score: %.2f\n", total / (float)counter);
}

int main(void) {
    int input;

    while(1) {
        
        printf("Enter your choice (1-Add, 2-Display, 3-Search, 4-Average, 5-Exit): ");
        scanf("%d", &input);

        switch (input) {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudents();
            break;
        case 3: {
            searchStudentByName();
            break;
        }
        case 4:
            averageScore();
            break;
        case 5:
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
        }

        system ("pause");
        clear_screen();
    }

    
}

  

