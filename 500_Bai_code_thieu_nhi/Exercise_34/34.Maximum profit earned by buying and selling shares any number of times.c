#include <stdio.h>

int main() {
    int n, a[1000], i, profit = 0;

    printf("Nhap n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            profit = profit + a[i] - a[i - 1];
        }
    }

    printf("Loi nhuan toi da: %d\n", profit);

    return 0;
}