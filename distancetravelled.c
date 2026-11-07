#include <stdio.h>

int distanceTraveled(int mainTank, int additionalTank) {
    int distance = 0;

    while (mainTank >= 5) {
        mainTank = mainTank - 5;
        distance = distance + 50;

        if (additionalTank > 0) {
            mainTank = mainTank + 1;
            additionalTank = additionalTank - 1;
        }
    }

    distance = distance + mainTank * 10;
    return distance;
}

int main() {
    int mainTank, additionalTank;

    printf("Enter main tank fuel: ");
    scanf("%d", &mainTank);

    printf("Enter additional tank fuel: ");
    scanf("%d", &additionalTank);

    printf("Distance traveled: %d\n",
           distanceTraveled(mainTank, additionalTank));

    return 0;
}
