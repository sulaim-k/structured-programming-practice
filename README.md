# CSC1101 Structured Programming – GitHub Practice

## Student Assignment Project

This repository contains eight original C practice programs based on the programming categories required for the CSC1101 Structured Programming GitHub Practice Assignment.

The programs use ideas related to exercises in **Paul Deitel and Harvey Deitel, C How to Program, 9th Edition**. The textbook exercise wording has not been copied; each problem below is described in original words.

## Repository structure

```text
structured-programming-practice/
├── README.md
├── 01_basic_output/
│   └── exercise.c
├── 02_input_process_output/
│   └── exercise.c
├── 03_decisions/
│   └── exercise.c
├── 04_basic_loop/
│   └── exercise.c
├── 05_loop_calculation/
│   └── exercise.c
├── 06_loop_input/
│   └── exercise.c
├── 07_loop_decision/
│   └── exercise.c
└── 08_interactive_program/
    └── exercise.c
```

---

## 1. Student Information Card

**Category:** Basic output

**Textbook reference:** Deitel & Deitel, *C How to Program*, 9th Edition, Chapter 2, Exercise 2.21 (related output and escape-sequence practice).

**What the program does:**  
The program displays a simple student information card directly on the console.

**Concepts used:**  
`printf()`, strings, console output, `main()` and `return`.

**How it works:**  
The program calls `printf()` several times. Each call sends a line of text to the standard output. No input is required.

**Example run:**

```text
STUDENT INFORMATION
-------------------
Name: C Programming Student
Course: CSC1101 Structured Programming
Topic: GitHub Practice Assignment
```

---

## 2. Two-Number Calculator

**Category:** Input – Process – Output

**Textbook reference:** Deitel & Deitel, *C How to Program*, 9th Edition, Chapter 2, Exercise 2.16 (related arithmetic practice).

**What the program does:**  
The program reads two integers, calculates their sum and average, and displays the results.

**Concepts used:**  
Variables, `scanf()`, `printf()`, arithmetic operators and input/process/output.

**How it works:**  
Two integers are stored in variables. The program adds them to obtain the sum. It divides the sum by `2.0` to obtain a decimal average, then displays both results.

**Example run:**

```text
Enter two integers: 12 18
Sum = 30
Average = 15.00
```

---

## 3. Number Sign Checker

**Category:** Decision

**Textbook reference:** Deitel & Deitel, *C How to Program*, 9th Edition, Chapter 2, Exercise 2.22 (related decision-making practice).

**What the program does:**  
The program reads an integer and determines whether it is positive, negative, or zero.

**Concepts used:**  
`if`, `else if`, `else`, relational operators, `scanf()` and `printf()`.

**How it works:**  
The input is compared with zero. If it is greater than zero the program reports positive; if it is less than zero it reports negative; otherwise it reports zero.

**Example run:**

```text
Enter an integer: -7
The number is negative.
```

---

## 4. Number Sequence

**Category:** Basic loop

**Textbook reference:** Deitel & Deitel, *C How to Program*, 9th Edition, Chapter 4, Exercise 4.7 (related sequence-generation practice).

**What the program does:**  
The program uses a `for` loop to display the numbers from 1 through 10.

**Concepts used:**  
`for` loop, loop counter, initialization, condition, increment and `printf()`.

**How it works:**  
The counter starts at 1. The loop continues while the counter is less than or equal to 10. After each iteration, the counter increases by one.

**Example run:**

```text
1 2 3 4 5 6 7 8 9 10
```

---

## 5. Sum of Squares

**Category:** Loop with calculation

**Textbook reference:** Deitel & Deitel, *C How to Program*, 9th Edition, Chapter 4, Exercise 4.13 (related repeated arithmetic calculation).

**What the program does:**  
The program asks for a positive integer and calculates the sum of all squares from 1 up to that number.

**Concepts used:**  
`for` loop, arithmetic, accumulator variable, integer variables and input.

**How it works:**  
The loop visits each integer from 1 to the supplied limit. For each value, the program calculates its square and adds it to `sum`.

**Example run:**

```text
Enter a positive integer: 5
Sum of squares from 1 to 5 = 55
```

---

## 6. Test Score Collector

**Category:** Loop with user input

**Textbook reference:** Deitel & Deitel, *C How to Program*, 9th Edition, Chapter 3, Exercise 3.23 (related repeated-number input).

**What the program does:**  
The program collects five test scores using a loop, then displays their total and average.

**Concepts used:**  
`for` loop, `scanf()`, variables, accumulator and arithmetic.

**How it works:**  
The loop runs five times. On every iteration, one score is read and added to `total`. After the loop finishes, the total is divided by five to obtain the average.

**Example run:**

```text
Enter score 1: 70
Enter score 2: 80
Enter score 3: 65
Enter score 4: 90
Enter score 5: 75
Total = 380
Average = 76.00
```

---

## 7. Prime Number Checker

**Category:** Loop with decision

**Textbook reference:** Deitel & Deitel, *C How to Program*, 9th Edition, Chapter 3, Exercise 3.22 (related repeated divisibility decisions).

**What the program does:**  
The program checks whether a positive integer is prime.

**Concepts used:**  
`for` loop, `if` statement, modulus operator `%`, Boolean-style flag variable and `break`.

**How it works:**  
For numbers below 2, the program marks the number as not prime. Otherwise, it tests possible divisors starting at 2. If a divisor divides the number exactly, the number is not prime and the loop stops.

**Example run:**

```text
Enter a positive integer: 29
29 is prime.
```

---

## 8. Menu Calculator

**Category:** Interactive console program

**Textbook reference:** Deitel & Deitel, *C How to Program*, 9th Edition, Chapter 7, Exercise 7.31 (related menu-driven calculator practice).

**What the program does:**  
The program repeatedly displays a calculator menu. The user can add, subtract, multiply or divide two numbers, or select Exit.

**Concepts used:**  
Menu, `do...while`, `switch`, `if`, `scanf()`, arithmetic and an exit condition.

**How it works:**  
The menu is displayed inside a `do...while` loop. The user's choice is processed using `switch`. For the four arithmetic operations, two numbers are read. The loop continues until the user selects option 5.

**Example run:**

```text
CALCULATOR MENU
1. Add
2. Subtract
3. Multiply
4. Divide
5. Exit
Choose an option: 1
Enter two numbers: 12 8
Result = 20.00

CALCULATOR MENU
1. Add
2. Subtract
3. Multiply
4. Divide
5. Exit
Choose an option: 5
Goodbye.
```

---

