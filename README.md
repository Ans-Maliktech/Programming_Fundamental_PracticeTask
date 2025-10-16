# Progarms-for-C
<br>
Author: Ans Abdullah Malik
<br>
Dated:13-12-2024
<br>
Programming Fundamental PracticeTask

Practice problems and small projects in C (and a few C++ exercises).
A personal collection of programming practice tasks covering beginner to intermediate fundamentals (loops, arrays, functions, searching/sorting, simple calculators, basic algorithms and small projects).

This repository is a snapshot of many short practice programs meant to help learners get comfortable with C fundamentals and basic problem solving. The repo contains dozens of .c source files (and a few .cpp/.exe files) each implementing a small problem or utility. 
GitHub

Table of contents

What’s inside

Notable files & what they do

Getting started

Compile & run examples

Contributing / Style guidelines

Suggested improvements & roadmap

License & credits

What’s inside

The repository is a collection of small practice tasks and mini-projects in C (with a few C++ files). Files cover:

Basic I/O and arithmetic (e.g., hello.c, area.c, amount.c)

Conditionals and branching problems (e.g., age.c, grades.c, discount.c)

Loops and sequence tasks (e.g., fibnocci.c, factorial.c, loopsubtract.c)

Arrays and 1D/2D arrays (e.g., array1.c, array2.c, 2darrays.c)

Searching and sorting fundamentals (e.g., Binarysearch.c)

Simple utilities and small projects (e.g., ATM.c, Calculator.c, Temp_converter.c)

A few C++ examples exploring pass-by-reference etc. (Passbyref.cpp, Passbyrefer.cpp)

Some compiled binaries present for convenience (*.exe) — consider removing or replacing with build scripts for cross-platform compatibility. 
GitHub

Notable files & what they do

Below are representative files from the repo with short descriptions (useful for newcomers to quickly find practice tasks):

File	Purpose / Description
ATM.c	Example ATM-like menu for withdrawal/deposit (basic control flow).
Binarysearch.c	Implementation of binary search on arrays.
Calculator.c	Simple calculator (add/sub/mul/div) using user input.
Area_of_a_circle.c	Compute area given radius (demonstrates use of math.h).
Temp_converter.c	Convert temperatures between Celsius and Fahrenheit.
armstrong.c	Armstrong number checker.
factorial.c	Compute factorial (iterative or recursive approach).
fibnocci.c	Generate Fibonacci sequence.
array1.c, array2.c	Array practice (traversal, simple operations).
2darrays.c	Simple 2D array examples (matrices).
Passbyref.cpp, Passbyrefer.cpp	Small C++ examples demonstrating pass-by-reference semantics.
README.md	This README (update/replace with this content).

(These file names and the overall file list were taken from the repository index.) 
GitHub

Getting started
Prerequisites

A C compiler (GCC recommended for Linux/macOS; MinGW-w64 or MSYS2 gcc on Windows).

Optionally a simple text editor or an IDE (VS Code, CLion, Code::Blocks).

Basic terminal/command-line familiarity.

Clone the repository
git clone https://github.com/Ans-Maliktech/Programming_Fundamental_PracticeTask.git
cd Programming_Fundamental_PracticeTask

Compile & run examples

Each .c file is a standalone program. Common compile/run patterns:

Single-file C program
# compile
gcc filename.c -o filename

# run
./filename        # macOS / Linux
filename.exe      # Windows


Example — compile and run the temperature converter:

gcc Temp_converter.c -o temp_converter
./temp_converter

If a program uses math functions

Include -lm to link the math library, e.g.:

gcc Area_of_a_circle.c -o area_of_circle -lm

Compile all .c (quick-and-dirty)

Useful for testing, but you may get link errors if some main() functions conflict (many files define main). Prefer compiling single files.

for f in *.c; do
  gcc "$f" -o "${f%.c}" || echo "failed: $f"
done

Run with input redirection (for testing)

If a program expects multiple inputs, you can provide them from a file:

./program < input.txt
