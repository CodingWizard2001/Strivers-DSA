## Description: The provided C++ program to check whether a number is palindrome or not based on user input. 

### Explanation:

- Take input for the number (num).
- Initialize a variable reverse to store the reverse of the number and set it to 0 initially.
- Create a copy of the number num to preserve its original value.
- Use a while loop to iterate until the copy becomes `0`:
    - Extract the last digit of the number using the modulo operator `%`.
    - Multiply the reverse by `10` and add the extracted digit to it to create the `reversed number`.
    - Divide the copy by `10` to remove the last digit.
- After the loop, compare the `original number` (num) with the `reversed number` (reverse).
- If they are equal, print `Palindrome number`, otherwise print `Not a palindrome number`.

### Example
For example,
<br/>
<br/>

```cpp

Enter a number: 4532
Not a palindrome number

```
<br/>

```cpp

Enter a number: 121
Palindrome number

```
