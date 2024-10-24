#include <stdio.h>

int main() {
    int num;

    printf("Enter numbers (enter 0 to stop):\n");

    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break;  // Exit the loop when 0 is entered
        }
        printf("You entered: %d\n", num);
    }

    return 0;
}
