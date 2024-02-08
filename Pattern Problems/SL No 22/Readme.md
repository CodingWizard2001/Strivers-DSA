## Description: The provided C++ program generates a pattern of numbers based on user input for the numbers of rows and columns. 

### Explanation

- **Prompt User Input:** Ask the user to input the number of rows for the pattern.
- **Print Pattern:**
    - Use nested loops to iterate through each row and column of the pattern.
    - ***For each position (i, j):***
        - Calculate the distance from the current position to the top, bottom, left, and right edges of the pattern.
        - Find the minimum distance among these four distances.
        - Print the value (rows - min(min(top, left), min(down, right))) at position (i, j).
    - Move to the next line after printing each row.

### Example
For example, if the user inputs 4 for both rows the program will generate the following pattern:
<br/>
<br/>

```cpp

4 4 4 4 4 4 4 
4 3 3 3 3 3 4 
4 3 2 2 2 3 4 
4 3 2 1 2 3 4 
4 3 2 2 2 3 4 
4 3 3 3 3 3 4 
4 4 4 4 4 4 4 

```