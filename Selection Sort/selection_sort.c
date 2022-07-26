// selection sort algorithm
// search the unsorted part of the data to find the smallest value
// swap the smallest found value with the first element of the unsorted part

#include <stdio.h>

// function to swap numbers
void swap(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

int main(void)
{
  // unsorted array
  int array[] = {4, 8, 7, 8, 8, 45, 2, 7, 0, 32, 45, 4, 3, 5, 11};
  int n = 15;

  // algorithm
  for (int i = 0; i < n - 1; i++)
  {
    int min = i;
    for (int j = i + 1; j < n; j++)
    {
      if (array[min] > array[j])
        min = j;
    }

    if (min != i)
    {
      swap(&array[min], &array[i]);
    }
  }

  // printing sorted array
  printf("sorted array = ");

  for (int i = 0; i < 15; i++)
  {
    printf("%i ", array[i]);
  }
  printf("\n");
}