""" 
    operation function for the Calculator
    handle only four basic operations 
    takes in two numbers from the user (standard input)
    takes in an arithmetic operator for the four math operations
    '+'for Addition, '-' for subtraction, '/' for division, and '*' for multiplication
    performs an arithmetic operation based on the arithmetic operator
    prints the result to the screen
    
    if wrong arithmetic operator other than the one above is received...
    or does not receive correct numbers, will print an error to the screen
    
    return 0
"""

def operation():
    num1 = int(input("Enter your first number: "))
    num2 = int(input("Enter your second number: "))
    operand = input("Enter your operator (eg: +, -, *, or /): ")

    if operand == "+":
        print(f"The result of {num1} {operand} {num2} = {num1 + num2}")
    elif operand == "-":
        print(f"The result of {num1} {operand} {num2} = {num1 / num2}")
    elif operand == "*":
        print(f"The result of {num1} {operand} {num2} = {num1 * num2}")
    elif operand == "/":
        try:
            print(f"The result of {num1} {operand} {num2} = {num1 / num2}")
        except ZeroDivisionError:
            print("Error! Division by zero is not allowed.")
    else:
        print("Error! Invalid operator. Operator must be either +, -, * or /.")
