# This will be used for King's C Programming: A modern approach"

Note: Skipping some earlier sections due to reading some sections of K&R

## 2.6 Defining Name for Constants
- These are symblbolic constants/macro definition
- Mathematical operators can be included in these constants so things like formula can be defined here

## Identifiers

# Chapter 3: Formatted Input/Output
## 3.1: Printf function
- The printf function is designed to display the contents of a string, known as the format string, with values possibly inserted at specified points in the string
- FIt follows the format m.pX% where m: minimum field width, p: precision, X:conversion specifier
- Format string can contain normal characters and conversion specifications which begin with %. Some common examples below:
    - %d: Displays an integer in decimal (base 10) form. p indicates the minimum number of digits to display 
    - %e: Displays a floating-point number in exponential format
    - %f: Displays a floating-point number in “fixed decimal” format, without an exponent
    - %g: Displays  a  floating-point  number  in  either  exponential  format  or  fixed decimal  format,  depending  on  the  number’s  size

### Escape sequences
- \a , \b, \n, \t

## 3.2 Scanf function
- Used to take input from the terminal, and stores it into a variable.
- Cannot directly store in variable, need to use a pointer & `scanf("%d", &i)`


# Chapter 4: Operators
## Arithemtic operators
- Similar to the ones in python as well

# Chapter 5: Selection statements
## 5.1: Logical Expressions
- Relational operators are the same as python ones
- Eqaulity operators same as python as well
- Logical operators:
    - ! = logical negation -> evalutaes whether an operand is zero or non-zero
    - && = logical and
    - || = logical or
    - These operators produce 0 or 1 as a result

