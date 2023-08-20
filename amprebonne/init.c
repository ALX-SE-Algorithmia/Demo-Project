#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

void artDisplay(void) {
    system("clear"); // Clear screen in a cross-platform way

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

    // Sleep to allow the user to see the art
    usleep(1000000);
}

void printIntro(void) {
    // Continue initial prompts and demo
    printf("To carry out an arithmetic operation, ");
    printf("type in two numbers and any of the following operators.\n");
    sleep(2);
    printf("  multiplication  '*'\n");
    printf("  addition       '+'\n");
    printf("  subtraction    '-'\n");
    printf("  division       '/'\n");
    sleep(3);
    printf("\nHere's a quick example:\n");
    usleep(500000);
    printf("2*4\n");
    sleep(2);
    printf("\nIn the example given above, the numbers are '2' and '4'.\n");
    printf("The operator used was '*'\n");
}
