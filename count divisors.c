#include <stdio.h>

int main() {
    int l, r, k;
    int count = 0;

    scanf("%d %d %d", &l, &r, &k);

    if (k == 0) {
        return 0;
    }

    for (int i = l; i <= r; i++) {
        if (i % k == 0) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}