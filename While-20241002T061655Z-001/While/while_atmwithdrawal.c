#include <stdio.h>

int main() {
    int balance = 1000;  // Initial balance
    int withdrawal;

    while (balance > 0) {
        printf("Your current balance is %d. Enter amount to withdraw: ", balance);
        scanf("%d", &withdrawal);

        if (withdrawal > balance) {
            printf("Insufficient funds!\n");
        } else {
            balance -= withdrawal;
        }
    }

    printf("Your balance is now zero. Transaction complete.\n");

    return 0;
}

