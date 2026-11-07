#include <stdio.h>

int smallestEvenMultiple(int n) {
    if (n % 2 == 0) {
        return n;
    }
    return 2 * n;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int result = smallestEvenMultiple(n);

    printf("Smallest Even Multiple = %d\n", result);

    return 0;
}