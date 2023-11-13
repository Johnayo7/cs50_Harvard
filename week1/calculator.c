#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //prompt user for x
    long x = get_long("x: ");

    //prompt user for y
    long y = get_long("y: ");

    //introduce reusable variable z
    long z = x + y;

    //perform addition
    printf("%li\n", z);
}