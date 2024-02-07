## Description: The provided C++ program generates a triangular pattern of numbers based on user input for the numbers of rows and columns. 

### Explanation

- Take input for the number of rows (rows).
- Use a loop to iterate over each row (i).
- Inside the loop, use nested loops to print the numbers and spaces accordingly.
    - Print numbers from 1 to i in ascending order.
    - Print spaces to create the gap in the middle.
    - Print numbers from i to 1 in descending order.
- Print a newline after printing all characters in a row.

### Example
For example, if the user inputs 5 for both rows the program will generate the following pattern:
<br/>
<br/>
```cpp

1      1
12    21
123  321
12344321

```
