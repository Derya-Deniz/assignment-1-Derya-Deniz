#include <stdio.h>

int main(void) {

    const double QUIZ_WEIGHT = 0.4;
    const double EXAM_WEIGHT = 0.6;
    const int PASS_SCORE = 50;
    const int MIN = 0;
    const int MAX = 100;

    double quiz, exam;

    printf("Quiz: ");
    scanf("%lf", &quiz);

    printf("Exam: ");
    scanf("%lf", &exam);

    if (quiz < MIN || quiz > MAX || exam < MIN || exam > MAX) {
        printf("Invalid input\n");
        return 0;
    }

    double final = quiz * QUIZ_WEIGHT + exam * EXAM_WEIGHT;

    printf("\nFinal: %.2f\n", final);

    if (final >= PASS_SCORE)
        printf("PASS\n");
    else
        printf("FAIL\n");

    if (final >= 90)
        printf("Excellent\n");
    else if (final < 50)
        printf("Needs improvement\n");

    return 0;
}
