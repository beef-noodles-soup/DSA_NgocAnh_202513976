#include <stdio.h>

int a[100], n;

void printArray()
{
    int i;

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
}

void swap(int i, int j)
{
    int temp;

    temp = a[i];
    a[i] = a[j];
    a[j] = temp;

    printArray();
}

int partition(int l, int r)
{
    int pivot, i, j;

    pivot = a[r];
    i = l - 1;

    for (j = l; j < r; j++)
    {
        if (a[j] <= pivot)
        {
            i++;

            if (i != j)
                swap(i, j);
        }
    }

    if (i + 1 != r)
        swap(i + 1, r);

    return i + 1;
}

void quickSort(int l, int r)
{
    int p;

    if (l < r)
    {
        p = partition(l, r);

        quickSort(l, p - 1);
        quickSort(p + 1, r);
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

    quickSort(0, n - 1);

    return 0;
}