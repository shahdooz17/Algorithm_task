## Algorithm: MyStrlen(str)

- Set `length` <- 0
- While `str[length]` is ≠ null do
  - Increment `length` by 1
- End While
- Return `length`

--------------------------------------

## Algorithm: MaxBalancedSubstring(S)

- Set `n` <- `MyStrlen(S)`
- Set `maxLength` <- 0

- For each character `c1` <- 'a' to 'z' do
  - For each character `c2` <- `c1 + 1` to 'z' do
    - Set `count1`, `count2`, and `balance` <- 0

    - For `i` <- 0 to `n-1` do
      - If `S[i]` equals `c1` then
        - Increment `count1` by 1
      - Else if `S[i]` equals `c2`
        - Increment `count2` by 1

      - If `count1` equals `count2` then
        - Set `balance` <- `count1 + count2`
        - End For

    - If `balance` > `maxLength` then
      - Set `maxLength` <- `balance`
      - End For
- End For

- Return `maxLength`

-------------------

## Algorithm: Main()

- Create an array `S` of size `MAX_LENGTH`
- Print "Enter the string: "
- Read input into `S`

- Remove the newline character from `S`

- Set `result` <- `MaxBalancedSubstring(S)`
- Print "Maximum length of balanced substring: " + `result`

- Return 0