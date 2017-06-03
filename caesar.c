#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

/*
Prompt user for input string and integer. 
Encrypt the input by shifting each letter by the number inputted. 
Print output
*/

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Wrong number of command-line arguments");
        return 1;
    }
    
    //convert string (aka char) to integer
    int k = atoi(argv[1]);

    printf("plaintext: ");
    string ptext = get_string();
    printf("ciphertext: ");
    
    for (int i=0; i<strlen(ptext); i++)
    {
        int ctext;
        
        if (isupper(ptext[i]))
            {
                ctext = (((ptext[i]-65) + k) % 26) + 65; 
            }
        else if (islower(ptext[i]))
            {
                ctext = (((ptext[i]-97) + k) % 26) + 97;
            }
        else
        {
            ctext = ptext[i];
        }
        printf("%c", ctext); 
    }
    
    
    printf("\n");
    
    return 0;
}