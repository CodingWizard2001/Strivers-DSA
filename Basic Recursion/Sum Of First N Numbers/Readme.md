# Sum of first N Natural Numbers

### Description
Given a number **N**, find out the sum of the first N natural numbers.

### Steps to Solve the Problem

- The `Sum` function takes an integer `n` as input and calculates the `sum` of the first `n` natural numbers recursively.
- If `n` is equal to 1 (base case), it returns 1, as the `sum` of the first natural number is 1.
- Otherwise, it returns the sum of n and the result of calling `Sum(n - 1)`, which recursively calculates the sum of the first `n - 1` natural numbers.
- In the main function, it prompts the user to enter the value of N.
- It reads the input value of `N` from the user.
- It calls the `Sum` function with the input value of `N` and prints the calculated sum

### Time Complexity
The time complexity of this solution is O(N), where N is the input number.

### Space Complexity
The space complexity of this solution is O(N) due to the recursive function calls.