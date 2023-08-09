#!/usr/bin/python3
"""
Module: print_message.py
This module prints the message to the user.
"""

from time import sleep    # To delay standard output


def print_message(username):
    """
    This function prints the welcome message
    """
    print("Welcome, {}.".format(username))
    sleep(1.5)
    print("Thank you for choosing Dohou's basic calculator.\n")
    sleep(2)
    print("This is a basic calculator built in Python.\n")
    sleep(1.75)
    print("It takes in two non-decimal numbers and an arithmetic operator..")
    sleep(2)
    print("It handles 4 basic operations:")
    sleep(2)
    print("Addition: +")
    sleep(1.775)
    print("Subtraction: -")
    sleep(1.775)
    print("Multiplication: *")
    sleep(1.775)
    print("Division: /")
    sleep(2.25)
    print()
    sleep(2)
    print("Remember to enter two non-decimal numbers and a valid arithmetic" /
          "operator.")
    sleep(1)
    for i in range(6):
        print(".", end="")
        sleep(1.5)
    print()
    print()
