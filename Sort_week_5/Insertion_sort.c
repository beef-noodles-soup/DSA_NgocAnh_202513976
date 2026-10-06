#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int Arr[100];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
    }

    for (int i = 1; i < n; i++)
    {
        int key = Arr[i];
        int j = i - 1;

        while (j >= 0 && Arr[j] > key)
        {
            Arr[j + 1] = Arr[j];
            j--;
        }

        Arr[j + 1] = key;

        for (int j = 0; j < n; j++)
        {
            printf("%d ", Arr[j]);
        }
        printf("\n");
    }

    return 0;
}