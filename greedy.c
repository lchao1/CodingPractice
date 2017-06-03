#include <stdio.h>
#include <cs50.h>
#include <math.h>

/* 
 * Prompt user for input in dollars. Determine the least number of coins
 * needed to return that amount in change. 
 *
 * Ex. Input: 0.70, Output: 4 (2 quarters, 2 dimes)
 *
 */

int main(void)
{
    float dollar;
    do
    {
    printf("O hai! How much change is owed?\n");
    dollar = get_float();
    }
    while (dollar <= 0);
    
    int cents = round(dollar * 100);
    int coin = 0;
    
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    
    while (cents >= quarter)
    {
        coin++;
        cents = cents - 25;
    }
    while (cents >= dime)
    {
        coin++;
        cents = cents - 10;
    }
    while (cents >= nickel)
    {
        coin++;
        cents = cents - 5;
    }
    while (cents >= penny)
    {
        coin++;
        cents = cents - 1;
    }
        
    printf("%i\n", coin);
}