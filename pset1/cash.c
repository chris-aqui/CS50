#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float cash;
    int i;
    int counter;
    int c25;
    int c10;
    int c5;

    do
    {
        //  ask for user inpuy
        printf("Change owed: ");
        // call get float function
        cash = get_float();
        // using math lib to round it
        cash = roundf(cash*100);
        i = cash;
        // print check
        printf("Cash on hand %f\n", cash);
        printf("coin on hand %i \n", i);
    }
    while (cash <= 0);

    // tracking coin count
    counter = 0;
    c25 = 0;
    c10 = 0;
    c5 = 0;

    while (i >= 25)
    {
        c25++;
        counter++;
        i -= 25;
        // printf("25 cent %i \n", i);
    }
    while (i >= 10)
    {
        c10++;
        counter++;
        i -= 10;
        // printf("10 cent %i \n", i);
    }
    while (i >= 5)
    {
        c5++;
        counter++;
        i -= 5;
        // printf("5 cent  %i \n", i);
    }

    // counting the change
    // printf("# of 25c= %d\n# of 10c= %d\n# of 5c= %d\n", c25, c10, c5);
    printf("%d\n", counter + i);

    return 0;
}