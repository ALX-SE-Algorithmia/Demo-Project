#include <stdio.h>
#define cal 4

/*Command line calculator using function pointer that prompt the user to select an operation and enter two number to execute the operation on.*/

/*Declaration of the functions*/
float sum(float n1, float n2) {return (n1 + n2);}
float multi(float n1, float n2) {return (n1 * n2);}
float div(float n1, float n2) {return (n1 / n2);}
float sub(float n1, float n2) {return (n1 - n2);}

 int main()
{
        /*Pointer to an array of function pointers. The array contain pointers to the four functions that were declared earlier*/
	float (*ptr_function[cal]) (float, float) = {sum, multi, div, sub};
        int select;
        float n1, n2;

	/* prompts the user to select an operation*/
         printf("Select operation : 0 for sum, 1 for multiply, 2 for division, 3 for subtraction\n");
         scanf("%d", &select);

	 /*prompts the user to enter two numbers*/
         printf("Enter 2 numbers, one at a time: \n");
         scanf("%f %f", &n1, &n2);

	 /*Print the result of the operation*/
         printf("The result is : %f\n", ptr_function[select] (n1, n2));
         return 0;
}
