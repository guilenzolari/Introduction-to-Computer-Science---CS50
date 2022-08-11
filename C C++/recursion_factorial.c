#include <stdio.h>

//fatorial por recursao
int fact(int n)
{
  if (n==1)
    return 1;
  else
    return n * fact(n-1);
}

//fatorial por loop
int fact2(int n)
{
  int product =1;
  while (n >0)
  {
    product *=n;
    n--;
  }
  return product;
}

int main(void)
{
  printf("Por recursao: %i\n", fact(5));
  printf("Por loop: %i\n", fact2(5));
}
