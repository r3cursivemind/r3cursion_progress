#include <stdio.h>

void selectionSort(int array[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int min_index = i;

    for (int j = i + 1; j < n; j++) {
      if (array[j] < array[min_index]) 
        min_index = j;
    }
    int temp = array[i];
    array[i] = array[min_index];
    array[min_index] = temp;
  }
}

void printArray(int array[], int n) {
  for (int i = 0; i < n; i++) {   
    printf("%d ", array[i]);
  }
  printf("\n");
}

int main()
{
  int array[] = {5, 3, 6, 2, 10};
  int n = sizeof(array) / sizeof(array[0]); 

  printf("Original array: ");
  printArray(array, n);

  selectionSort(array, n);

  printf("Sorted array: ");
  printArray(array, n);

	return 0;
}


