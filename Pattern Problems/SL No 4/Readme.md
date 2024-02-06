## Description: The provided C++ program generates a triangular pattern of number based on user input for the number of rows. 

### Explanation

- **User Input:** The program prompts the user to enter the number of rows for the pattern.

- **Nested Loops:** 
    - The program uses a single loop (`i`) to iterate each row.
    - Inside the loop, another loop (`j`) controls the number printed in each row.

- **Printing Numbers:** 
    - The inner loop (`i`) prints number followed by a space for each column in the current row.
    - The number of iterations of the inner loop is determined by the value of `i`, resulting in an increasing number in each row.

- **Newline for Rows:** After printing all the `i` in a row, the outer loop (`i`) adds a newline to move to the next row.

- **Repetition:** The nested loops repeat until the number of rows and columns is reached, creating the desired triangular pattern.

- **Output:** The final output is a triangular pattern of number based on user-specified dimensions.

### Example
For example, if the user inputs 5 for both rows the program will generate the following pattern:
<br/>
<br/>
```cpp

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

```
