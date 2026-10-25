
#include <stdio.h>

int main() {
    int a[100], n, i, j;
    int temp;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    j = 0;

    for (i = 0; i < n; i++) {
        if (a[i] != 0) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
    }

    printf("Mang sau khi dua cac so 0 ve cuoi:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}
