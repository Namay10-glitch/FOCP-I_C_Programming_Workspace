#include <stdio.h>

int sum(int num1, int num2) {
    return (num1 + num2);
}

int main() {
    int result = sum(5, 3);
    printf("Sum = %d\n", result);
    return 0;
}
