#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"John", "Ayo"};
    string numbers[] = {"803-846-6213", "811-260-1784"};

    for (int i =0; i < 2; i++)
    {
        if (strcmp (names[i], "Ayo") == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
printf("Not found\n");
return 1;
}