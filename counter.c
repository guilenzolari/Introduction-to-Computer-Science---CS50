#include <stdio.h>

int main(void)
{
  int i = 0; // variavel i existe dentro e fora do loop
  while (i < 3)
  {
    printf("meow\n");
    i++; // adiciona +1 a variavel a cada loop
  }
}

//////////////////////////////////////////////

int main(void)
{
  for (int i = 0; i < 3; i++) // variavel i só existe no loop
  {
    printf("meow\n");
  }
}
