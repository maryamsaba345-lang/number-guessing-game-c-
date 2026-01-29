# number-guessing-game-c++
A simple console-based number guessing game developed in C++ using random number generation and user input handling.

---

# Number Guessing Game in C++

## Project Description

This project is a console-based Number Guessing Game implemented in C++. The program generates a random number between 1 and 10 and allows the user a maximum of three attempts to guess the number. The game records the result of each session in a text file and displays previous results when the program starts.

The project demonstrates fundamental C++ programming concepts including functions, arrays, pointers, file handling, random number generation, and control structures.

---

## Objectives

* To implement a menu-driven console application in C++
* To demonstrate the use of functions for modular programming
* To apply arrays and pointers for data storage
* To implement file handling for persistent data storage
* To use random number generation in a practical application

---

## Tools and Technologies

* C++ Programming Language
* Standard Libraries: `<iostream>`, `<fstream>`, `<cstdlib>`, `<ctime>`
* Compiler: GCC or any standard C++ compiler

---

## Program Structure

### Main Function

* Displays previous game results from a file.
* Provides a menu to the user with options to play the game or exit.
* Controls program flow based on user input.

---

### Function: `playGame()`

* Initializes the random number generator.
* Generates a random number between 1 and 10.
* Allows the user up to three attempts to guess the number.
* Stores user guesses in an array using pointer arithmetic.
* Determines win or loss based on user input.
* Displays all guesses entered by the user.
* Calls the function to save the game result.

---

### Function: `saveResult(int attempts, bool win)`

* Opens a text file in append mode.
* Stores the number of attempts used and the final result (WIN or LOSS).
* Ensures previous results are not overwritten.

---

### Function: `showPreviousResult()`

* Reads data from the result file.
* Displays all previous game results at the start of the program.

---

## File Handling

The program uses a text file named `result.txt` to store game results. Each entry includes:

* Number of attempts used
* Final game outcome (WIN or LOSS)

Sample file content:

```
Attempts used: 2 | Result: WIN
Attempts used: 3 | Result: LOSS
```

---

## Program Features

* Menu-driven interface
* Random number generation
* Limited number of attempts
* Use of arrays and pointers
* Persistent storage using file handling
* Display of previous results

---

## Compilation and Execution

### Compile the Program

```
g++ main.cpp -o game
```

### Run the Program

```
./game
```

---

## Learning Outcomes

This project helps in understanding:

* Modular programming using functions
* Pointer usage with arrays
* File input and output operations
* Control flow using loops and conditional statements
* Implementation of simple game logic in C++

---

## Author

Name: Maryam saba. 
ID: 2540148 
Institute: Air University Karachi Campus. 
Department: Computer Science. 
Course: Programming Fundamentals. 

---
