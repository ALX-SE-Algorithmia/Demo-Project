# Stack based Calculator.

Simple stack based calculator, takes as inputs arithmetic operations described
in [infix](https://en.wikipedia.org/wiki/Infix_notation) notation and output the
result.

## How to use

1- Compile the program
```bash
gcc *.c -o scp -lm
```

2- Excecute the program and describe your operation.
```
./scp
(SCP): (12 + 4) * (1 + 8 * 6)
```

3- Press ENTER to get your result.
```bash
(SCP): 784
```

## TODO:
- [ ] Free allocated memory.
- [ ] Handle errors.
