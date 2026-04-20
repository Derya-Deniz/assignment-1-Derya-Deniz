#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("\n=== Arithmetic ===\n");
    printf("a+b = %d\n", a + b);
    printf("a-b = %d\n", a - b);
    printf("a*b = %d\n", a * b);

    if (b != 0) {
        printf("a/b = %d\n", a / b);
        printf("a%%b = %d\n", a % b);
    } else {
        printf("Cannot divide by zero\n");
    }

    printf("\n=== Comparison ===\n");
    if (a > b) printf("a is greater\n");
    else if (b > a) printf("b is greater\n");
    else printf("equal\n");

    printf("\n=== Logical ===\n");
    if (a > 0 && b > 0)
        printf("Both positive\n");

    if (a < 0 || b < 0)
        printf("At least one negative\n");

    return 0;
}
