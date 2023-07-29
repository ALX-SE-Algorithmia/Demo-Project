# Simple C calculator

This is a simple implementation of a calculator using C. It provides basic and some special mathematical calculations.

## Features

- Basic calculations: addition, subtraction, multiplication, division, and modulo.
- Special calculations: nth root, exponentiation, logarithm, factorial and fibonacci.
- Input validation.

## Getting Started

### Prerequisites

- C compiler (GCC or Clang)

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
2. Choose the operation. For example, 1 for addtion.
3. Follow the on-screen instructions and input the operand(s).
4. The program will display the result of the calculation and continue.
5. To quit the program use `CTRL + C`

### Clean-up

To remove the compiled executable and object files, run the following command:

```shell
rm calc
```

## Contributing

This is part of a demo project contribution for the Algorithmia aimed to familiarise self with contribution to open source. 

## License

This project is licensed under the [MIT License](LICENSE).
```

