//verificador se é par(even) ou ímpar(odd)

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("n: ");

    //if n is even
    if(n%2 == 0)
    {
        printf("even\n.");
    }
    //Else
    else
    {
        printf("odd\n.");
    }

}

//o operador % devolve o resto da divisão
//even = par
//odd = impar