
#include <stdio.h>

int main() {
    int a[100], n, i;
    int sum, max;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    sum = a[0];
    max = a[0];

    for (i = 1; i < n; i++) {
        if (sum < 0) {
            sum = a[i];
        } else {
            sum = sum + a[i];
        }

        if (sum > max) {
            max = sum;
        }
    }

    printf("Tong lon nhat cua day: %d\n", max);

    return 0;
}
