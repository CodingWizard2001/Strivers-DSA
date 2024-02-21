# Print 1 to N in Reverse Order


### Description
The provided code prints numbers from 1 to N in reverse order, where N is the number provided by the user.

### Steps to Solve the Problem
- **Input:** Prompt the user to enter a number.
- **Read Input:** Read the input number from the user.
- **Recursive Function:** Implement a recursive function `print(int i, int num)` to print numbers from `i` to `num` in reverse order. In each recursive call, print the current number num followed by a space and decrement `num`. Continue this process until `num` becomes less than `i`.
- **Output:** Print numbers from 1 to N in reverse order.

### Time Complexity
The time complexity of this solution is O(N), where N is the input number. This is because the recursive function print() is called N times recursively.

### Space Complexity
The space complexity of this solution is O(N) due to the recursive function calls.