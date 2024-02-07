## Description: The provided C++ program generates a triangular pattern of numbers based on user input for the numbers of rows and columns. 

### Explanation

- Take input for the number of rows (rows).
- Initialize a variable count to keep track of the numbers to be printed.
- Use a loop to iterate over each row (i).
- Inside the loop, use another loop to print the numbers in each row.
    - Print numbers from count to count + i - 1.
    - Increment count by i after printing each row.
- Print a newline after printing all numbers in a row.

### Example
For example, if the user inputs 5 for both rows the program will generate the following pattern:
<br/>
<br/>
```cpp

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

```
