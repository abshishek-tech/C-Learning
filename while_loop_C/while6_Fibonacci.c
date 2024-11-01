#include <stdio.h>

int main() {
    int limit, a = 0, b = 1, next;

    printf("Enter limit: ");
    scanf("%d", &limit);

    while (a <= limit) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}

