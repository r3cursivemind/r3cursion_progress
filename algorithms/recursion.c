#include <stdio.h>

int factorial(int n) {
  if (n == 1)
    return 1;
  else 
    return factorial(n - 1) * n;
}

int main()
{
  int n;

  printf("Enter a number to start factorial calculation: ");
  scanf("%d", &n);
  printf("%d\n", factorial(n));
  
	return 0;
}


