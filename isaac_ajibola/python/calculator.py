#!/usr/bin/python3

import cmd

class CALCULATORCommand(cmd.Cmd):
    """Representation of a calculator
    """

    prompt = "Basic Calculator >> "

    def default(self, arg):
        """Constructor
        """
        cmd = arg.strip()

        if "+" in cmd:
            parts = cmd.split("+")
            try:
                numbers = [float(part.strip()) for part in parts]
                self.do_add(numbers)
            except ValueError:
                print("Invalid input. Usage: number sign number")
        elif "-" in cmd:
            parts = cmd.split("-")
            try:
                numbers = [float(part.strip()) for part in parts]
                self.do_sub(numbers)
            except ValueError:
                print("Invalid input. Usage: number sign number")
        elif "*" in cmd:
            parts = cmd.split("*")
            try:
                numbers = [float(part.strip()) for part in parts]
                self.do_mul(numbers)
            except ValueError:
                print("Invalid input. Usage: number sign number")

        elif "x" in cmd:
            parts = cmd.split("x")
            try:
                numbers = [float(part.strip()) for part in parts]
                self.do_mul(numbers)
            except ValueError:
                print("Invalid input. Usage: number sign number")
        elif "/" in cmd:
            parts = cmd.split("/")
            try:
                numbers = [float(part.strip()) for part in parts]
                self.do_div(numbers)
            except ValueError:
                print("Invalid input. Usage: number sign number")
        else:
            print("Invalid input. Usage: number sign number")

    def do_quit(self, arg):
        """Quit is command to quit the calculator"""
        return True

    def do_EOF(self, arg):
        """EOF is command to exit the program"""
        return True;

    def do_add(self, numbers):
        """Usage: number <+> number
        """
        if len(numbers) < 2:
            print("Enter at least two numbers")
            return
        result = sum(numbers)
        print("Result: ", result)

    def do_sub(self, numbers):
        """Usage: number <-> numbmer
        """

        if (len(numbers) < 2):
            print("Enter at least two numbers")
            return
        result = numbers[0]
        for num in numbers[1:]:
            result -= num
        print("Result: ", result)

    def do_mul(self, numbers):
        """Usage: nummber <*> or <x> number
        """

        if (len(numbers) < 2):
            print("Enter at least two numbers")
            return
        result = numbers[0]
        for num in numbers[1:]:
            result *= num
        print("Result: ", result)

    def do_div(self, numbers):
        """Usage: number </> number
        """

        if (len(numbers) < 2):
            print("Enter at least two numbers")
            return
        result = numbers[0]
        for num in numbers[1:]:
            if num == 0:
                print("Cannot divide by zero")
                return
            result /= num
        print("Result: ", result)


if __name__ == "__main__":
    CALCULATORCommand().cmdloop()
