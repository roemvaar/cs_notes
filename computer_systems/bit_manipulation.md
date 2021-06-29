# Bit Manipulation

## Bitwise operators in C/C++

- **& (AND)**: takes two numbers as operands and does AND on every bit of the two numbers. True if both bits are true.
- **| (OR)**: takes two numbers as operands and does OR on every bit of the two numbers. True if any of the two bits 
is true.
- **^ (XOR)**: takes two numbers as operands and does XOR on every bit of the two numbers. True if the two bits are
differente.
- **<< (left shift)**: takes two numbers, left shifts the bits of the first operand, the second operand decides the
numbers of places to shift.
- **>> (right shift)**: takes two numbers, right shifts the bits of the first operand, the second operand decides the
number of places to shift.
- **~ (NOT)**: takes one number and inverts all bits of it.

TODO: Put truth table for each of the bitwise operators


## Classic Bit Manipulation Problems

- **Hamming Weight**

Write a function that takes an unsigned integer and returns the number of '1' 
bits it has.

First approach - [Iterate over each bit](https://github.com/alanrubik/Challenges/blob/main/rob/191.c)

Better approach - [Brian Kernighan's Algorithm](https://github.com/alanrubik/Challenges/blob/main/rob/191_kernighan.c)

```
1. Initialize count = 0
2. If integer n is not zero
     - Do bitwise & with (n-1) and assign the value back to n
       n = n & (n-1)
     - Increment count by 1
     - Go to step 2
3. Else return count
```

- **Reverse Bits**
 
