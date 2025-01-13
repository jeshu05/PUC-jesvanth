#include <stdio.h>

int main() {
    int T, i = 0, n, t;
    scanf("%d", &T);

    while (i < T) {
        scanf("%d", &n);
        t = n / 4;

        if (t % 2 == 0 && n % 2 == 0) {
            printf("No\n");
        } else if (t % 2 == 1 && n % 2 == 1) {
            printf("No\n");
        } else {
            printf("Yes\n");
        }
        i++;
    }

    return 0;
}
