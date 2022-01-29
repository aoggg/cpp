#ifndef FUNCTION03_H_
#define FUNCTION03_H_

#include <stdio.h>

int median(int a, int b, int c);

int main() {
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  double x1, x2;
  int ans = median(a, b, c);
  printf("%d\n", ans);
  return 0;
}
#endif // FUNCTION03_H_
