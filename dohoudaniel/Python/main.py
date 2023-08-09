#!/usr/bin/python3
"""
Module: main.py - The file to be compiled for the calculator.
"""


from perform_calc import perform_calc
from print_message import print_message
from time import sleep
from validate_input import typecast_username
from validate_input import validate_num
from validate_input import validate_operator


# Define the main function
def main():
    """
    The main function
    """
    username = input("Enter your preferred username (max. of 50 chars): ")
    sleep(1.25)
    print()
    typecast_username(username)
    print_message(username)

    # Storing input from the user
    # Validating first number
    num1 = input("Enter your first number: ")
    sleep(1.5)
    print("Validating user input...")
    num1 = validate_num(num1)
    if num1 is None:
        print("Exiting due to invalid input...")
        return

    # Validating second number
    num2 = input("Enter your second number: ")
    sleep(1.5)
    print("Validating user input...")
    num2 = validate_num(num2)
    if num1 is None:
        print("Exiting due to invalid input...")
        return

    # Validating arithmetic operator from user
    operator = input("Enter an arithmetic operator: ")
    sleep(1.5)
    print("Validating user input...")
    if not validate_operator(operator):
        print("Exiting due to invalid operator.")
        return
    # validate_operator(operator)
    sleep(2)

    # Performing the arithmetic operation
    print()
    print("Performing arithmetic operation...")
    sleep(4)
    # perform_calc(num1, num2, operator)
    print("Result: ", perform_calc(num1, num2, operator))
    print()
    sleep(2)
    print()
    print("Thank you, {}, for using this calculator.".format(username))
    sleep(1.5)
    print("Re-run this file to use this calculator again.")
    sleep(1.5)
    print("Bye, {}.".format(username))


# Calling the main function
# If __name__ == "__main__"
if __name__ == "__main__":
    main()


"""

*** Comments ***
================
# import sys
# import math
# from function_classes import MathOperations
# from function_classes import TrigOperations
# from function_classes import RoundNumOperations

# Welcome Message
# Accept username
# Print message.
# Delay message to make it more interesting using time.sleep(number in seconds)
# Define mathematical functions in a class
# Two arguments calculator.
# Answer is rounded up to 2dp, but the exponent
# Root functions are to three d.p
# Trigonometric functions are rounded to 3 d.p and will be implemented later.

"""
