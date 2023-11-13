#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float regular = get_float("Regular Price: ");
    float sale = regular * .85;
    {
        printf("Sale price: %.2f\n", sale);
    }
}