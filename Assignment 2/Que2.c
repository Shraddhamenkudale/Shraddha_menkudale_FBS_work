#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b)
    {
        if (b == c)
        {
            printf("Equilateral Triangle");
        }
        else
        {
            printf("Isosceles Triangle");
        }
    }
    else
    {
        if (b == c)
        {
            printf("Isosceles Triangle");
        }
        else
        {
            if (a == c)
            {
                printf("Isosceles Triangle");
            }
            else
            {
                printf("Scalene Triangle");
            }
        }
    }

    return 0;
}