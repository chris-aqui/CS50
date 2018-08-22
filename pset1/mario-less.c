#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    int spaces;
    int dashes;

// ask the user for the height while the input is between 0 and 23
    do
    {
        height = get_int("Height: ");
    }
    while (height < 0 || height > 23);

// next loop over the rows for the given number
    for (int i = 0; i < height; i++)
    {
        //loop for the spaces and dashes per row
        // the number of spaces needed would be 1 less then value i int he outside loop
        for (spaces = (height - i - 2); spaces >= 0; spaces--)
        {
            printf(" ");
        }
        for (dashes = 0; dashes <= (i + 1); dashes++)
        {
            printf("#");
        }
        printf("\n");
    }
    //
    return 0;
}