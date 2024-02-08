## Description: The provided C++ program generates a pattern of numbers based on user input for the asterisks of rows and columns. 

### Explanation

- **Prompt User Input:** Ask the user to input the number of rows and columns for the pattern.
- **Print Pattern:**
    - Use a nested loop to iterate through each row and column.
    - ***For each position (i, j):***
        - If i is 0 (first row), j is 0 (first column), i is (rows - 1) (last row), or j is (cols - 1) (last column), print a '*' character.
        - Otherwise, print a space character.
    - Move to the next line after printing each row.

### Example
For example, if the user inputs 5 for both rows the program will generate the following pattern:
<br/>
<br/>

```cpp

****
*  *
*  *
****

```