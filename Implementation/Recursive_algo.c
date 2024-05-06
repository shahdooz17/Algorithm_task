#include <stdio.h>

int sstrlen(const char *str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

int is_balanced(char *s, int left, int right) {
    int count[256] = {0}; // Assuming ASCII characters

    // Count occurrences of characters in the substring
    for (int i = left; i <= right; i++) {
        count[(int)s[i]]++;
    }

    // Check if there are exactly two different characters and they occur the same number of times
    int distinct_chars = 0;
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            distinct_chars++;
        }
    }

    if (distinct_chars != 2) {
        return 0;
    }

    int char_count = count[(int)s[left]];

    for (int i = left + 1; i <= right; i++) {
        if (count[(int)s[i]] != char_count) {
            return 0;
        }
    }

    return 1;
}

int longest_balanced_substring_recursive(char *s, int left, int right) {
    if (left > right) {
        return 0;
    }

    if (is_balanced(s, left, right)) {
        return right - left + 1;
    }

    int max_left = longest_balanced_substring_recursive(s, left + 1, right);
    int max_right = longest_balanced_substring_recursive(s, left, right - 1);

    return max_left > max_right ? max_left : max_right;
}

int longest_balanced_substring(char *s) {
    int n = sstrlen(s);
    return longest_balanced_substring_recursive(s, 0, n - 1);
}

int main() {
    char s[100];  // Adjust the size as needed

    printf("Enter a string: ");
    scanf("%s", s);

    printf("The length of the longest balanced substring is: %d\n", longest_balanced_substring(s));

    return 0;
}