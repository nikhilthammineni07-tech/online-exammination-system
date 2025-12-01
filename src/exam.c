#include <stdio.h>
#include "exam.h"

// Simple 5-question exam
int startExam() {
    int score = 0, ans;

    printf("\n=== EXAM STARTED ===\n");

    printf("\nA) Which language is used for system programming?\n");
    printf("1) Python  2) C  3) HTML  4) CSS\n");
    scanf("%d", &ans);
    if (ans == 2) score++;

    printf("\nB) Which symbol ends a statement in C?\n");
    printf("1) .  2) ;  3) :  4) ,\n");
    scanf("%d", &ans);
    if (ans == 2) score++;

    printf("\nC) Which function prints output in C?\n");
    printf("1) printf()  2) echo  3) print  4) cout\n");
    scanf("%d", &ans);
    if (ans == 1) score++;

    printf("\nD) Files of C code end with?\n");
    printf("1) .exe  2) .bin  3) .html  4) .c\n");
    scanf("%d", &ans);
    if (ans == 4) score++;

    printf("\nE) Father of C language?\n");
    printf("1) Stroustrup  2) Gosling  3) Dennis Ritchie  4) Musk\n");
    scanf("%d", &ans);
    if (ans == 3) score++;

    return score;
}
