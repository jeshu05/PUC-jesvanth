#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    if (x % 10 == y % 10) {
        printf("true");
    } else {
        printf("false");
    }

    return 0;
}
