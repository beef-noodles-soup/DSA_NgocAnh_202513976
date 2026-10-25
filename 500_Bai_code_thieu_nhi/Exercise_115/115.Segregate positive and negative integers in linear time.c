
#include <stdio.h>

int main() {
    int a[100], n, i;
    int left, right, temp;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    left = 0;
    right = n - 1;

    while (left < right) {
        while (left < right && a[left] < 0) {
            left++;
        }

        while (left < right && a[right] >= 0) {
            right--;
        }

        if (left < right) {
            temp = a[left];
            a[left] = a[right];
            a[right] = temp;

            left++;
            right--;
        }
    }

    printf("Mang sau khi tach so am va so khong am:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}
