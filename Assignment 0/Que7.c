#include <stdio.h>

int main()
{
    int minutes, hours, rem;

    minutes = 135;

    hours = minutes / 60;
    rem = minutes % 60;

    printf("Total Minutes = %d\n", minutes);
    printf("Hours = %d\n", hours);
    printf("Remaining Minutes = %d", rem);

    return 0;
}