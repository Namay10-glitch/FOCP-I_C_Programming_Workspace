#include <stdio.h>

int countOdds(int low, int high) {
    return (high + 1) / 2 - low / 2;
}

int main() {
    int low, high;

    printf("Enter low value: ");
    scanf("%d", &low);

    printf("Enter high value: ");
    scanf("%d", &high);

    int result = countOdds(low, high);

    printf("Number of odd numbers = %d\n", result);

    return 0;
}