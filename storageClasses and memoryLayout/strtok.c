#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World Program";
    char *token = strtok(str, " "); // space as delimiter

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    printf("\n original string is: %s\n", str);
    return 0;
}

