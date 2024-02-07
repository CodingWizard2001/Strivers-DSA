## Description: The provided C++ program prints No. of count digits based on user input. 

### Explanation:

- Take input for the number (num).
- Initialize a variable count to keep track of the number of digits, set it to 0 initially.
- Use a while loop to iterate until the number becomes 0:
    - Increment count by 1 for each iteration.
    - Divide the number by 10 to remove the last digit.
- After the loop, print the value of count, which represents the number of digits in the original number.

### Example
For example, if the user inputs 5 for both rows and columns, the program will generate the following pattern:
<br/>
<br/>

```cpp

Enter a number : 576
No. of digits are : 3

```
