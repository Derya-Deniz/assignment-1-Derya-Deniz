#include <stdio.h>

int main(void) {
    int n;

    do {
        printf("Enter positive number: ");
        scanf("%d", &n);
    } while (n <= 0);

    printf("\n1 to n:\n");
    for (int i = 1; i <= n; i++)
        printf("%d ", i);

    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;

    printf("\nSum = %d\n", sum);

    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;

    printf("Factorial = %llu\n", fact);

    return 0;
}
