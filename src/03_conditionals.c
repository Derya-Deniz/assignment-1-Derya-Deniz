#include <stdio.h>

int main(void) {
    int score;

    printf("Enter score (0-100): ");
    scanf("%d", &score);

    if (score < 0 || score > 100) {
        printf("Invalid score\n");
        return 0;
    }

    if (score == 100)
        printf("Perfect score!\n");

    if (score >= 90) printf("A\n");
    else if (score >= 80) printf("B\n");
    else if (score >= 70) printf("C\n");
    else if (score >= 60) printf("D\n");
    else printf("F\n");

    return 0;
}
