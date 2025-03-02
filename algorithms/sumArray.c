#include <stdio.h>

int sum(int *array, int n) {
  int total = 0;
  for (int i = 0; i < n; i++) {
    total += array[i];
  }
  return total;
}

int main()
{
  int array[] = {1, 2, 3, 4, 5};
  int n = sizeof(array) / sizeof(array[0]);
  printf("%d\n", sum(array, n));
  
	return 0;
}
