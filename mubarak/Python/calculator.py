""" 
    Basic Calculator -
    perform basic arithmetic operation and print answer

    return 0
"""

from operation import operation

print("Welcome!")
print("Thank you for using Mubarak's Basic Calculator.")
print("This Calculator takes in two numbers and your arithmetic operator.")

print("\n")

print("The arithmetic operators available are:")
print("+ - Addition")
print("- - Subtraction")
print("* - Multiplication")
print("/ - Division")
print("\n")

try:
    operation()
except ImportError:
    print("importError: cannot import file")
finally:
    while True:
        continuity = input("Do you want to continue using the calculator?(1: Yes, 0: No): ")
        if continuity == "1":
            operation()
        else:
            print("Bye!")
            break
