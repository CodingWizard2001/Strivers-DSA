# Print 1 to N


### Description
The provided code prints numbers from 1 to N, where N is the number provided by the user.

### Steps to Solve the Problem
- **Input:** Prompt the user to enter a number.
- **Read Input:** Read the input number from the user.
- **Recursive Function:** Implement a recursive function `print(int i, int num)` to print numbers from `i` to `num`. In each recursive call, print the current number `i` followed by a space and increment `i`. Continue this process until `i` becomes greater than num.
- **Output:** Print numbers from 1 to N.

### Time Complexity
The time complexity of this solution is O(N), where N is the input number.

### Space Complexity
The space complexity of this solution is O(N) due to the recursive function calls.