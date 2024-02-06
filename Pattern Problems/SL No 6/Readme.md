## Description: The provided C++ program generates a triangular pattern of numbers based on user input for the number of rows and columns. 

### Explanation

- **User Input:** The program prompts the user to enter the number of rows for the pattern.

- **Nested Loops:** 
    - The program uses a single loop (`i`) to iterate each row.
    - Inside the loop, another loop (`j`) controls the number of numbers printed in each row.

- **Printing Asterisks:** 
    - The inner loop (`j`) prints an numbers followed by a space for each column in the current row.
    - The number of iterations of the inner loop is determined by the value of `i`, resulting in an decreasing number of numbers in each row.

- **Newline for Rows:** After printing all the numbers in a row, the outer loop (`i`) adds a newline to move to the next row.

- **Repetition:** The nested loops repeat until the number of rows and columns is reached, creating the desired triangular pattern.

- **Output:** The final output is a triangular pattern of numbers based on user-specified dimensions.

### Example
For example, if the user inputs 5 for both rows the program will generate the following pattern:
<br/>
<br/>
```cpp

1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 

```
