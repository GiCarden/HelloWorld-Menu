#include <cstdlib>
#include <iostream>
#include <cstdlib>

/**
 * A C++ HelloWorld-Menu without a looping structure, Coded in C++ 11 with CLion, and MinGW-W64.
 */
using namespace std;

void quit();
void message();
void invalid();
void pressEnterToContinue();

int main() {

    int choice;

    printf("\n******************************************************");
    printf("\n******************************************************");
    printf("\n**         Hello and welcome to my menu!            **");
    printf("\n******************************************************");
    printf("\n**                 - 0. To Quit                     **");
    printf("\n**                 - 1. Message                     **");
    printf("\n**                 - 2. UnderConstruction           **");
    printf("\n******************************************************");
    printf("\n******************************************************");
    printf("\n");

    cin >> choice;

    //Menu Switch Statement
    switch (choice) {
        case 0:
            quit();
            break;
        case 1:
            message();
            break;
        default:
            invalid();
            break;
    }
}

void quit() {
    printf("\nQUITTING PROGRAM.....\n");
    exit(0);
}

void message() {
    printf("\n******************************************************");
    printf("\n**                 Hello World!!!                   **");
    printf("\n******************************************************\n");
    pressEnterToContinue();
    main();
}

void invalid() {
    printf("\nInvalid Menu Option.....\n");
    pressEnterToContinue();
    main();
}

void pressEnterToContinue() {
    int c;
    printf("Press ENTER to continue.....\n");
    fflush(stdout);
    fflush(stdin);
    do c = getchar(); while ((c != '\n') && (c != EOF));
}
