""" 
    Basic Calculator -
    perform basic arithmetic operation and print answer

    return 0
"""

from operation import operation

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
