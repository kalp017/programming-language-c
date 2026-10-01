#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Using while loop
    printf("\nmultiplication table Using while loop:\n");
    i = 1;
    while (i <= 10) {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }

    // Using do-while loop
    printf("\nmultiplication table Using do-while loop:\n");
    i = 1;
    do {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    } while (i <= 10);

    // Using for loop
    printf("\nmultiplication table Using for loop:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
