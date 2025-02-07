//Example 3: Tokenizing with a Single Character Delimiter

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "apple-banana-cherry";
    char *token = strtok(str, "-"); // delimiter is "-"

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, "-");
    }

    return 0;
}

