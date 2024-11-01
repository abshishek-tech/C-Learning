#include <stdio.h>

int main() {
    int secret = 42; // The secret number to guess
    int guess;

    printf("Guess the number between 1 and 100: ");
    scanf("%d", &guess);

    while (guess != secret) {
        if (guess < secret) {
            printf("Too low! Try again: ");
        } else {
            printf("Too high! Try again: ");
        }
        scanf("%d", &guess);
    }

    printf("You guessed it!\n");
    return 0;
}

