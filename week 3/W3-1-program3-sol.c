#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a * a + b * b == c * c) {
        printf("yes");
    } else if (a * a + c * c == b * b) {
        printf("yes");
    } else if (b * b + c * c == a * a) {
        printf("yes");
    } else {
        printf("no");
    }

    return 0;
}
