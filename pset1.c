//Problem Set 1

//hello
#include <stdio.h>
#include <cs50.h>

int main (void)
{
    string name = get_string("What is your name?\n");
    printf("hello, %s\n", name);
}

//mario/more
#include <stdio.h>
#include <cs50.h>

// get number from person
// check if positive...if not reprompt
// draw picture in terminal
//draw reverse side of picture

int main(void)
{
    int count;

    do
    {
        count = get_int("Give me a number:");
    }
    while (count < 1 || count > 8);


    int printCount = 1;

    for (int i = 0; i < count; i++)
    {
        for (int j = 1; j <= (count - printCount); j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= printCount; k++)
        {
            printf("#");
        }

        printf("  ");

        for (int k = 1; k <= printCount; k++)
        {
            printf("#");
        }

        ++ printCount;
        printf("\n");

    }

}

//cash
#include <stdio.h>
#include <cs50.h>
#include <math.h>

//1.get change amount and convert to pennies
//2.determine least amount of coins:
// check in order if quarter, dime etc are smaller/bigger than amount
// subtract that from change and add ++ to coin amount
// recheck until too small and go to smaller coin until 0
//3.print smallest number of coins


int main(void)
{
    float change;

    do
    {
        change = get_float("Change needed:");
    }
    while (change < 0);

    int pennies = round((change) * 100);

    int coinCount = 0;

    do
    {
        if (pennies >= 25)
        {
            pennies = pennies - 25;
            coinCount++ ;
        }
        else if (pennies >= 10)
        {
            pennies = pennies - 10;
            coinCount++ ;
        }
        else if (pennies >= 5)
        {
            pennies = pennies - 5;
            coinCount++ ;
        }
        else if (pennies >= 1)
        {
            pennies = pennies - 1;
            coinCount++ ;
        }
    }
    while (pennies > 0);

    printf("%i\n", coinCount);

}