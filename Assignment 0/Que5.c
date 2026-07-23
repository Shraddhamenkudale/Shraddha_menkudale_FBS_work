#include <stdio.h>

int main()
{
    int p,q,r,s,t;
    float average;

    p = 10;
    q = 20;
    r = 100;
    s = 40;
    t = 5;

    average = (p+q+r+s+t) / 5.0;

    printf("Numbers are: %d %d %d %d %d\n", p,q,r,s,t);
    printf("Average = %f", average);

    return 0;
}