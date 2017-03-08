#include <stdio.h>
#include <cs50.h>

int main (void)

{
    int height;
    int spaces;
    int hash;
    int i;

    do
    {
       printf("How high is Mario's pyramid?\n");
       height = get_int();
    }
     while ((height < 0) || (height > 23));
    
    for (i = 0; i < height; i++)
    {
        for (spaces = (height - i); spaces > 1; spaces--)
        {
            printf(" ");
        }
        for (hash = 1; hash <= (i + 1); hash++)
        {
            printf("#");
        }
        {
            printf("  ");
        }
        for (hash = 1; hash <= (i + 1); hash++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
 
     
}

// spaces will be whatever i gets to
// hash will be 1 2 3 when i is 1 2 3 