## Description: The provided C++ program to check whether enter number is prime number or not. 

### Explanation:

- **User Input:** The program prompts the user to enter a number.
- **Input Capture:** It captures the number entered by the user using the cin statement and stores it in the variable num.
- **Prime Check Flag:** A boolean variable flag is initialized to true. This flag will be used to determine whether the number is prime or not.
- **Loop to Check Divisibility:** The program enters a for loop starting from `2` and iterates up to half of the entered number `(num / 2)`. It checks whether the number is divisible by any integer between `2` and `num / 2`.
- **Condition to Check Divisibility:** Inside the loop, it checks if the remainder of dividing num by the current loop variable i is 0. If the remainder is 0, it means num is divisible by i and hence not a prime number.
- **Setting Flag:** If a divisor is found, the flag is set to false, indicating that the number is not prime, and the loop is exited using break.
- **Prime Number Output:** After the loop completes, it checks whether the `flag` is still true and if the number is not equal to 1. If both conditions are met, it prints that the number is a prime number. Otherwise, it prints that the number is not a prime number.

### Example

<br/>

```cpp

Enter a number : 5
5 is a prime number

```
<br/>

```cpp

Enter a number : 18
18 is not a prime number

```
