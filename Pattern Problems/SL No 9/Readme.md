## Description: The provided C++ program generates a triangular pattern of numbers based on user input for the number of rows and columns. 

### Explanation

- **Input:** The program should prompt the user to enter the number of rows they want in the pattern.
- **Print the upper part of the pattern:**
    - Use a loop to iterate through each row from `0` to `rows - 1`.
    - For each row, print spaces to center the stars using another loop with `(rows - i - 1)` iterations.
    - Then, print the stars for each row using a loop with `(2 * i) + 1` iterations, where `i` represents the current row number.
- **Print the lower part of the pattern:**
    - Use a loop to iterate through each row from `rows - 1 `down to `1`.
    - For each row, print spaces to center the stars using another loop with `(rows - i)` iterations.
    - Then, print the stars for each row using a loop with `(2 * i) - 1` iterations.
- **Newline for Rows:** After printing all the numbers in a row, the outer loop (`i`) adds a newline to move to the next row.

- **Repetition:** The nested loops repeat until the number of rows and columns is reached, creating the desired triangular pattern.

- **Output:** The final output is a pattern of asterisks based on user-specified dimensions.

### Example
For example, if the user inputs 5 for both rows the program will generate the following pattern:
<br/>
<br/>
```cpp

    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *

```
