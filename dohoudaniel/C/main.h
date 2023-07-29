#ifndef MAIN_H
#define MAIN_H

double add(int num1, int num2);
double subtract(int num1, int num2);
double divide(int num1, int num2);
double mult(int num1, int num2);
int isValidOperator(char operator);
double print(double result);
double performCalculation(double num1, double num2, char operator);
void storeUsername(char *username, int maxLength);
void printIntroMessage(void);
void exitMessage(void);

#endif
