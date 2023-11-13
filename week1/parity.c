#include <cs50.h>
#include <stdio.h>

int main(void)

{
    int n = get_int("parity of n: ");

    if (n % 2 == 0)
    {
        printf("n is even\n");
    }

    else
    {
        printf("n is odd\n");
    }
}