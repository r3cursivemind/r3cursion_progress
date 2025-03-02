#include <stdio.h>

void quicksortMiddle(int array[], int low, int high) {
  if (low < high) {
      int pivot = array[(low + high) / 2];
      int i = low;
      int j = high;
      int temp;

      while (i <= j) {
          while (array[i] < pivot) i++; 
          while (array[j] > pivot) j--; 

          if (i <= j) {
              temp = array[i];        
              array[i] = array[j];
              array[j] = temp;
              i++;
              j--;
          }
      }

      if (low < j) quicksortMiddle(array, low, j);
      if (i < high) quicksortMiddle(array, i, high);
  }
}

void printArray(int array[], int size)
{
  for (int i = 0; i < size; i++)
      printf("%d ", array[i]);
  printf("\n");
}

int main()
{
  int array[] = {34, 62, 32, 23, 5, 7};
  int n = sizeof(array) / sizeof(array[0]);

  printf("Original Array: \n");
  printArray(array, n);

  quicksortMiddle(array, 0, n - 1);
  printf("Sorted with Middle Element as Pivot: \n");
  printArray(array, n);

  return 0;
}