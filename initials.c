#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// Prompt user for name, return initials in capital letters


int main(void)
{
    string name = get_string();
    
    if (isalpha(name[0]))
    {
        printf("%c", toupper(name[0]));
    }
    
    for (int i=1; i<strlen(name); i++)
    {
    
        if (name[i-1] == ' ' && isalpha(name[i]))
        {
            printf("%c", toupper(name[i]));
        }
   
    }
    
    printf("\n");
    
}