# __Calculator written in C__

# Calculator

This is a simple implementation of a calculator using C. It provides basic and special mathematical calculations.

## Features

- Basic calculations: addition, subtraction, multiplication, division, and modulo.
- Special calculations: square root, cosine, sine, exponentiation, and logarithm.

## Getting Started

### Prerequisites

- C compiler (GCC or Clang)
- Standard C library

### Compilation

1. Open a terminal or command prompt.
2. Navigate to the directory where the source files are located.
3. Run the following command to compile the code:

   ```shell
   gcc *.c -o calc -lm
   ```

   This command compiles all the `.c` files and generates an executable named `calc`.

### Usage

1. Execute the compiled program by running the following command:

   ```shell
   ./calc
   ```

2. The program will prompt you to enter your name and provide a list of available calculations.
3. Choose the type of calculation (basic or special) by entering the corresponding number.
4. Follow the on-screen instructions to input the numbers and operator for the calculation.
5. The program will display the result of the calculation.

### Clean-up

To remove the compiled executable and object files, run the following command:

```shell
rm calc
```

## File Structure

The project contains the following files:
Youngman-demo/
├── main.h
├── calc.c
├── basic_cal.c
├── special_cal.c
└── README.md

- `main.h`: Header file containing function prototypes and necessary library includes.
- `calc.c`: Main program file that handles user input and performs calculations.
- `basic_cal.c`: Source file containing functions for basic calculations.
- `special_calc.c`: Source file containing functions for special calculations.

## Contributing

This is part of a demo project contribution for the Algorithmia.

## License

This project is licensed under the [MIT License](LICENSE).
```
