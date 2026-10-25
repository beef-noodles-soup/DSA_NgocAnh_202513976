
#include <stdio.h>

int main() {
    int n, a[1000], x, i, count = 0;

    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Nhap mang da sap xep:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Nhap so can tim: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            count++;
        }
    }

    if (count > 0) {
        printf("So lan xuat hien: %d\n", count);
    } else {
        printf("Khong tim thay phan tu\n");
    }

    return 0;
}
