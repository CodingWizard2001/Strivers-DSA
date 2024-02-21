# Factorial Calculation

### Description
The provided code calculates the factorial of a given number using recursion.

### Steps to Solve the Problem
- **Input:** Prompt the user to enter a number.
- **Read Input:** Read the input number from the user.
- **Factorial Function:** Implement a recursive function `factorial(int num)` to calculate the factorial of the input number. The base case of the recursion is when the input number is 1, in which case the factorial is 1. For any other number, calculate the factorial recursively by multiplying the number with the factorial of the number minus 1.
- **Output:** Print the calculated factorial of the input number.

### Time Complexity
The time complexity of this solution is O(N), where N is the input number.

### Space Complexity
The space complexity of this solution is O(N) due to the recursive function calls.
