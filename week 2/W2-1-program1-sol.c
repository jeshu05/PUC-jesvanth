#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%.2f", (a * 12 * 2.54) + (b * 2.54));
    return 0;
}
