## Description: The provided C++ program generates a triangular pattern of numbers based on user input for the alphabet of rows and columns. 

### Explanation

- Take input for the number of rows (rows).
- Use a loop to iterate from 1 to rows, inclusive, to represent each row.
- **Inside the loop:**
    - Use another loop to print spaces for formatting. The number of spaces decreases as the row number increases.
    - Use another loop to print characters from 'A' to the current row number.
    - Use another loop to print characters from the current row number minus one down to 1.
- Print a newline after printing all characters in a row.

### Example
For example, if the user inputs 5 for both rows the program will generate the following pattern:
<br/>
<br/>
```cpp

        A 
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A

```
