#include <stdio.h>
#include <string.h>
#include "user.h"

#define USER_FILE "users.txt"

// Register new user
int registerUser() {
    char username[50], password[50];
    
    printf("\n--- REGISTER NEW USER ---\n");
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    FILE *fp = fopen(USER_FILE, "a");
    if (!fp) {
        printf("Error opening user file!\n");
        return 0;
    }

    fprintf(fp, "%s %s\n", username, password);
    fclose(fp);

    printf("Registration Successful!\n");
    return 1;
}

// Login existing user
int loginUser() {
    char username[50], password[50];
    char fileUser[50], filePass[50];

    printf("\n--- LOGIN ---\n");
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    FILE *fp = fopen(USER_FILE, "r");
    if (!fp) {
        printf("No registered users yet!\n");
        return 0;
    }

    while (fscanf(fp, "%s %s", fileUser, filePass) != EOF) {
        if (strcmp(username, fileUser) == 0 && strcmp(password, filePass) == 0) {
            fclose(fp);
            return 1;
        }
    }

    fclose(fp);
    return 0;
}
