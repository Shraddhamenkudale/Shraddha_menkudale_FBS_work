#include <stdio.h>

int main()
{
    int arr[100], n, i, num;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == num)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("Number found at index %d", i);
    }
    else
    {
        printf("Number not found");
    }

    return 0;
}