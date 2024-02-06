## Description: The provided C++ program generates a triangular pattern of numbers based on user input for the number of rows and columns. 

### Explanation

- **Input:** The program should prompt the user to enter the number of rows they want in the pattern.
- **Generating the Pattern:**
    - Iterate through each row of the pattern.
    - For each row, calculate the number of spaces and asterisks required to form the desired pattern.
    - Print the appropriate number of spaces followed by asterisks to form each row of the pattern.
- **Algorithm:**
    - Use nested loops to iterate through each row and each character within the row.
    - The number of spaces in each row decreases as the row number increases.
    - The number of asterisks in each row increases as the row number increases.
    - Determine the number of spaces and asterisks to print for each row based on its position.
    - Print spaces followed by asterisks to form each row of the pattern.
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

```
