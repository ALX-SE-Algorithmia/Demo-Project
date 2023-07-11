#include "main.h"

/**
 * calc - simple calculator
 *
 * Return: 0 on success, 1 on error
 */
int calc(void)
{
    int opt, num_1, num_2, tries = 0, res_1, count;
    double num_3, num_4, res_2;
    char operator, name[100];

    printf("Please enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Hello %s, I am a simple implementation of a calculator using C\n", name);
    printf("I can perform basic calculations like\n"
           "1. addition\n"
           "2. subtraction\n"
           "3. multiplication\n"
           "4. division\n"
           "5. modulo\n"
           "I can also perform special calculations like\n"
           "1. square root\n"
           "2. cosine\n"
           "3. sine\n"
           "4. exponentiation\n"
           "5. logarithm\n");

    while (1)
    {
        printf("Please enter 1 for basic calculations or 2 for special calculations, or 3 to exit: ");
        scanf("%d", &opt);

        if (opt == 1)
        {
            printf("Please make a calculation in the format 'num1 operator num2' (e.g., 2 + 2): ");
            scanf("%d %c %d", &num_1, &operator, &num_2);

            if (operator == '+')
            {
                res_1 = add(num_1, num_2);
                printf("The sum of %d & %d = %d\n", num_1, num_2, res_1);
            }
            else if (operator == '-')
            {
                res_1 = sub(num_1, num_2);
                printf("The difference of %d & %d = %d\n", num_1, num_2, res_1);
            }
            else if (operator == '*')
            {
                res_1 = mul(num_1, num_2);
                printf("The product of %d & %d = %d\n", num_1, num_2, res_1);
            }
            else if (operator == '/')
            {
                if (num_2 == 0)
                {
                    printf("Error: division by 0 is not valid\n");
                    continue;
                }
                res_1 = division(num_1, num_2);
                printf("The quotient of %d / %d = %d\n", num_1, num_2, res_1);
            }
            else if (operator == '%')
            {
                if (num_2 == 0)
                {
                    printf("Error: division by 0 is not valid\n");
                    continue;
                }
                res_1 = mod(num_1, num_2);
                printf("The remainder of %d / %d = %d\n", num_1, num_2, res_1);
            }
            else
            {
                printf("Invalid operator. Please try again.\n");
                continue;
            }
        }
        else if (opt == 2)
        {
            printf("Please enter a number: ");
            scanf("%lf", &num_3);

            if (num_3 < 0)
            {
                printf("Error: the input value must be greater than or equal to 0\n");
                continue;
            }

            printf("Please select the special calculation:\n"
                   "1. Square root\n"
                   "2. Cosine\n"
                   "3. Sine\n"
                   "4. Exponentiation\n"
                   "5. Logarithm\n"
                   "Enter your choice: ");
            scanf("%d", &opt);

            if (opt == 1)
            {
                res_2 = square(num_3);
                printf("The square root of %.2lf is %.2lf\n", num_3, res_2);
            }
            else if (opt == 2)
            {
                res_2 = cosine(num_3);
                printf("The cosine of %.2lf is %.2lf\n", num_3, res_2);
            }
            else if (opt == 3)
            {
                res_2 = sine(num_3);
                printf("The sine of %.2lf is %.2lf\n", num_3, res_2);
            }
            else if (opt == 4)
            {
                printf("Please enter the exponent: ");
                scanf("%lf", &num_4);
                res_2 = expon(num_3, num_4);
                printf("%.2lf raised to the power of %.2lf is %.2lf\n", num_3, num_4, res_2);
            }
            else if (opt == 5)
            {
                res_2 = logarithm(num_3);
                printf("The logarithm of %.2lf is %.2lf\n", num_3, res_2);
            }
            else
            {
                printf("Invalid choice. Please try again.\n");
                continue;
            }
        }
        else if (opt == 3)
        {
            printf("Exiting the calculator");
	    usleep(500000);
	    fflush(stdout);
	    for (count = 0; count < 3; count++)
	    {
		    usleep(500000);
		    printf(" .");
		    fflush(stdout);
		    usleep(400000);
	    }
	    fflush(stdout);
	    usleep(700000);
            system("clear");
            break;
        }
        else
        {
            printf("Invalid selection. Please try again.\n");
            tries++;
            if (tries == 3)
            {
              printf("Exceeded trial period. Exiting thecalculator");

		for (count = 0; count < 3; count++)
		{
			usleep(500000);
			printf(" .");
			fflush(stdout);
			sleep(500000);
		}
                system("clear");
                break;
            }
        }
    }

    return (0);
}

int main(void):
{
    calc();
    return (0);
}