
#include <stdio.h>

int main() {
    int a[2];

    printf("Nhap hai phan tu nhi phan (0 hoac 1):\n");
    scanf("%d %d", &a[0], &a[1]);

    a[0] = a[1] = a[0] * a[1];

    printf("Mang sau khi dua ca hai phan tu ve 0:\n");
    printf("%d %d\n", a[0], a[1]);

    return 0;
}
