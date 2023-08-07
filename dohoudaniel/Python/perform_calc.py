#!/usr/bin/python3
"""
Module: perform_calc
This module performs the arithmetic operations
"""

from function_classes import *
from time import sleep


def perform_calc(num1, num2, operator):
    """
    Performs the arithmetic calculations
    """
    if operator == '+':
        return MathOperations.add(num1, num2)
    elif operator == '-':
        return MathOperations.subtract(num1, num2)
    elif operator == '*':
        return MathOperations.mult(num1, num2)
    elif operator == '/':
        return MathOperations.divide(num1, num2)
    else:
        print("Invalid arithmetic operation!!")
        sleep(2)
        print("Try again!")
        sleep(2)
        return None
        # exit()
        # pass
