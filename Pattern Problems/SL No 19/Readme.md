## Description: The provided C++ program generates a pattern of numbers based on user input for the asterisks of rows and columns. 

### Explanation

- **Prompt User Input:** Ask the user to input the number of rows for the pattern.

- **Print Upper Part:**
    - Use a loop to iterate from `0` to `rows - 1`.
    - ***In each iteration:***
        - Print `rows - i` stars.
        - Print `2 * i` spaces.
        - Print `rows - i` stars again.
- **Print Lower Part:**
    - Set the value of space to `(2 * rows) - 2`.
    - Use a loop to iterate from `0` to `rows - 1`.
    - In each iteration:
        - Print `i + 1` stars.
        - Print `space` spaces.
        - Print `i + 1` stars again.
        - Decrease the value of `space` by 2.

### Example
For example, if the user inputs 5 for both rows the program will generate the following pattern:
<br/>
<br/>

```cpp

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

```