#include <stdio.h>

double myPow(double x, int n) {
  double a = x;
  if (n > 0) {
    double a = x;
    for (int i = 1; i < n; i++) {
      x *= a;
    }
  } else {
    for (int i = 1; i > n; i--) {
      x /= a;
    }
  }

  return x;
}

int main() {

  double x = 2.0;
  int n = 10;

  printf("%f\n", myPow(x, n));

  x = 2.1;
  n = 3;

  printf("%f\n", myPow(x, n));

  x = 2.0;
  n = -2;

  printf("%f\n", myPow(x, n));

  return 0;
}