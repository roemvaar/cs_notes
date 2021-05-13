# Bit Manipulation

Bitwise operations and bit manipulation:

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
 
