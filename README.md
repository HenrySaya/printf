## PRINTF
This project aims to create a simplified version of the printf function in C. The goal is to handle basic conversion specifiers (c, s, and %) without considering various flags, field width, precision, or length modifiers.

## Project Structure
The project is organized into the following files:

main.h: Contains function prototypes for the printf project.
format.c: Handles conversion specifiers in the format string.
## main.h - Function Prototypes
Description
The main header file main.h which will contain all the function prototypes needed for the printf project.

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
https://docs.google.com/document/d/1h-82yn05l-4h-55BSlQYgeyBTT4Oi0xCEXmtoZZf7Pk/edit?usp=sharing

Flowchart
https://drive.google.com/file/d/1Ml-5gRqJdQqnNCkyEGFbfomFAvDn5vZD/view?usp=sharing
## print_binary.c
THe print_binary.c file is responsible for converting an integer in decimal value(base 10) to its equivalent binary value(base 2)

## print_digit.c
The print_digit.c is responsible for displaying the integers whether positive or negative to the standard output

## peint_digspecial.c
This is a file that handles the 'o', 'x', 'X' and 'u' specifiers
