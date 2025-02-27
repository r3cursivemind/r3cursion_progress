#include <stdio.h>

int sum(int array[], int n) {
  if (n <= 0) 
      return 0;
  return (sum(array, n - 1) + array[n - 1]);
}

int main()
{
  int array[] = {1, 2, 3, 4, 5};
  int n = sizeof(array) / sizeof(array[0]);

  printf("%d\n", sum(array, n));
  
	return 0;
}
