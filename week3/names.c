#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Adams", "Betty", "Chris", "Daniel","Emmanuel", "fred", "Greg"};

    for (int i = 0; i < 7; i++)
    {
        if (strcmp (names[i], "Declan") == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}