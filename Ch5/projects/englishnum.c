#include <stdio.h>

// Description: Write a prograam that asks the user for a two-digit number, then prints the english word
// for that number

int main (void)
{
    int number = 10, number_tens = 1, number_ones = 1;
    
    
    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    // checks if teen number
    if(number < 10)
    {
        printf("Not a two digit number.\n");
    }
    else if (number <= 20)
    {
        switch(number)
        {
            case 10:
                printf("ten");
                break;
            case 11:
                printf("eleven");
                break;
            case 12:
                printf("twelve");
                break;
            case 13:
                printf("thirteen");
                break;
            case 14:
                printf("fourteen");
                break;
            case 15:
                printf("fifteen");
                break;
            case 16:
                printf("sixteen");
                break;
            case 17:
                printf("seventeen");
                break;
            case 18:
                printf("eighteen");
                break;
            case 19:
                printf("nineteen");
                break;
        }
        printf("\n")
    }
    else
    {
        number_tens = number / 10;
        number_ones = number % 10;

        switch (number_tens)
        {
            case 2:
                printf("twenty");
                break;
            case 3:
                printf("thirty");
                break;
            case 4:
                printf("fourty");
                break;
            case 5:
                printf("fifty");
                break;
            case 6:
                printf("sixty");
                break;
            case 7:
                printf("seventy");
                break;
            case 8:
                printf("eighty");
                break;
            case 9:
                printf("ninety");
                break;
        }
        
        if (number_ones != 0)
        {
            switch (number_ones)
            {
                case 1:
                    printf("-one");
                    break;
                case 2:
                    printf("-two");
                    break;
                case 3:
                    printf("-three");
                    break;
                case 4:
                    printf("-four");
                    break;
                case 5:
                    printf("-five");
                    break;
                case 6:
                    printf("-six");
                    break;
                case 7:
                    printf("-seven");
                    break;
                case 8:
                    printf("-eight");
                    break;
                case 9:
                    printf("-nine");
                    break;        
            }
            printf("\n");
        }
    }
}