## Description: The provided C++ program generates a triangular pattern of numbers based on user input for the alphabet of rows and columns. 

### Explanation

- Take input for the number of rows (rows).
- Use a loop to iterate over each row (`i`).
- Inside the loop, use another loop to print the characters in each row.
    - Convert the integer value of j to its corresponding uppercase alphabet using `ASCII values`.
    - Print the characters separated by space.
- Print a newline after printing all characters in a row.

### Example
For example, if the user inputs 5 for both rows the program will generate the following pattern:
<br/>
<br/>
```cpp

A 
A B 
A B C 
A B C D 
A B C D E 

```
