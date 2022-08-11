// encontra um nome e um numero em uma agenda
// strcmp compara se duas strings sao iguais ou nao

#include <cs50.h>
#include <stdio.h>
#include <string.h>

// criando uma estrutura vazia chamada "person" composta por duas strings: name e number
typedef struct
{
  string name;
  string number;
} person;

int main(void)
{

  // definindo o tamanho e preenchendo essa estrutura vazia chamada person
  person people[2];

  people[0].name = "Carter";
  people[0].number = "+1-67-495-1000";

  people[1].name = "David";
  people[1].number = "+1-67-898-2000";

  for (int i = 0; i < 2; i++)
  {
    if (strcmp(people[i].name, "David") == 0)
    {
      printf("Found%s\n", people[i].number);
      return 0;
    }
  }
  printf("Not found\n");
  return 1;
}