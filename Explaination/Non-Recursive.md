# Code Explanation and Trace

The given code is designed to find the maximum length of a balanced substring in a given string. A balanced substring is defined as a substring that contains exactly two different characters, and each character appears the same number of times.

Here's a step-by-step explanation of how the code works:

1. The `myStrlen` function calculates the length of the input string. It does this by initializing a counter to 0 and incrementing it until it reaches the null character (`'\0'`), which marks the end of the string.

2. The `maxBalancedSubstring` function is where the main logic of the program resides. It takes a string `S` as input and returns the length of the longest balanced substring in `S`.

3. The function first calculates the length `n` of the string `S` using the `myStrlen` function.

4. It then initializes a variable `maxLength` to 0. This variable will keep track of the maximum length of a balanced substring that the function has found so far.

5. The function then enters a pair of nested loops that iterate over all pairs of characters from 'a' to 'z'. For each pair of characters `(c1, c2)`, the function counts the number of occurrences of `c1` and `c2` in the string `S`.

6. If at any point the counts of `c1` and `c2` are equal, the function updates a variable `balance` to be twice the count (since a balanced substring has been found).

7. If `balance` is greater than `maxLength`, the function updates `maxLength` to be `balance`.

8. After checking all pairs of characters, the function returns `maxLength`, which is the length of the longest balanced substring in `S`.

9. The `main` function reads a string from the user, removes the newline character from the end of the string, and then calls `maxBalancedSubstring` to find the length of the longest balanced substring. It then prints this length.

Now, let's trace the code with the example string "aabbbcccaa":

1. The length of the string is 10.

2. The function checks all pairs of characters. The pair that gives the longest balanced substring is 'b' and 'c'. The substring "bbbccc" is balanced and has length 6.

3. Therefore, the function returns 6, and the `main` function prints "Maximum length of balanced substring: 6".
---------------------------------------------------------------------------------------------------------------
# Output:
![Link Name](output1.png)

![Link Name](output2.png)

![Link Name](output3.png)