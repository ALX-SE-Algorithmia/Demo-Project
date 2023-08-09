#!/usr/bin/python3
"""
Module: function_classes.py
"""


""" import statements """
# import math    # For math functions


class MathOperations:
    """
    A Class that contains all explicitly
    defined mathematical functions
    Includes:
        Addition
        Subtraction
        Multiplication
        Division
        Floor Division (Division without remainder)
        Exponent
        nth Root
        Square root
    """
    # No need for the __init__ method

    @staticmethod
    def add(num1, num2):
        """ The Addition Function """
        sum = num1 + num2
        return sum

    @staticmethod
    def subtract(num1, num2):
        """ The Subtraction Function """
        diff = num1 - num2
        return diff

    @staticmethod
    def mult(num1, num2):
        """ The Multiplication Function """
        product = num1 * num2
        return product

    @staticmethod
    def divide(num1, num2):
        """ The Division Function """
        # Handling division by zero
        if num2 == 0:
            print("Error: Division by zero is undefined.")
            return None
        div = num1 / num2
        return div


#     *** Implement these in the future ***
#    =====================================
#
#
#    def floorDiv(self, num1, num2):
#        # Division without whole numbers
#        floor = num1 // num2
#        return floor
#
#    def exponent(self, num1, num2):
#        # The Exponent Function
#        power = num1 ** num2
#        return round(power, 3)
#
#    def root(self, num1, num2):
#        # The Root function
#        nthRoot = num1 ** (1 / num2)
#        return round(nthRoot, 3)
#
#
#
# class TrigOperations:
#    """
#    This class contains mathematical functions for Trigonometry
#    They are all imported from the 'math' module.
#    Answers are returned in three decimal places.
#    Operations performed are:
#        Sine
#        Cosine
#        Tangent
#        Arcsine
#        Arccosine
#        Arctangent
#        Radians to Degrees
#        Degrees to Radians
#    """
#    def __init__(self, name):
#       self.name = name
#
#    def sine(self, num1):
#        # The sine function
#        sine = math.sin(num1)
#        return round(sine, 3)
#
#    def cosine(self, num1):
#        # The cosine function
#        cosine = math.cos(num1)
#        return round(cosine, 3)
#
#    def tangent(self, num1):
#        # The tangent function
#        tangent = math.tan(num1)
#        return round(tangent, 3)
#
#    def asine(self, num1):
#        # The arcsine function
#        arcsine = math.asin(num1)
#        return round(arcsine, 3)
#
#    def acosine(self, num1):
#        # The arccosine function
#        arccosine = math.acos(num1)
#        return round(arccosine, 3)
#
#    def atang(self, num1):
#        # The arccosine function
#        arctangent = math.atan(num1)
#        return round(arctangent, 3)
#
#    def radToDeg(self, num1):
#        # This function converts from radians to degrees
#        res_degrees = math.degrees(num1)
#        return round(res_degrees, 3)
#
#    def degToRad(self, num1):
#        # This function converts from degrees to radians
#        res_radians = math.radians(num1)
#        return round(res_radians, 3)
#
#
#
# class RoundNumOperations:
#
#    This class contains defined rounding-off
#    and absolute functions defined using the 'math' module.
#
#    def __init__(self, name):
#        # The Initialization Class
#        self.name = name
#
#    def ceil(self, num1):
#
#        Ceiling value of num1:
#                The smallest integer greater than or equal to num1
#
#        ceil = math.ceil(num1)
#        return ceil
#
#    def floor(self, num1):
#
#        Floor value of num1:
#                The largest integer less than or equal to num1
#
#        floor = math.floor(num1)
#        return floor
#
#    def truncate(self, num1):
#
#        Truncate the value of num1 to an integer
#
#        trunc = math.trunc(num1)
#        return trunc
#
#    def fabs(self, num1):
#
#        Absolute value (float) of num1
#
#        fabs = math.fabs(num1)
#        return fabs    # There might be need to call the round(fabs, 3) here.
#
#    def factorial(self, num1):
#
#        The factorial of num1
#
#        fact = math.factorial(num1)
#        return round(fact, 2)    # Rounding off to 2 d.p
