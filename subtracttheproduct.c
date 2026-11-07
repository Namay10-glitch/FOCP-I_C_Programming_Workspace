#include <stdio.h>

int subtractProductAndSum(int n) {
    int prod = 1, sum = 0, digit;

    while (n > 0) {
        digit = n % 10;
        sum += digit;
        prod *= digit;
        n /= 10;
    }

    return prod - sum;
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%d\n", subtractProductAndSum(n));

    return 0;
}