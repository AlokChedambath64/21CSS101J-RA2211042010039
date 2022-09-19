#include <stdio.h>
#include <cs50.h>

int search(int array[], int n, int x)
{
     // Going through array sequencially
  for (int i = 0; i < n; i++)
    if (array[i] == x)
      return i;
  return -1;
}

int main()
{
      int array[] = {2, 4, 0, 1, 9};
  int number = get_int("Number: ");
  int n = sizeof(array) / sizeof(array[0]);

  int result = search(array, n, number);

  (result == -1) ? printf("Element not found") : printf("Element found at index: %d", result);
  printf("\n");
}
