print("\nSelect an operation to perform either 1, 2, 3 or 4:")
print("1. ADD")
print("2. SUBTRACT")
print("3. MULTIPLY")
print("4. DIVIDE")
print()

operation = input()
if operation == "1":
    num1 = input("Enter first number: ")
    num2 = input("Enter second number: ")
    total = int(num1) + int(num2)
    print("The sum of {} and {} is {}".format(num1, num2, total))
elif operation == "2":
    num1 = input("Enter first number: ")
    num2 = input("Enter second number: ")
    sub = int(num1) - int(num2)
    print("The difference of {} and {} is {}".format(num1, num2, sub))
elif operation == "3":
    num1 = input("Enter first number: ")
    num2 = input("Enter second number: ")
    product = int(num1) * int(num2)
    print("The product of {} and {} is {}".format(num1, num2, product))
elif operation == "4":
    num1 = input("Enter first number: ")
    num2 = input("Enter second number: ")
    total = int(num1) / int(num2)
    print("The division of {} and {} is {}".format(num1, num2, total))

else:
    print("Ivalid Entry")

