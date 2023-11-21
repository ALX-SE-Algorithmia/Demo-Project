// Get command line arguments using the process object
const argvs = process.argv;

// Extract relevant command line arguments, excluding 'node' and script file name in my case 'app.js'
const argv = argvs.slice(2);

// Extract the operation (add, subtract, multiply, divide) from command line arguments
const operation = argv[0];

// Parse the second and third command line arguments as integers
const operator1 = parseInt(argv[1]);
const operator2 = parseInt(argv[2]);

// Check if the operation is addition
if (operation === 'add') {
    // Print the result of addition to the console
    console.log(`${operation} is ${operator1 + operator2}`);
}

// Check if the operation is subtraction
if (operation === 'subtract') {
    // Print the result of subtraction to the console in anotehr way
    console.log(`Subtraction of these numbers: ${operator1 - operator2}`);
}

// Check if the operation is multiplication
if (operation === 'multiply') {
    // Print the result of multiplication to the console
    console.log(`${operation} is ${operator1 * operator2}`);
}

// Check if the operation is division
if (operation === 'divide') {
    // Print the result of division to the console
    console.log(`${operation} is ${operator1 / operator2}`);
}
