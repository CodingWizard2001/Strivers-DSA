## Description: The provided C++ program to get GCD of two numbers based on user input. 

### Explanation:

- **User Input:** The program prompts the user to enter two numbers.

- **Input Capture:** It captures the two numbers entered by the user using the cin statement and stores them in variables `num1` and `num2`.

- **Initialization:** The program initializes the variable `GCD` to 1, which will be updated to hold the `GCD` of the two numbers.

- **Finding Minimum:** It determines the smaller of the two numbers entered (num1 and num2) using the min function and stores it in the variable mini.

- **Loop to Find GCD:** It enters a for loop starting from 2 and iterates up to the smaller of the two numbers.

- **Condition to Check Divisibility:** Inside the loop, it checks if both `num1` and `num2` are divisible by the current loop variable `i`. If they are, it updates the GCD to `i`.
- **Output GCD:** After the loop completes, it prints the calculated `GCD`.

### Example

<br/>

```cpp

Enter first number : 14
Enter second number : 18
Greatest common divisor will be : 2

```
