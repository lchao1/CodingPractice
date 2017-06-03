#include <stdio.h>
#include <cs50.h>


/*

Prompt user for a number. Print a pyramid of that height. 
Ex: Input: 2, Output:  # #
                      ## ##
*/


int main(void)
{
    int height;
    do  
    {
    printf("Height: ");
    height = get_int();
    }
    while (height < 0 || height > 23);
    
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
            }
        for (int j = 0; j <= i; j++)
        {
            printf("#");
            }
        printf("  ");
        for (int j = 0; j <= i; j++)
        {
            printf("#");
            }
        printf("\n");
    }
}

