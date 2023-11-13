#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float cost = get_float("Cost Price: ");
    float percent_off = get_float("Percent off: ");
    float sale = cost * (100 - percent_off) / 100;
    {
        printf("Sale Price: %.5f\n", sale);
    }
}


