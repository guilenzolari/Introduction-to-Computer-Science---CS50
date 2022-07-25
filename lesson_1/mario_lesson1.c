#include <cs50.h>
#include <stdio.h>

/* Programa

Usuario pode escolher altura da piramide de 1 a 8 colocando um height
   #  #
  ##  ##
 ###  ###
####  ####

*/

int main(void)
{
  int h = get_int("Height: ");

  while (true)
    if (h <= 8 && h >= 1)
    {
      for (int i = 0; i < h; i++)
      {
        // intials spaces
        for (int j = h - (i - 1); j > 0; j--)
        {
          printf(" ");
        }

        // primeira #
        for (int j = 0; j < (i + 1); j++)
        {
          printf("#");
        }

        // double space
        printf("  ");

        // segunda #
        for (int j = 0; j < (i + 1); j++)
        {
          printf("#");
        }
        printf("\n");
      }
      break;
    }

    else
    {
      int j = get_int("Height: ");
      h = j;
    }
}