#include <stdio.h>

int main() {
    int n, a[1000], i, count = 0;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    printf("Nhap mang nhi phan da sap xep:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
        if (a[i] == 1)
            count++;

    printf("So luong so 1: %d\n", count);

    return 0;
}