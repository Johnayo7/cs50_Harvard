#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[2];

    people[0].name = "Carter";
    people[0].number = "803-846-6213";

    people[1].name = "David";
    people[1].number = "811-260-1784";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp (people[1].name, "David") == 0)
        {
            printf("Found %s\n", people[1].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}