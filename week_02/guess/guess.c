#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number = 10;
    int guess = get_int("What's your guess? ");

    while (guess != number) {
        if (guess != number) {
            printf("Wrong guess!\n");
            guess = get_int("What's your new guess? ");
        } else {
            break;
        }
    }
    if (guess == number){
        printf ("Right guess, congrats!\n");
    }
}