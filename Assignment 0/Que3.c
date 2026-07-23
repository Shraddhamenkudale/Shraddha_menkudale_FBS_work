#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    celsius = 45;   

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Celsius = %f\n", celsius);
    printf("Fahrenheit = %f", fahrenheit);

    return 0;
}