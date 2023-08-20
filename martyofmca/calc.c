#include "main.h"

int main(void)
{
  
        int num_one = 0;
        int num_two = 0;
        int result = 0;
        char opcode;
        do {
                start_screen();
                printf("\n");          
                opcode = get_opcode();
                get_operands(&num_one, &num_two);
                result = perform_operation(num_one, num_two, opcode);
                printf("%d %c %d = %d\n", num_one, opcode, num_two, result);
        } while (result == FAIL || result == INVALID_OPCODE);
        
        return (EXIT_SUCCESS);
}

void start_screen()
{
        printf("Welcomes to this Basic Calculator\n\n");
        printf("+ equals sum\n");
        printf("- equals difference\n");
        printf("* equals product\n");
        printf("/ equals quotient\n");
}

void get_operands(int *num_one, int *num_two)
{
        printf("First number: ");
        scanf("%d", num_one);
        printf("Second number: ");
        scanf("%d", num_two);
}

char get_opcode()
{
        char opcode;
        
        printf("Enter an operation (+, -, *, /): ");
        scanf("%c", &opcode);
      
        return (opcode);
}

int perform_operation(int num_one, int num_two, char opcode)
{
        int result = 0;
      
        switch(opcode)
          {
                  case '+':
                          result = num_one + num_two;
                        break;
                  case '-':
                          result = num_one - num_two;
                        break;
                  case '*':
                          result = num_one * num_two;
                        break;
                  case '/':
                          if (check_dividend(num_two) == FAIL)
                          {
                                  return (FAIL);
                          }
                          result = num_one / num_two;
                        break;
                default:
                        return (INVALID_OPCODE);
            
          }
        return (result);
}
      
int check_dividend(int num_two)
{
        if (num_two == 0)
        {
                return (FAIL);
        }
  
        return (PASS);
}
