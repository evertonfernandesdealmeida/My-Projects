# (PROJECT 01) Text-based Calculator in C

In this project, you will create a text-based calculator program that operates entirely in the terminal. The idea is simple: when you run the program, it will display a menu of options for the user, allowing them to choose a mathematical operation such as addition, subtraction, multiplication, or division. Then, the user enters the numbers and receives the result immediately. It's practical, functional, and above all, a great exercise to consolidate the fundamentals of C programming!

When the program is executed, it should display an initial menu with the following options:

```
 1 | ===============================
 2 |   Simple Calculator
 3 | ===============================
 4 | Select an operation:
 5 | 1. Addition
 6 | 2. Subtraction
 7 | 3. Multiplication
 8 | 4. Division
 9 | 5. Exit
10 | Option:
```

If the user chooses an operation (for example, "1" for addition), the program should prompt for two numbers:
```
Enter the first number: 5
Enter the second number: 3
Result: 5 + 3 = 8
```
After displaying the result, the program will ask if the user wants to perform another operation:
```
Do you want to perform another operation? (y/n):
```
If the user types "y", the program returns to the initial menu. Otherwise, it displays a farewell message and exits:
```
Thank you for using the calculator! See you next time.
```

## 📂 Required Files
Your project need to have the following files:

main.c: Contains the main source code of the program with all implemented functionalities.

## 📋 Requirements
To be considered correct, your project needs to properly implement the following requirements:

### Requirement 1
Points: 40
Your program needs to implement the initial menu and option selection

- Menu Display: When the program is executed, it should display the initial menu correctly

- Option Input and Validation:
  
   - The program must read the user's input for the selected option.
   - It should validate whether the option is an integer between 1 and 5.
   - If the user enters an invalid option (a number outside the range or a non-numeric input), the program should display an appropriate       error message and prompt the user to enter a valid option again.
   
- Exit Option:

   - If the user selects option 5 (Exit), the program should display the farewell message
   - After displaying the message, the program should terminate execution.

### Requirement 2
Points: 40
You need to implement mathematical operations

- Requesting Numbers:

   - For options 1 to 4, the program must prompt the user to input two numbers, displaying exactly the following prompts
   - It should read the two numbers entered by the user, allowing both integers and decimals.

- Calculation and Displaying the Result:

   - The program must perform the mathematical operation corresponding to the selected option:
      - 1. Addition: add the two numbers.
      - 2. Subtraction: subtract the second number from the first.
      - 3. Multiplication: multiply the two numbers.
      - 4. Division: divide the first number by the second.
- It should display the result in the specified format, including the correct mathematical operator:
```
1 | Result: [number1] [operator] [number2] = [result]
```
Example:
```
1 | Result: 5 + 3 = 8
```
- Error Handling for Division:

   - If the user attempts to divide by zero, the program must detect this situation and display an appropriate error message, such as:
   ```
   Error: Division by zero is not allowed.
   ```
   - After the error, it should prompt the user to decide whether to perform another operation.
