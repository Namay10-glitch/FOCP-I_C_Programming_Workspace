#include <stdio.h>

int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
    return (arrivalTime + delayedTime) % 24;
}

int main() {
    int arrivalTime, delayedTime;

    printf("Enter arrival time: ");
    scanf("%d", &arrivalTime);

    printf("Enter delayed time: ");
    scanf("%d", &delayedTime);

    int result = findDelayedArrivalTime(arrivalTime, delayedTime);

    printf("New arrival time: %d\n", result);

    return 0;
}