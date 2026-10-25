#include <stdio.h>

int main(void) {
    int a;
    int b;

    printf("Enter a: ");
    if (scanf("%d", &a) != 1) {
        return 1;
    }

    printf("Enter b: ");
    if (scanf("%d", &b) != 1) {
        return 1;
    }

    printf("You entered %d and %d.\n", a, b);
    return 0;
}
