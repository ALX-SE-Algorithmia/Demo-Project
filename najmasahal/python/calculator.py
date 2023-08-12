# This will loop everytime until user exits
while True:
    # Ask user to enter Number 1 or type exit
    number_1 = input("Enter first number or type exit:  ")
    if number_1 == "exit" or number_1 == "Exit":
        break
    # Change Number to float 
    number_1 = float(number_1)
    
    # Ask user to enter operator + - * /
    operator = input("Enter operator: ( + - * / ) ")

    # Ask user to enter Number 2 
    number_2 = float(input("Enter second number: "))

    match operator:
        case "+":
            result = number_1 + number_2
            print(number_1, "+", number_2, "=", result)
            
        case "-":
            result = number_1 - number_2
            print(number_1, "-", number_2, "=", result)
            
        case "*":
            result = number_1 * number_2
            print(number_1, "*", number_2, "=", result)

        case "/":
            # check if the divisor is not equal to zero
            if number_2 != 0:
                result = number_1 / number_2
                print(number_1, "/", number_2, "=", result)
            else:
                print("The divisor shouldn't greater than 0.")
        case other:
            print("Please enter only + - * /")
