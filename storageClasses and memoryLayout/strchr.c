#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char *ptr = strchr(str, 'o');

    if (ptr) {
        printf("First occurrence of 'o' found at position: %ld\n", ptr - str);
    } else {
        printf("'o' not found in the string.\n");
    }

    return 0;
}

