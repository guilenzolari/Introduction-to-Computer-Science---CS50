//comparador de pontos acertados

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    const int MINE = 2;
    int point = get_int("How many points did you lose?");

    if (point < MINE)
    {
        printf("You lost fewer points than me.\n");
    }

    else if(point > MINE)
    {
        printf("You lost more points than me.\n");
    }

    else
    {
        printf("You lost the same number of points than me.\n");
    }
}

//usar o comando "const" faz com que eu não possa mudar o valor da variável. Oferece segurança pra caso eu a mude acidentalmente.
//quando uso "const" é de bom tom nomear a variável com letra maiúscula: MINE