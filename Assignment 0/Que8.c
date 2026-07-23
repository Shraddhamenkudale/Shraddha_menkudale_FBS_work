#include <stdio.h>

int main()
{
    int length, width, perimeter;

    length = 10;
    width = 12;

    perimeter = 2 * (length + width);

    printf("Length = %d\n", length);
    printf("Width = %d\n", width);
    printf("Perimeter = %d", perimeter);

    return 0;
}