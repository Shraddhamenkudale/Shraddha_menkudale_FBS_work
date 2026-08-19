#include <stdio.h>

int main()
{
    int n, choice, i;
    int rem, reverse, sum, temp, isPrime;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\n----- MENU -----\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse a Number\n");
    printf("6. Find Sum of Digits\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

   
    if(choice == 1)
    {
        if(n % 2 == 0)
            printf("Even Number");
        else
            printf("Odd Number");
    }

 
    else if(choice == 2)
    {
        isPrime = 1;

        if(n <= 1)
            isPrime = 0;

        for(i = 2; i <= n / 2; i++)
        {
            if(n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if(isPrime == 1)
            printf("Prime Number");
        else
            printf("Not a Prime Number");
    }

    
    else if(choice == 3)
    {
        temp = n;
        reverse = 0;

        for(; temp != 0; temp = temp / 10)
        {
            rem = temp % 10;
            reverse = reverse * 10 + rem;
        }

        if(n == reverse)
            printf("Palindrome Number");
        else
            printf("Not a Palindrome Number");
    }

 
    else if(choice == 4)
    {
        if(n > 0)
            printf("Positive Number");
        else if(n < 0)
            printf("Negative Number");
        else
            printf("Zero");
    }

    else if(choice == 5)
    {
        reverse = 0;

        for(; n != 0; n = n / 10)
        {
            rem = n % 10;
            reverse = reverse * 10 + rem;
        }

        printf("Reverse = %d", reverse);
    }

   
    else if(choice == 6)
    {
        sum = 0;

        for(; n != 0; n = n / 10)
        {
            rem = n % 10;
            sum = sum + rem;
        }

        printf("Sum of digits = %d", sum);
    }

    else
    {
        printf("Invalid Choice");
    }

    return 0;
}