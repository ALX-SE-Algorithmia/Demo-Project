#!/usr/bin/env bash

# This file compiles all the necessary C files into a calculator.

gcc main.c math_functions.c perform_calc.c print_result.c print_message.c store_username.c validate_operator.c exit_message.c -o daniel_dohou_calculator ; ./daniel_dohou_calculator
