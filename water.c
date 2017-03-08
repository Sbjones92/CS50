#include <stdio.h>
#include <cs50.h>

int main (void)

{
    printf("How many minutes do you shower for?\n");
    int minutes = get_int();
    int bottles = 12 * minutes;
        printf("A shower that lasts %i minutes uses the equivalent of %i bottles of water.\n", minutes, bottles);
}    