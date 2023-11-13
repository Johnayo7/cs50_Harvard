#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("How many tests? ");

    int scores[n];

    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score: ");
    }
    float average = ("%i", scores[i]) / n;
    {
        printf("Average: %f\n", average);
    }
}