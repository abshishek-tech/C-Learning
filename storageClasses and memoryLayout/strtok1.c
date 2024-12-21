//Example 2: Multiple Delimiters
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World! Welcome; to C programming.";
    char *token = strtok(str, " ,;!"); // delimiters: space, comma, semicolon, exclamation mark

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ,;!");
    }

    return 0;
}

