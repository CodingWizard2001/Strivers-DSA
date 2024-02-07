## Description: The provided C++ program generates a triangular pattern of numbers based on user input for the alphabet of rows and columns. 

### Explanation

- Take input for the number of rows (rows).
- Use a loop to iterate from `1 to rows`, inclusive, to represent each row.
- Use another loop to print characters in each row. The characters start from `'A' + rows - i` and go up to `'A' + rows - 1`.
- Print a newline after printing all characters in a row.

### Example
For example, if the user inputs 5 for both rows the program will generate the following pattern:
<br/>
<br/>
```cpp
E 
D E 
C D E
B C D E
A B C D E

```
