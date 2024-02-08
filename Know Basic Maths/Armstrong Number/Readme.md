## Description: The provided C++ program to check whether a number is palindrome or not based on user input. 

### Explanation:

- **User Input:** The program prompts the user to enter a number.
- **Input Capture:** It captures the number entered by the user using the `cin` statement and stores it in the variable `num`.
- **Counting Digits:** It counts the number of digits in the entered number by repeatedly dividing it by `10` until it becomes `0`, incrementing the `count` variable each time.
- **Calculating Armstrong Sum:** It then resets the value of `n` to the original number and enters a `while` loop to iterate over each digit of the number.
- **Extracting Digits and Summation:** Inside the loop, it extracts each digit of the number by taking the remainder when divided by `10`, computes the power of each digit based on the count of digits, and accumulates the result in the `sum` variable.
- **Armstrong Check:** After the loop completes, it checks whether the computed sum is equal to the original number. If they are equal, it prints that the number is an Armstrong number; otherwise, it prints that it's not.

### Example
For example,
<br/>

```cpp

Enter a number : 176
176 is not an armstrong number

```
<br/>
```cpp

Enter a number : 1634
1634 is an armstrong  number

```
