#include <cs50.h>
#include <stdio.h>

int main(void)
{
    const int mine = 2;
    int points = get_int("how many points did you lose? ");

    if (points < mine)
    {
        printf("you lost fewer points than me\n");
    }

    else if (points > mine)
    {
        printf("you lost more points than me\n");
    }

    else
    {
        printf("we both lost same number of points\n");
    }

}