#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0;
    int i, blank, brick;

    // Prompt the user for the height of the pyramid, the height must be higher than 1 and lower than eight
    do
    {
        height = get_int("Enter height: ");
    }
    while (height < 1 || height > 8);

    // Will build the Pyramid
    for (i = 0; i < height; i++)
    {
        // Will add the blank spaces on the pyramid
        for (blank = 0; blank < height - i - 1; blank++)
        {
            printf(" ");
        }

        // Will add the bricks
        for (brick = 0; brick <= i; brick++)
        {
            printf("#");
        }

        // Will change the row of the pyramid
        printf("\n");
    }
}