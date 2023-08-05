#!/usr/bin/env node // Adding portability for Linux environments.

// Defining variables
let username;
let num1;
let num2;
let operator;

// Include the readline module to handle command line inputs
const readline = require('readline');

// Creating a readline interface using stdin for input and stdout for output
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

// Store user's username
rl.question('Enter your username: ', (input) => {
  username = input;

  // Delaying the printing of username
  setTimeout(() => {
    console.log(`Welcome, ${username}`);

    // Welcome Message
    setTimeout(() => {
      console.log('Thank you for using this calculator.');
      console.log();
      setTimeout(() => {
        console.log('This is a basic calculator that handles:');
        console.log();
        setTimeout(() => {
          console.log('Addition: +');
          console.log();
          setTimeout(() => {
            console.log('Subtraction: -');
            console.log();
            setTimeout(() => {
              console.log('Multiplication: *');
              console.log();
              setTimeout(() => {
                console.log('Division: /');
                console.log();
                setTimeout(() => {
                  console.log('You need to enter two numbers and an arithmetic operator as listed above.');
                  console.log();
                  promptNumbers();
                }, 2000);
              }, 2000);
            }, 2000);
          }, 2000);
        }, 2000);
      }, 2000);
    }, 2000);
  }, 2000);
});

// Function to prompt for the numbers and operator
function promptNumbers () {
  // Prompt the user for two numbers and an arithmetic operator
  rl.question('Enter your first number: ', (input) => {
    num1 = input;

    // Validating the first number from user stdin
    if (isNaN(num1)) {
      console.log('Error: Invalid Input.\nYou need to enter a valid number.\nTry again!.');
    } else {
      setTimeout(() => {
        console.log('Number validated.');
        console.log();

        // Second number
        rl.question('Enter your second number: ', (input) => {
          num2 = input;

          // Validating the second number from user stdin
          if (isNaN(num2)) {
            console.log('Error: Invalid Input.\nYou need to enter a valid number.\nTry again!.');
          } else {
            setTimeout(() => {
              console.log('Number validated.');
              console.log();

              // Arithmetic operator
              rl.question('Enter an arithmetic operator: ', (input) => {
                operator = input;
                performOperation();
              });
            }, 2000);
          }
        });
      }, 2000);
    }
  });
}

function performOperation () {
  // Typecasting before performing an arithmetic operation
  num1 = parseFloat(num1);
  num2 = parseFloat(num2);
  let result;

  // Performing arithmetic operation using a switch statement
  switch (operator) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      if (num2 !== 0) {
        result = num1 / num2;
      } else {
        console.log('Error: Division by zero. Impossible operation.');
        console.log('Try again.');
        return;
      }
      break;
    default:
      console.log('Invalid operator entered!\nAccepted operators are + , - , * and /');
      console.log();
      return;
  }

  // Printing result of arithmetic operation
  setTimeout(() => {
    console.log('Performing arithmetic operation...');
    console.log();
    setTimeout(() => {
      console.log('Arithmetic calculation done.');
      console.log();
      setTimeout(() => {
        console.log(`Result of arithmetic operation: ${result}.`);
        console.log();

        // Printing exit message
        console.log(`Thank you ${username} for using this calculator.\nRun this file to use it again.\nBye ${username}.`);
        rl.close();
      }, 2000);
    }, 2000);
  }, 2500);
}
