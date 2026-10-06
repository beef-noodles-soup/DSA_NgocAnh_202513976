#include <stdio.h>
void hanoi(int n, char A, char B, char C) {
    if (n<=0)
        return;

    if (n==1)
    {
        printf(" move disk 1 from %c to %c \n", A, C);
        return;
    }
    hanoi(n-1, A, C, B);
    printf(" move disk %d from %c to %c \n", n, A, C);
    hanoi(n-1, B, A, C);
}
int main() {
    int n;
    printf("enter the number of disks: ");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    return 0;
}