#include <cs50.h>
#include <stdio.h>
#include <math.h> //math library --> corrige o bug da imprecisao da multiplicacao pelo uso do round

int main(void)
{
    float amount = get_float("Dollar amount: ");
    int pennies = round(amount * 100);
    printf("Pennies: %i\n", pennies);
}