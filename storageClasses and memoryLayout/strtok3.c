//Example 4: Tokenizing with Consecutive Delimiters

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "C||C++||Java||Python";
    char *token = strtok(str, "|"); // delimiter is "|"

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, "|");
    }

    return 0;
}

