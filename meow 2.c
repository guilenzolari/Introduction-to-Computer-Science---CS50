// imprime a palavra meow n vezes
// forma alternativa

#include <stdio.h>

void meow(int n); //a funcao foi definida depois do seu uso, mas C le o programa de cima pra baixa. Escrever essa parte da funcao antes do uso faz com que a funcao funcione corretamente

int main(void)
{
    meow(3);
}

void meow(int n) //function called meow
{
    for (int i = 0; i < n; i++);
    {
        printf("meow\n");
    }
}

// (i = i + 1) é o mesmo que (i++) e (i+=1)
//(i = i -1) é o mesmo que (i--) e (i-=1)