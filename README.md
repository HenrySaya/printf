## PRINTF
This project aims to create a simplified version of the printf function in C. The goal is to handle basic conversion specifiers (c, s, and %) without considering various flags, field width, precision, or length modifiers.

## Project Structure
The project is organized into the following files:

main.h: Contains function prototypes for the printf project.
format.c: Handles conversion specifiers in the format string.
## main.h - Function Prototypes
Description
Create the main header file main.h which will contain all the function prototypes needed for the printf project.

Prototype

int _printf(const char *format, ...);
Return Value
The number of characters printed (excluding the null byte used to end output to strings).
## format.c - Handling Conversion Specifiers
Description
The format.c file is responsible for interpreting the format string and handling conversion specifiers (c, s, %). It takes the format string and variable arguments, and produces the formatted output.

Prototype

int _printf(const char *format, ...);
Return Value
The number of characters printed (excluding the null byte used to end output to strings).
Link to Pseudocode
View Pseudocode

Flowchart
View Flowchart
