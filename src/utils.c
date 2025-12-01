#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

// Simple screen clear function
void clearScreen() {
    // Works on Windows + Linux
    system("cls || clear");
}
