// verifica se o user agree or not com algo

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //prompt user to agree
    char c = get_char("Do you agree?");

    //check wheather user agree
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed.\n");
    }
}

// '||' means or
// the function 'char' is used to store characters and letters
// char =  character variable can store only a single character.