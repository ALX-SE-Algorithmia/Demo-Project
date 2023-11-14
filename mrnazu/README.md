# CLI based NodeJS Calculator

## Overview

This implementation utilizes the `process` object, specifically its `arguments` property, to capture command line inputs. The script then processes the arguments, performing various operations based on user input.

## Functionalities

In this example application, users can perform basic arithmetic operations by providing command line arguments. The supported operations include addition, subtraction, multiplication, and division.

- To add two numbers:
  ```
  node app.js add num1 num2
  ```

- To subtract two numbers:
  ```
  node app.js subtract num1 num2
  ```

- To multiply two numbers:
  ```
  node app.js multiply num1 num2
  ```

- To divide two numbers:
  ```
  node app.js divide num1 num2
  ```

## Implementation

### Step 1: Set Up Your Project

Create and open your project folder in a code editor.

### Step 2: Create 'app.js'

Inside this file, write the code for command line arithmetic operations.

### Step 3: Process Command Line Arguments

```javascript
const argvs = process.argv;
const argv = argvs.slice(2);
```

### Step 4: Assign Arguments to Constants

```javascript
const operation = argv[0];
const operator1 = parseInt(argv[1]);
const operator2 = parseInt(argv[2]);
```

### Step 5: Perform Operations

```javascript
if (operation === 'add') {
   console.log(`${operation} is ${operator1 + operator2}`);
}

if (operation === 'subtract') {
   console.log(`${operation} is ${operator1 - operator2}`);
}

if (operation === 'multiply') {
   console.log(`${operation} is ${operator1 * operator2}`);
}

if (operation === 'divide') {
   console.log(`${operation} is ${operator1 / operator2}`);
}
```

Now, users can run the script with appropriate command line arguments to perform desired arithmetic operations.

---

Feel free to contact me on [X formerly Twitter](https://twitter.com/mrnazu_)
