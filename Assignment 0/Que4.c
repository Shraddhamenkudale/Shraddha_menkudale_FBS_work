#include <stdio.h>

int main()
{
    int a, b, temp;

    a = 10;
    b = 20;

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    temp = a;
    a = b;
    b = temp;
 
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}