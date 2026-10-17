
#include <stdio.h>

void hanoi(int n, char A, char B, char C)
{
    int total = 1;
    int i, disk, from, to;

    for (i = 0; i < n; i++)
    {
        total = total * 2;
    }
    total = total - 1;

    char peg[3] = {A, B, C};
    int position[100];
    int direction;

    for (i = 0; i < n; i++)
    {
        position[i] = 0;
    }

    if (n % 2 == 0)
        direction = -1;
    else
        direction = 1;

    for (i = 1; i <= total; i++)
    {
        disk = 1;
        int step = i;

        while (step % 2 == 0)
        {
            step = step / 2;
            disk++;
        }

        from = position[disk - 1];
        to = (from + direction + 3) % 3;

        if (disk % 2 == 0)
            to = (from - direction + 3) % 3;

        printf("Move disk %d from %c to %c\n",
               disk, peg[from], peg[to]);

        position[disk - 1] = to;
    }
}

int main()
{
    int n;

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Please enter n from 1 to 100.\n");
        return 0;
    }

    hanoi(n, 'A', 'B', 'C');

    return 0;
}
