#include <stdio.h>
#include <cs50.h>

/*
Prompt user for shower time in minutes. Convert that to how many bottles 
of water would be used to shower that amount of minutes.
*/

int main(void)
{
    int min = get_int();
    printf("Minutes: %i\n", min); 
    
    int bottles = min * (192 / 16);
    printf("Bottles: %i\n", bottles);
}