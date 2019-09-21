#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned)time(&t));
    int randomNumber = rand() % 21;

    int num;
    printf("Please enter a number between 1 and 20: ");
    scanf("%d", &num);

    int guessCount = 0;

    while (num != randomNumber)
    {
        while ((num < 0) || (num > 20))
        {
            printf("\nThat is not a valid guess!\nPlease enter a number between 1 and 20: \n");
            scanf("%d", &num);
        }

        while (guessCount <=5)
        {
            if (num < randomNumber)
            {
                printf("\nMy number is higher than %d\n", num);

                if ((5 - guessCount) == 1)
                {
                    printf("You have %d guess left\n", (5 - guessCount));
                }
                else
                {
                    printf("You have %d guesses left\n", (5 - guessCount));
                }

                guessCount += 1;
                scanf("%d", &num);
            }
            else if (num > randomNumber)
            {
                printf("\nMy number is lower than %d\n", num);

                if ((5 - guessCount) == 1)
                {
                    printf("You have %d guess left\n", (5 - guessCount));
                }
                else
                {
                    printf("You have %d guesses left\n", (5 - guessCount));
                }

                guessCount += 1;
                scanf("%d", &num);
            }
            else
            {
                printf("\nCongratulations, you guessed correctly! My number is %d!\n", randomNumber);
                break;
            }
        }

        if (guessCount > 5)
        {
            printf("\nYou have no more guesses left! You lose!\n");
            break;
        }
    }

    return 0;
}
