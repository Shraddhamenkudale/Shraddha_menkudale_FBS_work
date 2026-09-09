#include <stdio.h>

int main()
{
    int arr[100], brr[100], crr[200];
    int n1, n2, i;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter first array:\n");

    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter second array:\n");

    for(i = 0; i < n2; i++)
    {
        scanf("%d", &brr[i]);
    }

    for(i = 0; i < n1; i++)
    {
        crr[i] = arr[i];
    }

    for(i = 0; i < n2; i++)
    {
        crr[n1 + i] = brr[i];
    }

    printf("Merged array:\n");

    for(i = 0; i < n1 + n2; i++)
    {
        printf("%d ", crr[i]);
    }

    return 0;
