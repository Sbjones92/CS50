#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)

{
    float change;
    int numberofcoins = 0;
  
    
    printf("How much change is owed?\n");
    change = get_float();
        
    while (change < 0)
    
    
    {
        printf("How much change is owed?\n");
        change = get_float();
    }
    
    
        
    int cents = round(change * 100);
    
    while (cents > 0)
    
    {
        
        if ((cents - 25) >= 0)
        
        {
            cents = cents - 25; numberofcoins++;
        }
        
        else if ((cents - 10) >= 0)
        
        {
            cents = cents - 10; numberofcoins++;
        }
        
        else if ((cents - 5) >= 0)
        
        {
            cents = cents - 5; numberofcoins++;
        }
        
        else if ((cents - 1) >= 0)
        
        {
            cents = cents - 1; numberofcoins++;
        }
    }
    
    printf("%i\n", numberofcoins);
    
    
  

}

