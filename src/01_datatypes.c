#include <stdio.h>

int main(void) {
    printf("=== Sizes of Data Types (bytes) ===\n");

    printf("int: %zu\n", sizeof(int));
    printf("long: %zu\n", sizeof(long));
    printf("long long: %zu\n", sizeof(long long));
    printf("float: %zu\n", sizeof(float));
    printf("double: %zu\n", sizeof(double));
    printf("char: %zu\n", sizeof(char));

    int age;
    double height;
    char firstLetter;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    printf("Enter your height in meters: ");
    scanf("%lf", &height);

    printf("Enter first letter: ");
    scanf(" %c", &firstLetter);

    printf("\n=== Summary ===\n");
    printf("Age: %d, Height: %.2f, First Letter: %c\n",
           age, height, firstLetter);

    return 0;
}
