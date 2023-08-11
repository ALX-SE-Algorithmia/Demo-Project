#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <windows.h>
#include "main.h"
void artDisplay(void) {
    // Clear the screen
    system("cls");

    // ASCII art for "calc"
    const char* calc[] = {
        "\n\n"
        "                    __   __   |    __ \n"
        "                   /    /  |  |   /    \n"
        "                   |___/|_/|_/|__/|___/\n\n\n"
    };

    // Display "calc"
    for (int i = 0; i < sizeof(calc) / sizeof(calc[0]); i++) {
        printf("%s", calc[i]);
    }

    // Longer beep
    Beep(1000, 800); // Beep at 1000Hz for 800ms
}
void printIntro(void) {
    // continue initial prompts and demo
    printf("To carry out an arithmetic operation, ");
    printf("type in two numbers and any of the following operators.");
    sleep(3);
    printf("\n  mutiplication  '*' \n  addition  '+' \n  subtraction  '-' \n  division  '/'");
    sleep(5);
    printf("\n\nHere's a quick example;");
    usleep(500000);
    printf("\n2*4");
    sleep(2);
    printf("\n\nIn the example given above, the numbers are '2' and '4' \nThe operator used was '*'\n");
}