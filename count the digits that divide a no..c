#include <stdio.h>

int countDigits(int num) {
    int original = num;
    int digit;
    int count = 0;

    while (num > 0) {
        digit = num % 10;

        if (digit != 0 && original % digit == 0) {
            count++;
        }

        num = num / 10;
    }

    return count;
}

int main() {
    int num;

    scanf("%d", &num);

    printf("%d\n", countDigits(num));

    return 0;
}