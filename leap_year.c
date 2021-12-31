#include <stdio.h>
// THIS DOESNT WORK FUTURE ME IF YOU COME HERE TRY TO FIX THIS PLS THANKS
int main()
{
    int year;
    printf("Enter the year to be checked\n");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("This is a leap year");
                
            }
            else
            {
                printf("This is not a leap year");
                break;
            }
            printf("This is a leap year");
            break;
        }
        printf("This is a leap year");
        break;
    }
    else
    {
        printf("This is not a leap year\n");
        break;
    }
    return 0;
}