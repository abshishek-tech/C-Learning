#include <stdio.h>

int main() {
    float subject1, subject2, subject3, average;

    // Prompt the user to enter marks for three subjects
    scanf("%f", &subject1);
    scanf("%f", &subject2);
    scanf("%f", &subject3);

    // Calculate the average score
    average = (subject1 + subject2 + subject3) / 3;

    // Check if the student passes
    if (average >= 40 && subject1 >= 33 && subject2 >= 33 && subject3 >= 33) {
        printf("The student passes.");
    } else {
        printf("The student fails.");
    }

    return 0;
}

