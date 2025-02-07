//Example 5: Counting the Number of Words in a Sentence

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Count the number of words in this sentence";
    char *token = strtok(str, " ");
    int count = 0;

    while (token != NULL) {
        count++;
        token = strtok(NULL, " ");
    }

    printf("Number of words: %d\n", count);

    return 0;
}

