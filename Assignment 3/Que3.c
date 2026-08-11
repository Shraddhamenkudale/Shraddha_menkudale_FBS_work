#include <stdio.h>

int main()
{
    int start, end, i, sum = 0;

    printf("Enter start: ");
    scanf("%d", &start);

    printf("Enter end: ");
    scanf("%d", &end);

    for (i = start; i <= end; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}