## Description: The provided C++ program generates a triangular pattern of numbers based on user input for the alphabet of rows and columns. 

### Explanation

- Take input for the number of rows (rows).
- Use a loop to iterate from 1 to rows, inclusive, to represent each row.
- Inside the loop, use another loop to print the characters in each row.
    - Convert the current row number i to its corresponding uppercase alphabet using ASCII values.
    - Print the character i times in the row.
- Print a newline after printing all characters in a row.

### Example
For example, if the user inputs 5 for both rows the program will generate the following pattern:
<br/>
<br/>
```cpp

A 
B B 
C C C 
D D D D 
E E E E E 

```
