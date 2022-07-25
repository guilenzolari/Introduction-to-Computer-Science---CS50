//faz a media de n valores definidos

#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int n = get_int("How many scores?");
  int score[n];

  for(int i = 0; i < n; i++)
  {
    score[i] = get_int("Score: ");
  }

  int total = 0;
  for(int i = 0; i < n; i++)
  {
    total = total + score[i];
  }
  
  printf("Average: %d\n", total / n);
}