#!/usr/bin/python3
"""
Module: validate_input.py
This file contains functions that validate
input from the user.
"""

from sys import exit
from time import sleep


def typecast_username(username):
    """
    Validates user input for username
    by converting user input to a string
    """
    username = str(username)
    sleep(2)
    return username


def validate_num(num1):
    """
    Validate user input for numbers
    """
    sleep(2)
    try:
        if '.' in num1:
            num1 = int(num1)
        else:
            num1 = int(num1)
        sleep(2)
        print("Number validated.")
        sleep(1.5)
        print()
        sleep(2)
        return num1
    except ValueError:
        print("Error! An invalid number has been entered! (Invalid input)\n")
        sleep(1)
        print("Remember to input a non-decimal number.\nTry again.")
        sleep(1)
        print("Invalid input.")
        exit()  # Exit if the input was not a valid number
        # return None


def validate_operator(operator):
    """
    Validates the arithmetic operator
    entered in by the user
    """
    valid_operators = ['+', '-', '*', '/']
    if operator in valid_operators:
        sleep(2)
        print("Operator validated.")
        sleep(1.25)
        return True
    else:
        print("Invalid operator {} entered!".format(operator))
        sleep(1.25)
        print("Enter a valid operator.")
        sleep(1.75)
        print("The valid operators are: + , - , * , / .")
        sleep(1.75)
        print("Try again.")
        sleep(1.25)
        exit()


"""
** Comments **
==============

    # return num1  # return the validated number


    # if isinstance(num1, int) or isinstance(num1, float):
    #     num1 = int(num1)
    #     print("Number validated.")
    #     sleep(1.5)
    # else:
    #     raise ValueError("Error! An invalid number has been entered!\n"
                    "Remember to input a non-decimal number.\nTry again.")
    #     print("Invalid input.")
    #
    #
    # if isinstance(num1, int):
    #     num1 = int(num1)
    #     print("Number validated.")
    #     sleep(1.5)
    # else:
    #     print("Error! An invalid number has been entered!")
    #     sleep(1.25)
    #     print("Remember to input a non-decimal number.")
    #     sleep(1.25)
    #     print("Try again.")
    #     sleep(1.25)
    #     exit()
    #

"""
