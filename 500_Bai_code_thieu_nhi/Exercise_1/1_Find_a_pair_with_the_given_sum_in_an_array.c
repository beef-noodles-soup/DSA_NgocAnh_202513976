
#include <stdio.h>

int main() {
    int a[100], n, sum;
    int i, j;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Nhap tong can tim: ");
    scanf("%d", &sum);

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] + a[j] == sum) {
                printf("%d + %d = %d\n", a[i], a[j], sum);
            }
        }
    }

    return 0;
}
