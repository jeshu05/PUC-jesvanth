#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("Regular price: %.2f\nDiscount: %.2f\nTotal: %.2f\n", 
           a * 3.49, a * 3.49 * 0.6, a * 3.49 * 0.4);
    return 0;
}
