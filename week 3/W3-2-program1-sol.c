#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 3) {
        printf("Triangle");
    } else if (n == 4) {
        printf("Square");
    } else if (n == 5) {
        printf("Pentagon");
    } else if (n == 6) {
        printf("Hexagon");
    } else if (n == 7) {
        printf("Heptagon");
    } else if (n == 8) {
        printf("Octagon");
    } else if (n == 9) {
        printf("Nonagon");
    } else if (n == 10) {
        printf("Decagon");
    } else {
        printf("The number of sides is not supported.");
    }

    return 0;
}
