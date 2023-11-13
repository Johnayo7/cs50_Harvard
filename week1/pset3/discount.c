#include <cs50.h>
#include <stdio.h>

float discount(float price, float percentage);
int main(void)
{
    float cost = get_float("Cost Price: ");
    float percent_off = get_float("Percent off: ");
    float sale = discount(cost, percent_off);
    {
        printf("Sale price: %.5f\n", sale);
    }
}

    float discount(float price, float percentage)
    {
        return price * (100 - percentage) / 100;
    }