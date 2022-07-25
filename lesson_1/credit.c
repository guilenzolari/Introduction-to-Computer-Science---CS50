// verifica se o numero inserido e um numero de cartao de credito valido e sua bandeira

#include <cs50.h>
#include <stdio.h>
#include <math.h>

// american express --> 15dig, starts 34 or 37
// mastercard --> 16dig, starts 51,52,53,54 or 55
// visa --> 13 or 16dig, starts 4

int main(void)
{
  // input
  long long cardnumber = get_long("Number: ");
  long long lenght = cardnumber;

  // tamanho do numero
  int count = 0;
  do
  {
    lenght /= 10;
    ++count;
  } while (lenght != 0);

  // criando uma matriz do tamanho do numero
  int number[count];

  // armazenando cada digito do numero na matriz na ordem invertida
  for (int i = 0; i < count; i++)
  {
    number[i] = cardnumber % 10;
    cardnumber = cardnumber / 10;
  }

  // multiplicando os numeros por 2 e somando-os
  int soma_dobro = 0;
  for (int i = 1; i < count; i = i + 2)
  {
    int dobro = (number[i] * 2);

    // caso o numero tenha 2 digitos
    if (dobro > 9)
    {
      soma_dobro = soma_dobro + 1 + dobro % 10;
    }

    // caso tenha 1 digito
    else
    {
      soma_dobro = soma_dobro + dobro;
    }
  }

  // somando os demais numeros
  int soma_demais = 0;
  for (int i = 0; i < count; i = i + 2)
  {
    soma_demais = soma_demais + number[i];
  }

  int total = soma_demais + soma_dobro;

  // prints
  if (count == 15 && total % 10 == 0 && number[count - 1] == 3 && (number[count - 2] == 4 || number[count - 2] == 7))
  {
    printf("%s", "AMEX\n");
  }

  else if ((count == 13 || count == 16) && total % 10 == 0 && number[count - 1] == 4)
  {
    printf("%s", "VISA\n");
  }

  else if (count == 16 && total % 10 == 0 && number[count - 1] == 5 && (number[count - 2] == 1 || number[count - 2] == 2 || number[count - 2] == 3 || number[count - 2] == 4 || number[count - 2] == 5))
  {
    printf("%s", "MASTERCARD\n");
  }

  else
  {
    printf("%s", "INVALID\n");
  }
}
