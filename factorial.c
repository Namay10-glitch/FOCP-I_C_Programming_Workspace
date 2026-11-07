#include <stdio.h>

int main() {
    int num;
    long long fact = 1;

    scanf("%d", &num);

    if (num < 0) {
        printf("Invalid input\n");
        return 0;
    }

    for (int i = 2; i <= num; i++) {
        fact *= i;
    }

    printf("%lld\n", fact);

    return 0;
}