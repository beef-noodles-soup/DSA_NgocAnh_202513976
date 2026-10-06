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

    for (int i = 0; i < n - 1; i++)
    {
        int min_address = i;

        for (int j = i + 1; j < n; j++)
        {
            if (Arr[min_address] > Arr[j])
            {
                min_address = j;
            }
        }

        int temp = Arr[i];
        Arr[i] = Arr[min_address];
        Arr[min_address] = temp;

        for (int j = 0; j < n; j++)
        {
            printf("%d ", Arr[j]);
        }
        printf("\n");
    }

    return 0;
}
