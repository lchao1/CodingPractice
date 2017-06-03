/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>
//#include <stdio.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    if (n <= 0)
    {
        return false;
    }
    
    // 0 1 2 3 4 5 6 7 8
    //start = 0, end = 8
    //middle = 4, middleval = 3
    
    //start = 5, end = 8
    //middle = 6, middeval = 5
    
    //start = 7, end = 8
    //middle = 7, middleval = 6
    
    
    int start = 0, end = n-1, middle;
    while (end - start>=0) 
    {
        middle = (start + end)/2;
        //printf("\n%i\n", middle);
        
        if (values[middle] == value)
        {
            return true;
        }
        else if (value > values[middle])
        {
            start = middle + 1;
        }
        else if (value < values[middle])
        {
            end = middle - 1; 
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm (bubble)
    
    for (int j=0; j<n-1; j++) //sort through n-1 times, each time putting largest number at end
    {
        for (int i=0; i<n-1-j; i++) //sort through array once
        {
            if(values[i]>values[i+1])
            {
                int temp = values[i+1];
                values[i+1] = values[i];
                values[i] = temp;
            }
        }
    }
    return;
}
