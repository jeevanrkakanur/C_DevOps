Project: Simple Add Function in C
---------------------------------

Files:
- add.h   : Header file containing the function prototype.
- add.c   : Source file containing the implementation of the add function.
- main.c  : Example program demonstrating usage of the add function.

Function:
int add(int a, int b)
    - Returns the sum of a and b.
    - If the sum is negative, returns 0 instead.

How to Compile:
    gcc main.c add.c -o program

How to Run:
    ./program   (Linux/macOS)
    program.exe (Windows)

Expected Output:
    Result of add(5, 7) = 12
