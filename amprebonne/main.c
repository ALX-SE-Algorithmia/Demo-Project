#include "main.h" //includes function prototypes in main.h file
#include <stdlib.h> //includes standard library functions
#include <stdio.h> //includes functions for standard IO
#include <string.h> //includes string functions
#include <unistd.h> //includes functions for sleep
#include <windows.h>
int main() {
    float operand1, operand2;
    char operator[2];

    int result = checker(&operand1, &operand2, operator);

    if (result == 0) {
        int mathResult = mathsFunction(operand1, operand2, operator[0]);
        if (mathResult != 0) {
            printf("Error in math calculation.\n");
        }
    } else {
        printf("Error in input.\n");
    }

    return 0;
}