//Calculator

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    printf("%i", x+y);
}

//para numeros longos (milhões) usar long ao inves de int e %li ao inves de %i
