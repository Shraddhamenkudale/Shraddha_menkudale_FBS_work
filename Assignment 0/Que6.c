#include <stdio.h>

int main()
{
    int num, square, cube;

    num = 9;

    square = num * num;
    cube = num * num * num;

    printf("Number = %d\n", num);
    printf("Square = %d\n", square);
    printf("Cube = %d", cube);

    return 0;
}