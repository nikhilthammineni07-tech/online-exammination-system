#include <stdio.h>
#include "user.h"
#include "exam.h"
#include "utils.h"

int main() {
    int choice;
// SELECTING THE CHOICE
    while (1) {
        printf("\n===== ONLINE EXAMINATION SYSTEM =====\n");
        printf("1. Register\n");
        printf("2. Login & Start Exam\n");
        printf("3. Clear Screen\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
// NEW USER
        if (choice == 1) {
            registerUser();
        }
        else if (choice == 2) {
            if (loginUser()) {
                printf("\nLogin Successful!\n");
                int score = startExam();
                printf("\nYour Score = %d / 5\n", score);
            } else {
                printf("Invalid username or password!\n");
            }
        }
        else if (choice == 3) {
            clearScreen();
        }
        else if (choice == 4) {
            printf("Exiting program...\n");
            break;
        }
        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
