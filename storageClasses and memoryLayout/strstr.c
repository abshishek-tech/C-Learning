#include <stdio.h>
#include <string.h>
#include <stdint.h> //for uintptr_t
/*uintptr_t from <stdint.h> is an integer type guaranteed to be able to hold a pointer, 
making it safe for casting pointer addresses.
(unsigned int)(uintptr_t)str casts the base address of str to uintptr_t (to match pointer size) 
and then to unsigned int.*/

int main() {
    char str[] = "Hello, World!";
    char *ptr = strstr(str, "World");
    printf("\nBase address of str in unsigned integer format is: %u\n", (unsigned int)(uintptr_t)str);
    printf("\nBase address of str in hexadecimal-format is: %p\n", str);
    printf("\n%ld\n", ptr);
    if (ptr != NULL) {
        printf("Substring 'World' found at position: %ld\n", ptr - str);
    } else {
        printf("'World' not found in the string.\n");
    }

    return 0;
}

