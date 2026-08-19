#include <stdio.h>

int main()
{
    int n, i, num, temp, digit, count, sum, power, j;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d are:\n", n);

    for(i = 1; i <= n; i++)
    {
        num = i;
        temp = i;
        count = 0;
        sum = 0;

       
        while(temp != 0)
        {
            count++;
            temp = temp / 10;
        }

        temp = i;

       
        while(temp != 0)
        {
            digit = temp % 10;

            power = 1;

            for(j = 1; j <= count; j++)
            {
                power = power * digit;
            }

            sum = sum + power;
            temp = temp / 10;
        }

        
        if(sum == num)
        {
            printf("%d ", num);
        }
    }

    return 0;
}