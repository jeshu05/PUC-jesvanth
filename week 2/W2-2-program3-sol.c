#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int x = a;

    if (b > x) {
        x = b;
    }
    if (c > x) {
        x = c;
    }

    printf("%d\n", x);
    return 0;
}
