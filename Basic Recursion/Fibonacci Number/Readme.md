# Fibonacci Number Calculation


### Description
The provided code calculates the Fibonacci number at a given term using recursion.

### Steps to Solve the Problem
- Input: Prompt the user to enter the term for which they want to calculate the Fibonacci number.
- Read Input: Read the input term from the user.
- Fibonacci Function: Implement a recursive function FibonacciSeries(int term) to calculate the Fibonacci number at the given term. The base cases of the recursion are when the term is 0 or 1, in which case the Fibonacci number is equal to the term itself. For any other term, calculate the Fibonacci number recursively by adding the Fibonacci number at term - 1 and term - 2.
- Output: Print the calculated Fibonacci number at the given term.

### Time Complexity
The time complexity of this solution is O(2^N), where N is the input term.

### Space Complexity
The space complexity of this solution is O(N) due to the recursive function calls.