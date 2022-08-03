// Program that encrypts messages using Caesar’s cipher
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int only_digits(string s);

int main(int argc, string argv[1])
{
  // Make sure program was run with just one command-line argument
  if (argc == 2)
  {
  }
  else
  {
    printf("%s", "Usage: ./caesar key\n");
    return 1;
  }

  // Make sure every character in argv[1] is a digit
  int only_digits(string S);

  // Convert argv[1] from a `string` to an `int`
  string S = argv[1];
  int K = atoi(S);

  // Prompt user for plaintext
  string plaintext = get_string("plaintext:  ");
  printf("ciphertext: ");
  // For each character in the plaintext, Rotate the character if it's a letter
  for (int i = 0; i < strlen(plaintext); i++)
    if (isalpha(plaintext[i]))
    {
      if (isupper(plaintext[i]))
      {
        char L = plaintext[i] - 65;
        char Ci = (L + K) % 26;
        Ci = Ci + 65;
        printf("%c", Ci);
      }
      if (islower(plaintext[i]))
      {
        char L = plaintext[i] - 97;
        char Ci = (L + K) % 26;
        Ci = Ci + 97;
        printf("%c", Ci);
      }
    }
    else
    {
      printf("%c", plaintext[i]);
    }

  printf("\n");
}

// Function that verify if the string S has only numbers
int only_digits(string s)
{
  for (int i = 0; i < strlen(s); i++)
  {
    int digit_or_not = isdigit(s[i]);
    if (digit_or_not == 1)
    {
    }
    else
    {
      printf("%s", "Usage: ./caesar key\n");
      return 1;
    }
  }
  return 0;
}