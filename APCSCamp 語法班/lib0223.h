#ifndef FUNCTION09_H_
#define FUNCTION09_H_
 
#include <stdio.h>
 
bool solve_quadratic(int a, int b, int c, double &x1, double &x2);
 
int main() {
  int a, b, c; scanf("%d%d%d", &a, &b, &c);
  double x1, x2;
  bool has_solution = solve_quadratic(a, b, c, x1, x2);
  if(has_solution) {
    printf("has solution: x1 = %.6f, x2 = %.6f\n", x1, x2);
  }
  else {
    printf("does not have solution.\n");
  }
  return 0;
}
#endif // FUNCTION09_H_
