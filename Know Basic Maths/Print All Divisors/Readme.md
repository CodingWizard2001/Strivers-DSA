## Description: The provided C++ program prints No. of count digits based on user input. 

### Explanation:

- **User Input:** The program prompts the user to enter a number.
- **Input Capture:** It captures the number entered by the user using the cin statement and stores it in the variable num.
- **Loop to Find Divisors:** The program enters a for loop that starts from 1 and iterates up to the number entered (num).
- **Condition to Check Divisibility:** Inside the loop, it checks if the remainder of dividing num by the current loop variable i is 0. If the remainder is 0, it means i is a divisor of num.
- **Printing Divisors:** When the condition `num % i == 0` is true, the program prints the value of i, which is a divisor of the entered number.
- **Output:** After the loop completes, all divisors of the entered number are printed on the screen.

### Example

<br/>

```cpp

Enter a number : 36
All divisors are : 1 2 3 4 6 9 12 18 36 

```
