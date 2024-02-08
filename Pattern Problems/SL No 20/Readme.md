## Description: The provided C++ program generates a pattern of numbers based on user input for the asterisks of rows and columns. 

### Explanation

- **Prompt User Input:** Ask the user to input the number of rows for the pattern.
- **Print Upper Part:**
    - Use a loop to iterate from `0` to `rows - 1`.
    - ***In each iteration:***
        - Print `i + 1` stars.
        - Print `2 * (rows - i) - 2` spaces.
        - Print `i + 1` stars again.
        - Move to the next line.
- **Print Lower Part:**
    - Use a loop to iterate from `0` to `(rows - 1) - 1`.
    - In each iteration:
        - Print `(rows - i - 1)` stars.
        - Print `(2 * i) + 2` spaces.
        - Print `(rows - i - 1)` stars again.
        - Move to the next line.
### Example
For example, if the user inputs 5 for both rows the program will generate the following pattern:
<br/>
<br/>

```cpp

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

```