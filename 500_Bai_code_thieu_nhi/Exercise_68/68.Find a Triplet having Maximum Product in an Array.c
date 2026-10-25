
#include <stdio.h>

int main() {
    int n, a[1000], i, j, k;
    int max, x, y, z;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    printf("Nhap mang:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = a[0] * a[1] * a[2];
    x = a[0];
    y = a[1];
    z = a[2];

    for (i = 0; i < n - 2; i++) {
        for (j = i + 1; j < n - 1; j++) {
            for (k = j + 1; k < n; k++) {
                if (a[i] * a[j] * a[k] > max) {
                    max = a[i] * a[j] * a[k];
                    x = a[i];
                    y = a[j];
                    z = a[k];
                }
            }
        }
    }

    printf("Bo ba co tich lon nhat: %d %d %d\n", x, y, z);
    printf("Tich lon nhat: %d\n", max);

    return 0;
}
