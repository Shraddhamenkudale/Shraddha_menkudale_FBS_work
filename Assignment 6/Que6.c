#include <stdio.h>

int main()
{
    int arr[100], n, i, j;
    int prime;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers are:\n");

    for(i = 0; i < n; i++)
    {
        prime = 1;

        if(arr[i] < 2)
        {
            prime = 0;
        }
        else
        {
            for(j = 2; j < arr[i]; j++)
            {
                if(arr[i] % j == 0)
                {
                    prime = 0;
                    break;
                }
            }
        }

        if(prime == 1)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}