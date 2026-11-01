#include <stdio.h>

void greet(char name[]) {
    printf("Welcome, %s! Glad to have you here.\n", name);
}

int main() {
    greet("Tarini");

    return 0;
}