#include <stdio.h>

int a[100], b[100], n;

void printArray()
{
    int i;

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
}

void merge(int l, int m, int r)
{
    int i, j, k;

    i = l;
    j = m + 1;
    k = l;

    while (i <= m && j <= r)
    {
        if (a[i] <= a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }

    while (i <= m)
        b[k++] = a[i++];

    while (j <= r)
        b[k++] = a[j++];

    for (i = l; i <= r; i++)
    {
        if (a[i] != b[i])
        {
            a[i] = b[i];
            printArray();
        }
    }
}

void mergeSort(int l, int r)
{
    int m;

    if (l < r)
    {
        m = (l + r) / 2;

        mergeSort(l, m);
        mergeSort(m + 1, r);

        merge(l, m, r);
    }
}

int main()
{
    int i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    mergeSort(0, n - 1);

    return 0;
}
