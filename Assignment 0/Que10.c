#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5, total;
    float percentage;

    m1 = 85;
    m2 = 78;
    m3 = 92;
    m4 = 88;
    m5 = 75;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    printf("Subject 1 = %d\n", m1);
    printf("Subject 2 = %d\n", m2);
    printf("Subject 3 = %d\n", m3);
    printf("Subject 4 = %d\n", m4);
    printf("Subject 5 = %d\n", m5);

    printf("\nTotal Marks = %d\n", total);
    printf("Percentage = %f%%", percentage);

    return 0;
}