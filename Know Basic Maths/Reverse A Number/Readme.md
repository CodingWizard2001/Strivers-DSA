## Description: The provided C++ program prints reverse a number based on user input. 

### Explanation:

- Take the input for the number (num).
- Initialize a variable count to keep track of the number of digits, set it to 0.
- Use a while loop to iterate until the number becomes 0:
    - Increment count by 1 for each iteration.
    - Divide the number by 10 to remove the last digit.
- After the loop, print the value of count, which represents the number of digits in the original number.

### Example
<br/>

```cpp

Enter a number: 453
Reverse will be: 354

```
<br/>

```cpp

Enter a number: -456
Reverse will be: -654

```
