#include <stdio.h>

int findDigits(int n) {
    int sum = 0;
    int original = n;

    while (n > 0) {
        int digit = n % 10;

        if (digit != 0 && original % digit == 0) {
            sum++;
        }

        n /= 10;
    }

    return sum;
}

int main() {
    int t, n;

    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        printf("%d\n", findDigits(n));
    }

    return 0;
}