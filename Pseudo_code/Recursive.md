## Algorithm: IsBalanced(s, left, right)

- Initialize `count` array of size 256 to 0  
  - For `i` <- `left` to `right` do
    - Increment `count[(int)s[i]]` by 1
    - End For

- Initialize `distinct_chars` <- 0 
  - For `i` <- 0 to 255 do
    - If `count[i] > 0` then
      - Increment `distinct_chars` by 1
        - End If
    - End For

- If `distinct_chars` is ≠ 2 then
  - Return 0
- End If

- Initialize `char_count` <- `count[(int)s[left]]`
- For `i` <- `left + 1` to `right` do
  - If `count[(int)s[i]]` is ≠ `char_count` then
    - Return 0
    - End If
- End For
- Return 1

--------------------------------------------------------------

## Algorithm: LongestBalancedSubstringRecursive(s, left, right)

- If `left` > `right` then
  - Return 0
- End If

- If `IsBalanced(s, left, right)` then
  - Return `right - left + 1`
- End If

- Set `max_left` <- `LongestBalancedSubstringRecursive(s, left + 1, right)`
- Set `max_right` <- `LongestBalancedSubstringRecursive(s, left, right - 1)`

- If `max_left` > `max_right` then
  - Return `max_left`
- Else
  - Return `max_right`

----------------------------------------

## Algorithm: LongestBalancedSubstring(s)

- Set `n` <- length of `s`
- Return `LongestBalancedSubstringRecursive(s, 0, n - 1)`

--------------------

## Algorithm: Main()

- Initialize `s` array of size 1000
- Print "Enter a string: "
- Read input into `s`

- Remove the newline character from `s`

- Set `result` to `LongestBalancedSubstring(s)`
- Print "Longest balanced substring length: " + `result`

- Return 0