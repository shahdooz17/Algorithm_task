#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000


int myStrlen(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}


int maxBalancedSubstring(char *S) {
    int n = myStrlen(S);
    int maxLength = 0;


    for (char c1 = 'a'; c1 <= 'z'; ++c1) {
        for (char c2 = c1 + 1; c2 <= 'z'; ++c2) {
            int count1 = 0, count2 = 0, balance = 0;


            for (int i = 0; i < n; ++i) {
                if (S[i] == c1)
                    ++count1;
                else if (S[i] == c2)
                    ++count2;

                if (count1 == count2)
                    balance = count1 + count2;
            }


            if (balance > maxLength)
                maxLength = balance;
        }
    }

    return maxLength;
}

int main() {
    char S[MAX_LENGTH];
    printf("Enter the string: ");
    fgets(S, MAX_LENGTH, stdin);


    S[strcspn(S, "\n")] = '\0';

    int result = maxBalancedSubstring(S);
    printf("Maximum length of balanced substring: %d\n", result);

    return 0;
}
