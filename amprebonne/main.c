#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    float operand1, operand2;
    char operator;

    artDisplay(); // Display ASCII art
    printIntro(); // Display introductory messages

    int result = checker(&operand1, &operand2, &operator);

    if (result == 0) {
        int mathResult = mathsFunction(operand1, operand2, operator);
        if (mathResult != 0) {
            printf("Error in math calculation.\n");
        }
    } else {
        printf("Error in input.\n");
    }

    return 0;
}
